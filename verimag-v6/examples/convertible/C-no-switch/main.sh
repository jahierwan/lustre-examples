#!/bin/bash
set -x

otawa="true"
ogensim="true"
xpdf="true"
#ifndef OGENSIM
  OGENSIM=osim.arm
#endif
#ifndef OTAWA
  OTAWA=owcet.arm
#endif
#ifndef ORANGE
  ORANGE=orange
#endif
#ifndef LUSTREV6
  LUSTREV6=lus2lic
#endif

if [ $# -gt 0 ]
    then
    case "$1" in
        "otawa")
            otawa="true"
            ogensim="false"
            xpdf="false"
            ;;
        "ogensim")
            otawa="false"
            ogensim="true"
            xpdf="false"
            ;;
        "both")
            otawa="true"
            ogensim="true"
            xpdf="false"
            ;;
    esac
fi
cfile=convertible_main.c
execfile=main.exec
main_step=convertible_main_step
n=main
n_n=convertible_main
freeport=`python -c 'import socket; s=socket.socket(); s.bind(("", 0)); print(s.getsockname()[1]); s.close()'`
if [ "$otawa" = "true" ]
then
# ZZZ otawa won't work with programs that use division because of orange (!?)
# Let's compile the c files for otawa
arm-elf-gcc --specs=linux.specs -g -o main.exec \
	lustre_consts.c convertible_main.c  convertible_main_main.c > \
	$n_n.owcet.log 2>&1 &&

$ORANGE $cfile ${n_n}_step -o $n_n.ffx > $n_n.orange.log  2>&1 &&

IDIR=`readlink -f fixffx`
IDIR=`dirname "$IDIR"`
ARM_LOOPLOC="$IDIR/arm.looploc"

mkff -x $execfile > $n_n.ff
fixffx $ARM_LOOPLOC -i $n_n.ff >  $n_n.fixed.ffx
# Let's  run otawa (owcet.arm)
$OTAWA $execfile $main_step  -f $n_n.fixed.ffx -f $n_n.ffx --add-prop otawa::ilp::OUTPUT_PATH=$main_step.lp \
	>$n_n.owcet.arm.log 2>&1 && 
grep WCET $n_n.owcet.arm.log | cut -d " " -f 3 > $n.wcet &&

WCET=`cat $n.wcet` 

# Let's compile the c files for ogensim 

fi
if [ "$ogensim" = "true" ]
then
# Now let's run ogensim 
(arm-elf-gcc --specs=linux.specs -g -o main4ogensim.exec \
	lustre_consts.c convertible_main.c  convertible_main_loop.c >>$n_n.owcet.log  2>&1 &&
$LUSTREV6 ../convertible.lus -n $n -interface > $n.io &&
$LUSTREV6 ../convertible.lus -n $n --gen-autotest &&

# Now let's run ogensim 
($OGENSIM main4ogensim.exec -ul 1 \
	-e $main_step -cl $n.cycles -lp $freeport \
	-iol $n.io > $n_n.ogensim.log  2>&1&) && 

sleep 1 &&
(lurettetop -l 1000 -go -ns2c -o ogensim.rif \
	 -rp "sut:socket:127.0.0.1:$freeport:"  \
	 -rp "env:lutin:_${n}_env.lut:${n}_env" || true)) &&

getstat.r $n.cycles $WCET > $n.stat
fi
if [ "$xpdf" = "true" ]
then
           xpdf $n.cycles.pdf &
fi


