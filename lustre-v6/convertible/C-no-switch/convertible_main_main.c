/* This file was generated by lus2lic version master.671 (480ff8adfdc23a03f88ab2796a74a7ecb75975f1). */
/*  lus2lic -2cw7 -2cns ../convertible.lus -n main */
/* on ovaz the 21/11/2016 at 13:49:49 */

#include <stdlib.h>
#include "convertible_main.h" 
int main(){
  _boolean Start;
  _boolean Parked;
  _boolean Rot;
  _boolean Tic;
  _boolean OnOff;
  _boolean Done;
  _real Distance;
  _boolean Danger;
  _boolean Locked;
  _real Speed;
  _real Hood_Speed;
  convertible_main_ctx_type ctx_struct;
  convertible_main_ctx_type* ctx = &ctx_struct;
  convertible_main_ctx_init(ctx);  convertible_main_step(Start,Parked,Rot,Tic,OnOff,Done,Distance,&Danger,&Locked,&Speed,&Hood_Speed,ctx);
  return 0; 
}
