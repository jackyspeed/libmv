/* Code automatically generated by maple */

#include "maplefuncs.h"

void calc2DHomogLinCoeffs2(m1,m2,eq)
double m1[2];
double m2[2];
double eq[18];
{
  double t1;
  double t2;
  double t3;
  double t4;
  {
    t1 = m1[0];
    eq[0] = -t1;
    t2 = m1[1];
    eq[1] = -t2;
    eq[2] = -1.0;
    eq[3] = 0.0;
    eq[4] = 0.0;
    eq[5] = 0.0;
    t3 = m2[0];
    eq[6] = t1*t3;
    eq[7] = t2*t3;
    eq[8] = t3;
    eq[9] = 0.0;
    eq[10] = 0.0;
    eq[11] = 0.0;
    eq[12] = eq[0];
    eq[13] = eq[1];
    eq[14] = -1.0;
    t4 = m2[1];
    eq[15] = t1*t4;
    eq[16] = t2*t4;
    eq[17] = t4;
    return;
  }
}

void calc2DHomogLinCoeffs3(m1,m2,eq)
double m1[2];
double m2[2];
double eq[27];
{
  double t1;
  double t2;
  double t3;
  double t4;
  double t5;
  double t6;
  {
    eq[0] = 0.0;
    eq[1] = 0.0;
    eq[2] = 0.0;
    t1 = m1[0];
    eq[3] = -t1;
    t2 = m1[1];
    eq[4] = -t2;
    eq[5] = -1.0;
    t3 = m2[1];
    eq[6] = t1*t3;
    eq[7] = t2*t3;
    eq[8] = t3;
    eq[9] = t1;
    eq[10] = t2;
    eq[11] = 1.0;
    eq[12] = 0.0;
    eq[13] = 0.0;
    eq[14] = 0.0;
    t4 = m2[0];
    t5 = t4*eq[9];
    eq[15] = -t5;
    t6 = t4*eq[10];
    eq[16] = -t6;
    eq[17] = -t4;
    eq[18] = -eq[6];
    eq[19] = -eq[7];
    eq[20] = -eq[8];
    eq[21] = t5;
    eq[22] = t6;
    eq[23] = t4;
    eq[24] = 0.0;
    eq[25] = 0.0;
    eq[26] = 0.0;
    return;
  }
}

#include <math.h>
void calc2DHomogNonLinErr(m1,m2,h,err)
double m1[2];
double m2[2];
double h[9];
double err[1];
{
  double t1;
  double t10;
  double t12;
  double t14;
  double t16;
  double t19;
  double t2;
  double t20;
  double t21;
  double t23;
  double t25;
  double t29;
  double t3;
  double t33;
  double t35;
  double t37;
  double t39;
  double t41;
  double t43;
  double t46;
  double t5;
  double t6;
  double t71;
  double t74;
  double t8;
  double t89;
  {
    t1 = m2[0];
    t2 = h[0];
    t3 = m1[0];
    t5 = h[1];
    t6 = m1[1];
    t8 = h[2];
    t10 = h[6];
    t12 = h[7];
    t14 = h[8];
    t16 = 1/(t10*t3+t12*t6+t14);
    t19 = pow(t1-(t2*t3+t5*t6+t8)*t16,2.0);
    t20 = m2[1];
    t21 = h[3];
    t23 = h[4];
    t25 = h[5];
    t29 = pow(t20-(t21*t3+t23*t6+t25)*t16,2.0);
    t33 = t2*t23;
    t35 = t2*t25;
    t37 = t21*t5;
    t39 = t21*t8;
    t41 = t10*t5;
    t43 = t10*t8;
    t46 = 1/(-t33*t14+t35*t12+t37*t14-t39*t12-t41*t25+t43*t23);
    t71 = 1/(-(t21*t12-t23*t10)*t46*t1+(t2*t12-t41)*t46*t20-(t33-t37)*t46);
    t74 = pow(((-t23*t14+t25*t12)*t46*t1-(-t5*t14+t8*t12)*t46*t20+(-t5*t25+t8*
t23)*t46)*t71-t3,2.0);
    t89 = pow(((t14*t21-t25*t10)*t46*t1-(t14*t2-t43)*t46*t20+(t35-t39)*t46)*t71
-t6,2.0);
    err[0] = sqrt(t19+t29+t74+t89);
    return;
  }
}

#include <math.h>
void calc2DHomogNonLinErrGrads(m1,m2,h,grads)
double m1[2];
double m2[2];
double h[9];
double grads[9];
{
  double t1;
  double t10;
  double t100;
  double t101;
  double t103;
  double t107;
  double t108;
  double t109;
  double t110;
  double t111;
  double t113;
  double t114;
  double t115;
  double t117;
  double t118;
  double t12;
  double t120;
  double t124;
  double t125;
  double t126;
  double t127;
  double t128;
  double t130;
  double t131;
  double t135;
  double t14;
  double t144;
  double t15;
  double t151;
  double t152;
  double t154;
  double t156;
  double t16;
  double t160;
  double t174;
  double t175;
  double t176;
  double t178;
  double t18;
  double t186;
  double t19;
  double t2;
  double t20;
  double t203;
  double t204;
  double t206;
  double t21;
  double t211;
  double t214;
  double t216;
  double t220;
  double t223;
  double t23;
  double t235;
  double t236;
  double t238;
  double t243;
  double t246;
  double t248;
  double t25;
  double t26;
  double t264;
  double t266;
  double t272;
  double t276;
  double t28;
  double t29;
  double t291;
  double t292;
  double t293;
  double t294;
  double t296;
  double t298;
  double t3;
  double t300;
  double t302;
  double t306;
  double t308;
  double t311;
  double t315;
  double t317;
  double t319;
  double t32;
  double t328;
  double t33;
  double t331;
  double t333;
  double t337;
  double t339;
  double t342;
  double t348;
  double t35;
  double t360;
  double t361;
  double t363;
  double t37;
  double t371;
  double t39;
  double t41;
  double t43;
  double t45;
  double t46;
  double t5;
  double t51;
  double t56;
  double t58;
  double t6;
  double t61;
  double t65;
  double t68;
  double t70;
  double t71;
  double t73;
  double t74;
  double t77;
  double t8;
  double t81;
  double t84;
  double t86;
  double t88;
  double t89;
  double t9;
  double t91;
  double t92;
  double t95;
  double t96;
  double t97;
  {
    t1 = m2[0];
    t2 = h[0];
    t3 = m1[0];
    t5 = h[1];
    t6 = m1[1];
    t8 = h[2];
    t9 = t2*t3+t5*t6+t8;
    t10 = h[6];
    t12 = h[7];
    t14 = h[8];
    t15 = t10*t3+t12*t6+t14;
    t16 = 1/t15;
    t18 = t1-t9*t16;
    t19 = t18*t18;
    t20 = m2[1];
    t21 = h[3];
    t23 = h[4];
    t25 = h[5];
    t26 = t21*t3+t23*t6+t25;
    t28 = t20-t26*t16;
    t29 = t28*t28;
    t32 = -t23*t14+t25*t12;
    t33 = t2*t23;
    t35 = t2*t25;
    t37 = t21*t5;
    t39 = t21*t8;
    t41 = t10*t5;
    t43 = t10*t8;
    t45 = -t33*t14+t35*t12+t37*t14-t39*t12-t41*t25+t43*t23;
    t46 = 1/t45;
    t51 = -t5*t14+t8*t12;
    t56 = -t5*t25+t8*t23;
    t58 = t32*t46*t1-t51*t46*t20+t56*t46;
    t61 = t21*t12-t23*t10;
    t65 = t2*t12-t41;
    t68 = t33-t37;
    t70 = -t61*t46*t1+t65*t46*t20-t46*t68;
    t71 = 1/t70;
    t73 = t58*t71-t3;
    t74 = t73*t73;
    t77 = t14*t21-t25*t10;
    t81 = t14*t2-t43;
    t84 = t35-t39;
    t86 = t77*t46*t1-t81*t46*t20+t84*t46;
    t88 = t86*t71-t6;
    t89 = t88*t88;
    t91 = sqrt(t19+t29+t74+t89);
    t92 = 1/t91;
    t95 = t32*t32;
    t96 = t45*t45;
    t97 = 1/t96;
    t100 = t51*t97;
    t101 = t20*t32;
    t103 = t56*t97;
    t107 = t70*t70;
    t108 = 1/t107;
    t109 = t58*t108;
    t110 = t61*t97;
    t111 = t1*t32;
    t113 = t12*t46;
    t114 = t113*t20;
    t115 = t65*t97;
    t117 = t23*t46;
    t118 = t68*t97;
    t120 = t111*t110+t114-t115*t101-t117+t118*t32;
    t124 = t77*t97;
    t125 = t124*t111;
    t126 = t14*t46;
    t127 = t126*t20;
    t128 = t81*t97;
    t130 = t25*t46;
    t131 = t97*t84;
    t135 = t86*t108;
    grads[0] = t92*(-2.0*t18*t3*t16+2.0*t73*((-t95*t97*t1+t100*t101-t103*t32)*
t71-t109*t120)+2.0*t88*((-t125-t127+t128*t101+t130-t131*t32)*t71-t135*t120))/
2.0;
    t144 = t20*t77;
    t151 = t10*t46;
    t152 = t151*t20;
    t154 = t21*t46;
    t156 = t110*t1*t77-t152-t115*t144+t154+t118*t77;
    t160 = t77*t77;
    grads[1] = t92*(-2.0*t18*t6*t16+2.0*t73*((-t125+t127+t100*t144-t130-t103*
t77)*t71-t109*t156)+2.0*t88*((-t160*t97*t1+t144*t128-t131*t77)*t71-t135*t156))/
2.0;
    t174 = t32*t97;
    t175 = -t61;
    t176 = t1*t175;
    t178 = t20*t175;
    t186 = t110*t176-t115*t178+t118*t175;
    grads[2] = t92*(-2.0*t18*t16+2.0*t73*((-t174*t176-t114+t100*t178+t117-t103*
t175)*t71-t109*t186)+2.0*t88*((-t124*t176+t152+t128*t178-t154-t131*t175)*t71-
t135*t186))/2.0;
    t203 = -t51;
    t204 = t1*t203;
    t206 = t20*t203;
    t211 = t113*t1;
    t214 = t5*t46;
    t216 = -t211+t110*t204-t115*t206+t214+t118*t203;
    t220 = t126*t1;
    t223 = t8*t46;
    grads[3] = t92*(-2.0*t28*t3*t16+2.0*t73*((-t174*t204+t100*t206-t103*t203)*
t71-t109*t216)+2.0*t88*((t220-t124*t204+t128*t206-t223-t131*t203)*t71-t135*t216
))/2.0;
    t235 = -t81;
    t236 = t1*t235;
    t238 = t20*t235;
    t243 = t151*t1;
    t246 = t2*t46;
    t248 = t243+t110*t236-t115*t238-t246+t118*t235;
    grads[4] = t92*(-2.0*t28*t6*t16+2.0*t73*((-t220-t174*t236+t100*t238+t223-
t103*t235)*t71-t109*t248)+2.0*t88*((-t124*t236+t128*t238-t131*t235)*t71-t135*
t248))/2.0;
    t264 = t1*t65;
    t266 = t20*t65;
    t272 = t65*t65;
    t276 = t110*t264-t272*t97*t20+t118*t65;
    grads[5] = t92*(-2.0*t28*t16+2.0*t73*((t211-t174*t264+t100*t266-t214-t103*
t65)*t71-t109*t276)+2.0*t88*((-t243-t124*t264+t128*t266+t246-t131*t65)*t71-t135
*t276))/2.0;
    t291 = t18*t9;
    t292 = t15*t15;
    t293 = 1/t292;
    t294 = t293*t3;
    t296 = t28*t26;
    t298 = t1*t56;
    t300 = t20*t56;
    t302 = t56*t56;
    t306 = t117*t1;
    t308 = t214*t20;
    t311 = t306+t110*t298-t308-t115*t300+t118*t56;
    t315 = t130*t1;
    t317 = t223*t20;
    t319 = t131*t56;
    grads[6] = t92*(2.0*t291*t294+2.0*t296*t294+2.0*t73*((-t174*t298+t100*t300-
t302*t97)*t71-t109*t311)+2.0*t88*((-t315-t124*t298+t317+t128*t300-t319)*t71-
t135*t311))/2.0;
    t328 = t293*t6;
    t331 = t1*t84;
    t333 = t20*t84;
    t337 = t154*t1;
    t339 = t246*t20;
    t342 = -t337+t110*t331+t339-t115*t333+t118*t84;
    t348 = t84*t84;
    grads[7] = t92*(2.0*t291*t328+2.0*t296*t328+2.0*t73*((t315-t174*t331-t317+
t100*t333-t319)*t71-t109*t342)+2.0*t88*((-t124*t331+t128*t333-t348*t97)*t71-
t135*t342))/2.0;
    t360 = -t68;
    t361 = t1*t360;
    t363 = t20*t360;
    t371 = t110*t361-t115*t363+t118*t360;
    grads[8] = t92*(2.0*t291*t293+2.0*t296*t293+2.0*t73*((-t306-t174*t361+t308+
t100*t363-t103*t360)*t71-t109*t371)+2.0*t88*((t337-t124*t361-t339+t128*t363-
t131*t360)*t71-t135*t371))/2.0;
    return;
  }
}

#include <math.h>
void calc2DHomogSampsonErr(m1,m2,h,err)
double m1[2];
double m2[2];
double h[9];
double err[1];
{
  double t1;
  double t10;
  double t100;
  double t108;
  double t112;
  double t116;
  double t12;
  double t126;
  double t127;
  double t13;
  double t130;
  double t135;
  double t138;
  double t14;
  double t141;
  double t143;
  double t15;
  double t156;
  double t165;
  double t17;
  double t170;
  double t176;
  double t18;
  double t189;
  double t19;
  double t194;
  double t2;
  double t20;
  double t208;
  double t21;
  double t211;
  double t213;
  double t216;
  double t218;
  double t22;
  double t225;
  double t23;
  double t236;
  double t238;
  double t24;
  double t241;
  double t259;
  double t26;
  double t262;
  double t266;
  double t27;
  double t277;
  double t279;
  double t28;
  double t280;
  double t29;
  double t291;
  double t3;
  double t30;
  double t300;
  double t31;
  double t323;
  double t327;
  double t33;
  double t331;
  double t334;
  double t34;
  double t35;
  double t350;
  double t354;
  double t36;
  double t361;
  double t365;
  double t37;
  double t374;
  double t39;
  double t4;
  double t40;
  double t41;
  double t42;
  double t43;
  double t44;
  double t45;
  double t46;
  double t47;
  double t52;
  double t53;
  double t54;
  double t55;
  double t58;
  double t6;
  double t60;
  double t64;
  double t65;
  double t69;
  double t7;
  double t75;
  double t8;
  double t83;
  double t85;
  double t88;
  double t89;
  double t93;
  double t96;
  {
    t1 = m2[0];
    t2 = h[6];
    t3 = t1*t2;
    t4 = m1[0];
    t6 = h[7];
    t7 = t1*t6;
    t8 = m1[1];
    t10 = h[8];
    t12 = h[0];
    t13 = t12*t4;
    t14 = h[1];
    t15 = t14*t8;
    t17 = t3*t4+t7*t8+t1*t10-t13-t15-h[2];
    t18 = m2[1];
    t19 = t18*t18;
    t20 = t2*t2;
    t21 = t19*t20;
    t22 = t18*t2;
    t23 = h[3];
    t24 = t22*t23;
    t26 = t23*t23;
    t27 = t6*t6;
    t28 = t19*t27;
    t29 = t18*t6;
    t30 = h[4];
    t31 = t30*t29;
    t33 = t30*t30;
    t34 = t4*t4;
    t35 = t20*t34;
    t36 = t2*t4;
    t37 = t6*t8;
    t39 = 2.0*t36*t37;
    t40 = t36*t10;
    t41 = 2.0*t40;
    t42 = t8*t8;
    t43 = t27*t42;
    t44 = t37*t10;
    t45 = 2.0*t44;
    t46 = t10*t10;
    t47 = t21-2.0*t24+t26+t28-2.0*t31+t33+t35+t39+t41+t43+t45+t46;
    t52 = t1*t1;
    t53 = t27*t6;
    t54 = t53*t52;
    t55 = t10*t8;
    t58 = t52*t27;
    t60 = t12*t12;
    t64 = t60*t2;
    t65 = t4*t10;
    t69 = t6*t30;
    t75 = t20*t2;
    t83 = t52*t20;
    t85 = t52*t75;
    t88 = t75*t4;
    t89 = t10*t19;
    t93 = t53*t42*t8;
    t96 = -2.0*t7*t14*t26+2.0*t54*t55+t58*t35+2.0*t60*t6*t55+2.0*t64*t65-2.0*
t60*t18*t69-2.0*t3*t12*t46-2.0*t1*t75*t12*t34-2.0*t3*t12*t33+t83*t43+2.0*t85*
t65+2.0*t88*t89+4.0*t36*t93;
    t100 = t75*t34*t4;
    t108 = t14*t14;
    t112 = t108*t2;
    t116 = t2*t23;
    t126 = t12*t23;
    t127 = t14*t30;
    t130 = t46*t18;
    t135 = t10*t33;
    t138 = t8*t53;
    t141 = 6.0*t35*t43+4.0*t100*t37+t35*t28-2.0*t75*t34*t18*t23+2.0*t108*t6*t55
+2.0*t112*t65-2.0*t108*t18*t116-2.0*t7*t14*t46-2.0*t1*t53*t14*t42-2.0*t126*t127
-2.0*t130*t69-2.0*t130*t116+2.0*t135*t37+2.0*t138*t89;
    t143 = t10*t26;
    t156 = t10*t46;
    t165 = t20*t20;
    t170 = 2.0*t37*t143-2.0*t53*t42*t18*t30+t43*t21+2.0*t36*t135+2.0*t36*t143+
t43*t26+4.0*t36*t156+6.0*t46*t35+4.0*t10*t100+t35*t33+t35*t26+t165*t34*t19+t108
*t27*t42;
    t176 = t27*t27;
    t189 = t19*t46;
    t194 = t108*t20*t34+t108*t19*t20+t58*t46+t52*t176*t42+t60*t46+t58*t26+t60*
t20*t34+t60*t19*t27+t83*t46+t52*t165*t34+t83*t33+t189*t27+t189*t20+4.0*t37*t156
;
    t208 = t4*t6*t8;
    t211 = t34*t34;
    t213 = t46*t46;
    t216 = t20*t4;
    t218 = t8*t18;
    t225 = 6.0*t43*t46+4.0*t93*t10+t43*t33+t176*t42*t19+t60*t27*t42+t60*t33+2.0
*t85*t208+t165*t211+t213+t46*t26+t46*t33-4.0*t216*t6*t218*t23+2.0*t88*t37*t19;
    t236 = t1*t27;
    t238 = t36*t8;
    t241 = t7*t14;
    t259 = t3*t12;
    t262 = 12.0*t35*t44-2.0*t35*t31+2.0*t112*t208-2.0*t7*t14*t20*t34-4.0*t236*
t14*t238-4.0*t241*t40-4.0*t236*t15*t10+2.0*t58*t40+2.0*t241*t24+2.0*t54*t238+
t108*t26+t108*t46-2.0*t3*t12*t27*t42-4.0*t259*t44;
    t266 = t1*t20;
    t277 = t42*t42;
    t279 = t14*t18;
    t280 = t279*t6;
    t291 = t10*t18;
    t300 = 2.0*t208*t64-4.0*t266*t12*t208-4.0*t266*t13*t10+2.0*t259*t31+2.0*t83
*t44+t176*t277+2.0*t126*t280-2.0*t43*t24+2.0*t37*t89*t20-4.0*t44*t24-4.0*t27*t8
*t291*t30+2.0*t36*t89*t27-4.0*t40*t31;
    t323 = t14*t2;
    t327 = t12*t18;
    t331 = t236*t18;
    t334 = t7*t30;
    t350 = 12.0*t36*t43*t10+12.0*t36*t37*t46-4.0*t216*t291*t23-2.0*t266*t279*
t30-2.0*t52*t2*t23*t6*t30+2.0*t3*t23*t14*t30-2.0*t12*t19*t323*t6+2.0*t327*t323*
t30-2.0*t126*t331+2.0*t126*t334-4.0*t36*t27*t218*t30+2.0*t36*t37*t33+2.0*t36*
t138*t19+2.0*t36*t37*t26;
    t354 = 1/(t96+t141+t170+t194+t225+t262+t300+t350);
    t361 = t22*t4+t29*t8+t291-t23*t4-t30*t8-h[5];
    t365 = t266*t18-t3*t23-t327*t2+t126+t331-t334-t280+t127;
    t374 = t83-2.0*t259+t60+t58-2.0*t241+t108+t35+t39+t41+t43+t45+t46;
    err[0] = sqrt((t17*t47*t354-t361*t365*t354)*t17+(-t17*t365*t354+t361*t374*
t354)*t361);
    return;
  }
}

#include <math.h>
void calc2DHomogSampsonErrGrads(m1,m2,h,grads)
double m1[2];
double m2[2];
double h[9];
double grads[9];
{
  double t1;
  double t10;
  double t101;
  double t1024;
  double t104;
  double t1064;
  double t1067;
  double t107;
  double t1071;
  double t108;
  double t1096;
  double t111;
  double t1116;
  double t112;
  double t1138;
  double t1161;
  double t117;
  double t118;
  double t1187;
  double t1190;
  double t12;
  double t122;
  double t123;
  double t126;
  double t129;
  double t13;
  double t132;
  double t137;
  double t138;
  double t14;
  double t141;
  double t146;
  double t15;
  double t151;
  double t152;
  double t159;
  double t167;
  double t17;
  double t170;
  double t176;
  double t18;
  double t186;
  double t189;
  double t19;
  double t195;
  double t2;
  double t20;
  double t202;
  double t208;
  double t21;
  double t211;
  double t212;
  double t215;
  double t219;
  double t22;
  double t222;
  double t225;
  double t226;
  double t227;
  double t23;
  double t239;
  double t24;
  double t240;
  double t248;
  double t251;
  double t252;
  double t255;
  double t258;
  double t26;
  double t264;
  double t27;
  double t273;
  double t28;
  double t280;
  double t283;
  double t284;
  double t285;
  double t288;
  double t29;
  double t291;
  double t294;
  double t297;
  double t299;
  double t3;
  double t30;
  double t300;
  double t303;
  double t308;
  double t31;
  double t312;
  double t315;
  double t316;
  double t319;
  double t322;
  double t325;
  double t326;
  double t33;
  double t330;
  double t334;
  double t335;
  double t338;
  double t339;
  double t34;
  double t343;
  double t346;
  double t347;
  double t35;
  double t350;
  double t353;
  double t354;
  double t357;
  double t36;
  double t361;
  double t365;
  double t366;
  double t368;
  double t37;
  double t370;
  double t374;
  double t375;
  double t377;
  double t380;
  double t381;
  double t384;
  double t385;
  double t39;
  double t4;
  double t40;
  double t402;
  double t405;
  double t408;
  double t41;
  double t42;
  double t422;
  double t423;
  double t428;
  double t429;
  double t43;
  double t436;
  double t438;
  double t44;
  double t440;
  double t448;
  double t45;
  double t452;
  double t46;
  double t47;
  double t48;
  double t486;
  double t49;
  double t50;
  double t501;
  double t51;
  double t512;
  double t514;
  double t516;
  double t524;
  double t528;
  double t54;
  double t555;
  double t562;
  double t568;
  double t57;
  double t58;
  double t589;
  double t59;
  double t596;
  double t598;
  double t6;
  double t62;
  double t632;
  double t643;
  double t65;
  double t66;
  double t67;
  double t672;
  double t674;
  double t695;
  double t696;
  double t698;
  double t7;
  double t70;
  double t703;
  double t706;
  double t716;
  double t717;
  double t72;
  double t722;
  double t725;
  double t73;
  double t738;
  double t746;
  double t747;
  double t759;
  double t76;
  double t77;
  double t776;
  double t779;
  double t788;
  double t8;
  double t80;
  double t81;
  double t824;
  double t84;
  double t852;
  double t864;
  double t867;
  double t869;
  double t87;
  double t870;
  double t874;
  double t88;
  double t880;
  double t886;
  double t89;
  double t895;
  double t899;
  double t901;
  double t902;
  double t911;
  double t92;
  double t923;
  double t939;
  double t942;
  double t947;
  double t95;
  double t97;
  double t978;
  double t98;
  double t983;
  {
    t1 = m2[0];
    t2 = h[6];
    t3 = t1*t2;
    t4 = m1[0];
    t6 = h[7];
    t7 = t1*t6;
    t8 = m1[1];
    t10 = h[8];
    t12 = h[0];
    t13 = t12*t4;
    t14 = h[1];
    t15 = t14*t8;
    t17 = t3*t4+t7*t8+t1*t10-t13-t15-h[2];
    t18 = m2[1];
    t19 = t18*t18;
    t20 = t2*t2;
    t21 = t19*t20;
    t22 = t18*t2;
    t23 = h[3];
    t24 = t22*t23;
    t26 = t23*t23;
    t27 = t6*t6;
    t28 = t19*t27;
    t29 = t18*t6;
    t30 = h[4];
    t31 = t30*t29;
    t33 = t30*t30;
    t34 = t4*t4;
    t35 = t20*t34;
    t36 = t2*t4;
    t37 = t6*t8;
    t39 = 2.0*t36*t37;
    t40 = t36*t10;
    t41 = 2.0*t40;
    t42 = t8*t8;
    t43 = t27*t42;
    t44 = t37*t10;
    t45 = 2.0*t44;
    t46 = t10*t10;
    t47 = t21-2.0*t24+t26+t28-2.0*t31+t33+t35+t39+t41+t43+t45+t46;
    t48 = t17*t47;
    t49 = t14*t14;
    t50 = t49*t18;
    t51 = t2*t23;
    t54 = t14*t46;
    t57 = t27*t6;
    t58 = t1*t57;
    t59 = t14*t42;
    t62 = t14*t26;
    t65 = t1*t1;
    t66 = t65*t57;
    t67 = t10*t8;
    t70 = t65*t27;
    t72 = t12*t12;
    t73 = t72*t6;
    t76 = t72*t2;
    t77 = t4*t10;
    t80 = t72*t18;
    t81 = t6*t30;
    t84 = t12*t46;
    t87 = t20*t2;
    t88 = t1*t87;
    t89 = t12*t34;
    t92 = t12*t33;
    t95 = t65*t20;
    t97 = -2.0*t50*t51-2.0*t7*t54-2.0*t58*t59-2.0*t7*t62+2.0*t67*t66+t70*t35+
2.0*t73*t67+2.0*t76*t77-2.0*t80*t81-2.0*t3*t84-2.0*t88*t89-2.0*t3*t92+t95*t43;
    t98 = t65*t87;
    t101 = t10*t33;
    t104 = t10*t26;
    t107 = t87*t4;
    t108 = t10*t19;
    t111 = t42*t8;
    t112 = t57*t111;
    t117 = t34*t4;
    t118 = t87*t117;
    t122 = t87*t34;
    t123 = t18*t23;
    t126 = t49*t6;
    t129 = t49*t2;
    t132 = t57*t8;
    t137 = t57*t42;
    t138 = t18*t30;
    t141 = 2.0*t98*t77+2.0*t36*t101+2.0*t36*t104+2.0*t107*t108+4.0*t36*t112+6.0
*t35*t43+4.0*t118*t37+t35*t28-2.0*t122*t123+2.0*t126*t67+2.0*t129*t77+2.0*t132*
t108+2.0*t37*t104-2.0*t137*t138;
    t146 = t46*t18;
    t151 = t12*t23;
    t152 = t14*t30;
    t159 = t20*t20;
    t167 = t10*t46;
    t170 = t43*t21+2.0*t37*t101-2.0*t146*t51-2.0*t146*t81-2.0*t151*t152+4.0*
t118*t10+t35*t33+t35*t26+t159*t34*t19+t49*t27*t42+t49*t20*t34+t43*t26+4.0*t36*
t167;
    t176 = t19*t46;
    t186 = t27*t27;
    t189 = t49*t19;
    t195 = 6.0*t46*t35+t65*t159*t34+t95*t33+t176*t27+t176*t20+4.0*t37*t167+6.0*
t43*t46+4.0*t112*t10+t43*t33+t186*t42*t19+t189*t20+t70*t46+t65*t186*t42+t70*t26
;
    t202 = t72*t19;
    t208 = t36*t8;
    t211 = t4*t6;
    t212 = t211*t8;
    t215 = t34*t34;
    t219 = t12*t27*t42;
    t222 = t3*t12;
    t225 = t72*t27*t42+t72*t20*t34+t202*t27+t95*t46+t72*t46+t72*t33+t49*t26+2.0
*t66*t208+2.0*t76*t212+t215*t159+t46*t33-2.0*t3*t219-4.0*t222*t44;
    t226 = t1*t20;
    t227 = t13*t10;
    t239 = t46*t46;
    t240 = t37*t19;
    t248 = t42*t42;
    t251 = t1*t27;
    t252 = t15*t10;
    t255 = t7*t14;
    t258 = -4.0*t227*t226-4.0*t226*t12*t212+2.0*t222*t31+2.0*t95*t44+2.0*t98*
t212+t239+2.0*t107*t240+12.0*t35*t44+2.0*t129*t212+t46*t26+t186*t248+t49*t46
-4.0*t251*t252-4.0*t255*t40;
    t264 = t14*t20*t34;
    t273 = t108*t20;
    t280 = t108*t27;
    t283 = t20*t4;
    t284 = t10*t18;
    t285 = t284*t23;
    t288 = t37*t46;
    t291 = t10*t43;
    t294 = t37*t33;
    t297 = -4.0*t251*t14*t208-2.0*t7*t264+2.0*t255*t24+2.0*t70*t40-4.0*t44*t24+
2.0*t37*t273-2.0*t43*t24-4.0*t40*t31+2.0*t36*t280-4.0*t283*t285+12.0*t36*t288+
12.0*t36*t291+2.0*t36*t294;
    t299 = t8*t18;
    t300 = t299*t30;
    t303 = t132*t19;
    t308 = t26*t37;
    t312 = t299*t23;
    t315 = t14*t18;
    t316 = t315*t6;
    t319 = t7*t30;
    t322 = t251*t18;
    t325 = t12*t18;
    t326 = t14*t2;
    t330 = t12*t19;
    t334 = t23*t14;
    t335 = t334*t30;
    t338 = t65*t2;
    t339 = t23*t6;
    t343 = t315*t30;
    t346 = t27*t8;
    t347 = t284*t30;
    t350 = -4.0*t36*t27*t300+2.0*t36*t303-2.0*t35*t31+2.0*t36*t308-4.0*t283*t6*
t312+2.0*t151*t316+2.0*t151*t319-2.0*t151*t322+2.0*t325*t326*t30-2.0*t330*t326*
t6+2.0*t3*t335-2.0*t338*t339*t30-2.0*t226*t343-4.0*t346*t347;
    t353 = t97+t141+t170+t195+t225+t258+t297+t350;
    t354 = 1/t353;
    t357 = t29*t8;
    t361 = t22*t4+t357+t284-t23*t4-t30*t8-h[5];
    t365 = t226*t18-t3*t23-t325*t2+t151+t322-t319-t316+t152;
    t366 = t361*t365;
    t368 = t48*t354-t366*t354;
    t370 = t17*t365;
    t374 = t95-2.0*t222+t72+t70-2.0*t255+t49+t35+t39+t41+t43+t45+t46;
    t375 = t361*t374;
    t377 = -t370*t354+t375*t354;
    t380 = sqrt(t368*t17+t361*t377);
    t381 = 1/t380;
    t384 = t353*t353;
    t385 = 1/t384;
    t402 = t12*t2;
    t405 = t12*t6;
    t408 = 2.0*t219+2.0*t12*t20*t34+2.0*t330*t27+2.0*t92+2.0*t84-2.0*t3*t33-2.0
*t88*t34-2.0*t3*t46-4.0*t325*t81+4.0*t402*t77+4.0*t405*t67;
    t422 = t19*t2;
    t423 = t14*t6;
    t428 = t1*t23;
    t429 = t27*t18;
    t436 = -2.0*t335+2.0*t3*t31-4.0*t226*t212-4.0*t226*t77-2.0*t3*t43-4.0*t3*
t44+4.0*t402*t212-2.0*t422*t423+2.0*t152*t22-2.0*t428*t429+2.0*t428*t81+2.0*
t334*t29;
    t438 = t385*(t408+t436);
    t440 = -t22+t23;
    t448 = t4*t365*t354;
    t452 = -t3+t12;
    grads[0] = t381*((-t4*t47*t354-t48*t438-t361*t440*t354+t366*t438)*t17-t368*
t4+(t448-t17*t440*t354+t370*t438+2.0*t361*t452*t354-t375*t438)*t361)/2.0;
    t486 = 2.0*t14*t27*t42+2.0*t264+2.0*t14*t19*t20-2.0*t7*t26-2.0*t58*t42-2.0*
t7*t46-4.0*t315*t51+4.0*t77*t326+4.0*t423*t67-2.0*t151*t30+2.0*t7*t24;
    t501 = t23*t30;
    t512 = -2.0*t7*t35-4.0*t251*t208-4.0*t7*t40-4.0*t67*t251+2.0*t62+2.0*t54+
4.0*t326*t212-2.0*t226*t138+2.0*t3*t501-2.0*t330*t2*t6+2.0*t325*t2*t30+2.0*t151
*t29;
    t514 = t385*(t486+t512);
    t516 = -t29+t30;
    t524 = t8*t365*t354;
    t528 = -t7+t14;
    grads[1] = t381*((-t8*t47*t354-t48*t514-t361*t516*t354+t366*t514)*t17-t368*
t8+(t524-t17*t516*t354+t370*t514+2.0*t361*t528*t354-t375*t514)*t361)/2.0;
    grads[2] = -t381*t368;
    t555 = t23*t10;
    t562 = t12*t14;
    t568 = 2.0*t43*t23+2.0*t35*t23+2.0*t70*t23-4.0*t7*t334-2.0*t50*t2-2.0*t122*
t18+4.0*t36*t555+4.0*t555*t37-2.0*t146*t2-2.0*t562*t30+2.0*t7*t315*t2;
    t589 = t1*t12;
    t596 = 2.0*t49*t23+2.0*t46*t23-4.0*t283*t357+4.0*t36*t37*t23-4.0*t283*t284
-2.0*t43*t22-4.0*t37*t284*t2-2.0*t338*t81+2.0*t3*t152-2.0*t589*t429+2.0*t589*
t81+2.0*t562*t29;
    t598 = t385*(t568+t596);
    grads[3] = t381*((2.0*t17*t440*t354-t48*t598+t448-t361*t452*t354+t366*t598)
*t17+(-t17*t452*t354+t370*t598-t4*t374*t354-t375*t598)*t361-t377*t4)/2.0;
    t632 = t10*t30;
    t643 = 2.0*t35*t30+2.0*t95*t30+2.0*t43*t30+2.0*t72*t30-4.0*t3*t12*t30-2.0*
t80*t6+4.0*t36*t632-2.0*t137*t18+4.0*t37*t632-2.0*t146*t6-2.0*t151*t14;
    t672 = 2.0*t3*t325*t6+2.0*t46*t30-2.0*t35*t29-4.0*t36*t346*t18+4.0*t36*t37*
t30-4.0*t36*t284*t6-4.0*t346*t284-2.0*t226*t315-2.0*t338*t339+2.0*t3*t334+2.0*
t325*t326+2.0*t151*t7;
    t674 = t385*(t643+t672);
    grads[4] = t381*((2.0*t17*t516*t354-t48*t674+t524-t361*t528*t354+t674*t366)
*t17+(-t17*t528*t354+t370*t674-t8*t374*t354-t375*t674)*t361-t377*t8)/2.0;
    grads[5] = -t381*t377;
    t695 = t1*t4;
    t696 = t47*t354;
    t698 = t2*t34;
    t703 = t36*t6;
    t706 = t4*t27;
    t716 = t4*t57;
    t717 = t8*t19;
    t722 = t8*t26;
    t725 = t8*t46;
    t738 = t4*t14;
    t746 = -8.0*t703*t312-4.0*t706*t300-4.0*t589*t44+4.0*t37*t108*t2-2.0*t330*
t423+2.0*t716*t717-8.0*t36*t285+2.0*t211*t722+12.0*t211*t725+6.0*t283*t240+24.0
*t698*t44-2.0*t589*t46+2.0*t77*t33+2.0*t77*t26-4.0*t7*t738*t10+6.0*t283*t108+
4.0*t716*t111;
    t747 = t49*t4;
    t759 = t20*t117;
    t776 = t4*t8;
    t779 = t72*t4;
    t788 = 2.0*t747*t10-2.0*t50*t23-4.0*t251*t738*t8-2.0*t146*t23+12.0*t698*t43
+12.0*t759*t37+2.0*t698*t28-6.0*t35*t123-4.0*t7*t326*t34+2.0*t7*t315*t23+2.0*
t747*t37+2.0*t70*t77+2.0*t66*t776+2.0*t779*t37-2.0*t589*t43+2.0*t325*t152+2.0*
t70*t698;
    t824 = 6.0*t95*t212+2.0*t43*t422+12.0*t759*t10+2.0*t698*t26+2.0*t338*t46+
2.0*t76*t34+2.0*t189*t2-4.0*t698*t31+2.0*t129*t34+4.0*t122*t19+2.0*t698*t33+2.0
*t779*t10-6.0*t226*t89+2.0*t338*t43+6.0*t95*t77-2.0*t589*t33-8.0*t3*t227;
    t852 = t8*t33;
    t864 = -8.0*t222*t212+12.0*t698*t46+2.0*t589*t31+2.0*t338*t33+2.0*t176*t2+
4.0*t98*t34+4.0*t338*t44+4.0*t87*t215+4.0*t4*t167-2.0*t65*t23*t81+2.0*t152*t428
+2.0*t77*t28-2.0*t43*t123+2.0*t211*t852+12.0*t706*t42*t10-4.0*t3*t343-4.0*t77*
t31-4.0*t285*t37;
    t867 = t385*(t746+t788+t824+t864);
    t869 = t18*t4;
    t870 = t365*t354;
    t874 = 2.0*t3*t18-t428-t325;
    t880 = t368*t1;
    t886 = t374*t354;
    t895 = t377*t18;
    grads[6] = t381*((t695*t696+t17*(2.0*t422-2.0*t123+2.0*t698+2.0*t212+2.0*
t77)*t354-t48*t867-t869*t870-t361*t874*t354+t366*t867)*t17+t880*t4+(-t695*t870-
t17*t874*t354+t370*t867+t869*t886+t361*(2.0*t338-2.0*t589+2.0*t698+2.0*t212+2.0
*t77)*t354-t375*t867)*t361+t895*t4)/2.0;
    t899 = t1*t8;
    t901 = t19*t6;
    t902 = t6*t42;
    t911 = t27*t111;
    t923 = t1*t14;
    t939 = t7*t18;
    t942 = t1*t30;
    t947 = 4.0*t19*t137+2.0*t902*t33+12.0*t911*t10+12.0*t902*t46+2.0*t202*t6+
2.0*t72*t8*t10-2.0*t80*t30-2.0*t923*t46-2.0*t923*t26+4.0*t118*t8+2.0*t49*t8*t10
+2.0*t67*t33+2.0*t67*t26-4.0*t67*t24-4.0*t151*t939+2.0*t151*t942-2.0*t338*t501;
    t978 = t65*t6;
    t983 = 12.0*t36*t725+2.0*t129*t776-2.0*t35*t138+12.0*t35*t67+2.0*t107*t717+
2.0*t36*t722+2.0*t36*t852+2.0*t67*t21-2.0*t330*t326+2.0*t151*t315-2.0*t923*t35+
2.0*t76*t776+2.0*t126*t42+2.0*t902*t26+2.0*t73*t42+2.0*t978*t26+4.0*t66*t42;
    t1024 = -4.0*t902*t24+4.0*t36*t108*t6-8.0*t347*t37+2.0*t978*t46-4.0*t283*
t312+24.0*t36*t902*t10+6.0*t36*t346*t19-8.0*t703*t300-4.0*t347*t36-8.0*t7*t252+
6.0*t70*t208+4.0*t978*t40+2.0*t923*t24-4.0*t3*t12*t8*t10-8.0*t255*t208-4.0*t923
*t40+2.0*t98*t776;
    t1064 = 2.0*t95*t67+4.0*t57*t248+12.0*t35*t902+12.0*t36*t911-2.0*t146*t30
-6.0*t43*t138+6.0*t346*t108-4.0*t3*t405*t42-4.0*t226*t13*t8+2.0*t3*t325*t30+2.0
*t902*t21+2.0*t35*t901+2.0*t978*t35+6.0*t70*t67-6.0*t251*t59+2.0*t95*t902+4.0*
t167*t8+2.0*t176*t6;
    t1067 = t385*(t947+t983+t1024+t1064);
    t1071 = 2.0*t939-t942-t315;
    grads[7] = t381*((t899*t696+t17*(2.0*t901-2.0*t138+2.0*t208+2.0*t902+2.0*
t67)*t354-t48*t1067-t299*t870-t361*t1071*t354+t366*t1067)*t17+t880*t8+(-t899*
t870-t17*t1071*t354+t370*t1067+t299*t886+t361*(2.0*t978-2.0*t923+2.0*t208+2.0*
t902+2.0*t67)*t354-t375*t1067)*t361+t895*t8)/2.0;
    t1096 = 2.0*t36+2.0*t37+2.0*t10;
    t1116 = 2.0*t308+2.0*t36*t33+2.0*t36*t26+2.0*t107*t19+2.0*t126*t8+2.0*t129*
t4+2.0*t76*t4+12.0*t291+12.0*t288+2.0*t273+2.0*t294;
    t1138 = 2.0*t303+12.0*t35*t10+12.0*t36*t46+2.0*t98*t4+2.0*t280+4.0*t167+2.0
*t66*t8+2.0*t73*t8+2.0*t95*t10+2.0*t70*t10+2.0*t37*t21+24.0*t36*t44;
    t1161 = -4.0*t36*t31+2.0*t101+4.0*t112-4.0*t283*t123+2.0*t72*t10+12.0*t36*
t43-4.0*t37*t24-4.0*t3*t405*t8-4.0*t7*t326*t4+2.0*t104+2.0*t49*t10;
    t1187 = 4.0*t118-4.0*t251*t15+12.0*t35*t37-4.0*t226*t13+2.0*t95*t37-4.0*
t346*t138+2.0*t36*t28-4.0*t284*t81-4.0*t284*t51+2.0*t70*t36-4.0*t7*t14*t10-4.0*
t3*t12*t10;
    t1190 = t385*(t1116+t1138+t1161+t1187);
    grads[8] = t381*((t1*t47*t354+t17*t1096*t354-t48*t1190-t18*t365*t354+t366*
t1190)*t17+t880+(-t1*t365*t354+t370*t1190+t18*t374*t354+t361*t1096*t354-t375*
t1190)*t361+t895)/2.0;
    return;
  }
}
