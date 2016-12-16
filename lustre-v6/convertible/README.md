

- convertible.lus: the Lustre program
- lutin/: contains a lutin environment for testing this program
- C/: the Lustre V6 generated C files
- C-no-switch/: the Lustre V6 generated C files using the --no-switch option

  convertible.lus is a Lustre program example meant to be embedded in
  a car,  which controls a  hood motion system and  an anti-collision
  system.   As   both  systems   are  not   supposed  to   be  active
  simultaneously,  it  makes  sense  to  embed  them  into  the  same
  hardware.   The  hood system,  once  activated,  controls the  hood
  motion speed, slowing it down when  it is opened or closed at 95\%.
  The anti-collision system, activated when the vehicle goes beyond a
  certain speed, uses the distance from the preceding vehicle to emit
  an alarm.  The system inputs are:
   + =Rot=  which is  true when  the wheel  has performed  a complete
     rotation. =Tic=,  which is true  when a constant period  of time
     has elapsed.   =Rot= and =Tic=  are used to compute  the vehicle
     =Speed=.   =Tic=  is also  used  to  compute the  percentage  of
     opening of the hood.
   + =Parked=  is true when  the vehicle  is parked. =OnOff=  is true
    when the driver  asks to open or close the  hood.  =Done= is true
    when the hood finishes to close or open.
   +  =Start= is  true when  the driver  wants to  start the  vehicle.
    =Distance= is the distance to the preceding vehicle.

  =Start= and =OnOff= comes from driver requests; the other inputs come
  from sensors.  From those inputs, the program computes two outputs:
    - =Danger=    signals that  the  vehicle  is  too close  to  the
    preceding one (computed from =Speed= and =Distance=).
    - =HoodSpeed=  is a real that controls the speed of the hood.

	


