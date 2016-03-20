/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0x7708f090 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "C:/Users/Arte/Documents/GitHub/UART_Testing/ipcore_dir/osdvu/uart.v";
static int ng1[] = {1, 0};
static int ng2[] = {0, 0};
static int ng3[] = {2, 0};
static unsigned int ng4[] = {7U, 0U};
static unsigned int ng5[] = {6U, 0U};
static unsigned int ng6[] = {0U, 0U};
static unsigned int ng7[] = {1U, 0U};
static int ng8[] = {3, 0};
static int ng9[] = {8, 0};
static unsigned int ng10[] = {2U, 0U};
static int ng11[] = {5, 0};
static unsigned int ng12[] = {3U, 0U};
static unsigned int ng13[] = {4U, 0U};
static unsigned int ng14[] = {5U, 0U};
static int ng15[] = {16, 0};



static int sp_log2(char *t1, char *t2)
{
    char t7[8];
    char t11[8];
    char t22[8];
    int t0;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t8;
    char *t9;
    char *t10;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t23;

LAB0:    t0 = 1;
    xsi_set_current_line(126, ng0);

LAB2:    xsi_set_current_line(127, ng0);
    t3 = ((char*)((ng1)));
    t4 = (t1 + 7440);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 32);
    xsi_set_current_line(128, ng0);
    xsi_set_current_line(128, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t1 + 7600);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 32);

LAB3:    t3 = ((char*)((ng3)));
    t4 = (t1 + 7600);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memset(t7, 0, 8);
    xsi_vlog_signed_power(t7, 32, t3, 32, t6, 32, 1);
    t8 = (t1 + 7280);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memset(t11, 0, 8);
    xsi_vlog_signed_leq(t11, 32, t7, 32, t10, 32);
    t12 = (t11 + 4);
    t13 = *((unsigned int *)t12);
    t14 = (~(t13));
    t15 = *((unsigned int *)t11);
    t16 = (t15 & t14);
    t17 = (t16 != 0);
    if (t17 > 0)
        goto LAB4;

LAB5:    t0 = 0;

LAB1:    return t0;
LAB4:    xsi_set_current_line(129, ng0);
    t18 = (t1 + 7600);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    t21 = ((char*)((ng1)));
    memset(t22, 0, 8);
    xsi_vlog_signed_add(t22, 32, t20, 32, t21, 32);
    t23 = (t1 + 7440);
    xsi_vlogvar_assign_value(t23, t22, 0, 0, 32);
    xsi_set_current_line(128, ng0);
    t3 = (t1 + 7600);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = ((char*)((ng1)));
    memset(t7, 0, 8);
    xsi_vlog_signed_add(t7, 32, t5, 32, t6, 32);
    t8 = (t1 + 7600);
    xsi_vlogvar_assign_value(t8, t7, 0, 0, 32);
    goto LAB3;

}

static void Cont_113_0(char *t0)
{
    char t6[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    unsigned int t27;
    unsigned int t28;
    char *t29;
    unsigned int t30;
    unsigned int t31;
    char *t32;
    unsigned int t33;
    unsigned int t34;
    char *t35;

LAB0:    t1 = (t0 + 8520U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(113, ng0);
    t2 = (t0 + 6160);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng4)));
    memset(t6, 0, 8);
    t7 = (t4 + 4);
    t8 = (t5 + 4);
    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t5);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB7;

LAB4:    if (t18 != 0)
        goto LAB6;

LAB5:    *((unsigned int *)t6) = 1;

LAB7:    t22 = (t0 + 10504);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    t25 = (t24 + 56U);
    t26 = *((char **)t25);
    memset(t26, 0, 8);
    t27 = 1U;
    t28 = t27;
    t29 = (t6 + 4);
    t30 = *((unsigned int *)t6);
    t27 = (t27 & t30);
    t31 = *((unsigned int *)t29);
    t28 = (t28 & t31);
    t32 = (t26 + 4);
    t33 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t33 | t27);
    t34 = *((unsigned int *)t32);
    *((unsigned int *)t32) = (t34 | t28);
    xsi_driver_vfirst_trans(t22, 0, 0);
    t35 = (t0 + 10328);
    *((int *)t35) = 1;

LAB1:    return;
LAB6:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB7;

}

static void Cont_114_1(char *t0)
{
    char t6[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    unsigned int t27;
    unsigned int t28;
    char *t29;
    unsigned int t30;
    unsigned int t31;
    char *t32;
    unsigned int t33;
    unsigned int t34;
    char *t35;

LAB0:    t1 = (t0 + 8768U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(114, ng0);
    t2 = (t0 + 6160);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng5)));
    memset(t6, 0, 8);
    t7 = (t4 + 4);
    t8 = (t5 + 4);
    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t5);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB7;

LAB4:    if (t18 != 0)
        goto LAB6;

LAB5:    *((unsigned int *)t6) = 1;

LAB7:    t22 = (t0 + 10568);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    t25 = (t24 + 56U);
    t26 = *((char **)t25);
    memset(t26, 0, 8);
    t27 = 1U;
    t28 = t27;
    t29 = (t6 + 4);
    t30 = *((unsigned int *)t6);
    t27 = (t27 & t30);
    t31 = *((unsigned int *)t29);
    t28 = (t28 & t31);
    t32 = (t26 + 4);
    t33 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t33 | t27);
    t34 = *((unsigned int *)t32);
    *((unsigned int *)t32) = (t34 | t28);
    xsi_driver_vfirst_trans(t22, 0, 0);
    t35 = (t0 + 10344);
    *((int *)t35) = 1;

LAB1:    return;
LAB6:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB7;

}

static void Cont_115_2(char *t0)
{
    char t6[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    unsigned int t27;
    unsigned int t28;
    char *t29;
    unsigned int t30;
    unsigned int t31;
    char *t32;
    unsigned int t33;
    unsigned int t34;
    char *t35;

LAB0:    t1 = (t0 + 9016U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(115, ng0);
    t2 = (t0 + 6160);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng6)));
    memset(t6, 0, 8);
    t7 = (t4 + 4);
    t8 = (t5 + 4);
    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t5);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB5;

LAB4:    if (t18 != 0)
        goto LAB6;

LAB7:    t22 = (t0 + 10632);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    t25 = (t24 + 56U);
    t26 = *((char **)t25);
    memset(t26, 0, 8);
    t27 = 1U;
    t28 = t27;
    t29 = (t6 + 4);
    t30 = *((unsigned int *)t6);
    t27 = (t27 & t30);
    t31 = *((unsigned int *)t29);
    t28 = (t28 & t31);
    t32 = (t26 + 4);
    t33 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t33 | t27);
    t34 = *((unsigned int *)t32);
    *((unsigned int *)t32) = (t34 | t28);
    xsi_driver_vfirst_trans(t22, 0, 0);
    t35 = (t0 + 10360);
    *((int *)t35) = 1;

LAB1:    return;
LAB5:    *((unsigned int *)t6) = 1;
    goto LAB7;

LAB6:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB7;

}

static void Cont_116_3(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;

LAB0:    t1 = (t0 + 9264U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(116, ng0);
    t2 = (t0 + 6480);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 10696);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    xsi_vlog_bit_copy(t9, 0, t4, 0, 64);
    xsi_driver_vfirst_trans(t5, 0, 63);
    t10 = (t0 + 10376);
    *((int *)t10) = 1;

LAB1:    return;
}

static void Cont_118_4(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;

LAB0:    t1 = (t0 + 9512U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(118, ng0);
    t2 = (t0 + 6640);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 10760);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 1U;
    t11 = t10;
    t12 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t10 = (t10 & t13);
    t14 = *((unsigned int *)t12);
    t11 = (t11 & t14);
    t15 = (t9 + 4);
    t16 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t16 | t10);
    t17 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t17 | t11);
    xsi_driver_vfirst_trans(t5, 0, 0);
    t18 = (t0 + 10392);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Cont_119_5(char *t0)
{
    char t6[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    unsigned int t27;
    unsigned int t28;
    char *t29;
    unsigned int t30;
    unsigned int t31;
    char *t32;
    unsigned int t33;
    unsigned int t34;
    char *t35;

LAB0:    t1 = (t0 + 9760U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(119, ng0);
    t2 = (t0 + 6800);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng6)));
    memset(t6, 0, 8);
    t7 = (t4 + 4);
    t8 = (t5 + 4);
    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t5);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB5;

LAB4:    if (t18 != 0)
        goto LAB6;

LAB7:    t22 = (t0 + 10824);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    t25 = (t24 + 56U);
    t26 = *((char **)t25);
    memset(t26, 0, 8);
    t27 = 1U;
    t28 = t27;
    t29 = (t6 + 4);
    t30 = *((unsigned int *)t6);
    t27 = (t27 & t30);
    t31 = *((unsigned int *)t29);
    t28 = (t28 & t31);
    t32 = (t26 + 4);
    t33 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t33 | t27);
    t34 = *((unsigned int *)t32);
    *((unsigned int *)t32) = (t34 | t28);
    xsi_driver_vfirst_trans(t22, 0, 0);
    t35 = (t0 + 10408);
    *((int *)t35) = 1;

LAB1:    return;
LAB5:    *((unsigned int *)t6) = 1;
    goto LAB7;

LAB6:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB7;

}

static void Always_135_6(char *t0)
{
    char t15[8];
    char t24[8];
    char t39[8];
    char t42[8];
    char t44[8];
    char t45[8];
    char t47[16];
    char t48[16];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t16;
    int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    char *t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    char *t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    char *t37;
    char *t38;
    char *t40;
    char *t41;
    char *t43;
    char *t46;
    char *t49;
    char *t50;
    char *t51;
    unsigned int t52;
    unsigned int t53;

LAB0:    t1 = (t0 + 10008U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(135, ng0);
    t2 = (t0 + 10424);
    *((int *)t2) = 1;
    t3 = (t0 + 10040);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(135, ng0);

LAB5:    xsi_set_current_line(136, ng0);
    t4 = (t0 + 3680U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:
LAB8:    xsi_set_current_line(144, ng0);
    t2 = (t0 + 5840);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 4);
    t6 = *((unsigned int *)t5);
    t7 = (~(t6));
    t8 = *((unsigned int *)t4);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB10;

LAB11:
LAB12:    xsi_set_current_line(148, ng0);
    t2 = (t0 + 6000);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 4);
    t6 = *((unsigned int *)t5);
    t7 = (~(t6));
    t8 = *((unsigned int *)t4);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB14;

LAB15:
LAB16:    xsi_set_current_line(155, ng0);
    t2 = (t0 + 6160);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);

LAB18:    t5 = ((char*)((ng6)));
    t17 = xsi_vlog_unsigned_case_compare(t4, 3, t5, 3);
    if (t17 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng7)));
    t17 = xsi_vlog_unsigned_case_compare(t4, 3, t2, 3);
    if (t17 == 1)
        goto LAB21;

LAB22:    t2 = ((char*)((ng10)));
    t17 = xsi_vlog_unsigned_case_compare(t4, 3, t2, 3);
    if (t17 == 1)
        goto LAB23;

LAB24:    t2 = ((char*)((ng12)));
    t17 = xsi_vlog_unsigned_case_compare(t4, 3, t2, 3);
    if (t17 == 1)
        goto LAB25;

LAB26:    t2 = ((char*)((ng13)));
    t17 = xsi_vlog_unsigned_case_compare(t4, 3, t2, 3);
    if (t17 == 1)
        goto LAB27;

LAB28:    t2 = ((char*)((ng5)));
    t17 = xsi_vlog_unsigned_case_compare(t4, 3, t2, 3);
    if (t17 == 1)
        goto LAB29;

LAB30:    t2 = ((char*)((ng14)));
    t17 = xsi_vlog_unsigned_case_compare(t4, 3, t2, 3);
    if (t17 == 1)
        goto LAB31;

LAB32:    t2 = ((char*)((ng4)));
    t17 = xsi_vlog_unsigned_case_compare(t4, 3, t2, 3);
    if (t17 == 1)
        goto LAB33;

LAB34:
LAB35:    xsi_set_current_line(263, ng0);
    t2 = (t0 + 6800);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);

LAB151:    t11 = ((char*)((ng6)));
    t17 = xsi_vlog_unsigned_case_compare(t5, 2, t11, 2);
    if (t17 == 1)
        goto LAB152;

LAB153:    t2 = ((char*)((ng7)));
    t17 = xsi_vlog_unsigned_case_compare(t5, 2, t2, 2);
    if (t17 == 1)
        goto LAB154;

LAB155:    t2 = ((char*)((ng10)));
    t17 = xsi_vlog_unsigned_case_compare(t5, 2, t2, 2);
    if (t17 == 1)
        goto LAB156;

LAB157:    t2 = ((char*)((ng12)));
    t17 = xsi_vlog_unsigned_case_compare(t5, 2, t2, 2);
    if (t17 == 1)
        goto LAB158;

LAB159:
LAB160:    goto LAB2;

LAB6:    xsi_set_current_line(136, ng0);

LAB9:    xsi_set_current_line(137, ng0);
    t11 = ((char*)((ng6)));
    t12 = (t0 + 6160);
    xsi_vlogvar_assign_value(t12, t11, 0, 0, 3);
    xsi_set_current_line(138, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 6800);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    goto LAB8;

LAB10:    xsi_set_current_line(144, ng0);

LAB13:    xsi_set_current_line(145, ng0);
    t11 = (t0 + 5840);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    t14 = ((char*)((ng7)));
    memset(t15, 0, 8);
    xsi_vlog_unsigned_minus(t15, 17, t13, 17, t14, 17);
    t16 = (t0 + 5840);
    xsi_vlogvar_assign_value(t16, t15, 0, 0, 17);
    goto LAB12;

LAB14:    xsi_set_current_line(148, ng0);

LAB17:    xsi_set_current_line(149, ng0);
    t11 = (t0 + 6000);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    t14 = ((char*)((ng7)));
    memset(t15, 0, 8);
    xsi_vlog_unsigned_minus(t15, 13, t13, 13, t14, 13);
    t16 = (t0 + 6000);
    xsi_vlogvar_assign_value(t16, t15, 0, 0, 13);
    goto LAB16;

LAB19:    xsi_set_current_line(156, ng0);

LAB36:    xsi_set_current_line(159, ng0);
    t11 = (t0 + 3840U);
    t12 = *((char **)t11);
    memset(t15, 0, 8);
    t11 = (t12 + 4);
    t6 = *((unsigned int *)t11);
    t7 = (~(t6));
    t8 = *((unsigned int *)t12);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB40;

LAB38:    if (*((unsigned int *)t11) == 0)
        goto LAB37;

LAB39:    t13 = (t15 + 4);
    *((unsigned int *)t15) = 1;
    *((unsigned int *)t13) = 1;

LAB40:    t14 = (t15 + 4);
    t18 = *((unsigned int *)t14);
    t19 = (~(t18));
    t20 = *((unsigned int *)t15);
    t21 = (t20 & t19);
    t22 = (t21 != 0);
    if (t22 > 0)
        goto LAB41;

LAB42:
LAB43:    goto LAB35;

LAB21:    xsi_set_current_line(166, ng0);

LAB45:    xsi_set_current_line(167, ng0);
    t3 = (t0 + 5840);
    t5 = (t3 + 56U);
    t11 = *((char **)t5);
    memset(t15, 0, 8);
    t12 = (t11 + 4);
    t6 = *((unsigned int *)t12);
    t7 = (~(t6));
    t8 = *((unsigned int *)t11);
    t9 = (t8 & t7);
    t10 = (t9 & 131071U);
    if (t10 != 0)
        goto LAB49;

LAB47:    if (*((unsigned int *)t12) == 0)
        goto LAB46;

LAB48:    t13 = (t15 + 4);
    *((unsigned int *)t15) = 1;
    *((unsigned int *)t13) = 1;

LAB49:    t14 = (t15 + 4);
    t18 = *((unsigned int *)t14);
    t19 = (~(t18));
    t20 = *((unsigned int *)t15);
    t21 = (t20 & t19);
    t22 = (t21 != 0);
    if (t22 > 0)
        goto LAB50;

LAB51:
LAB52:    goto LAB35;

LAB23:    xsi_set_current_line(185, ng0);

LAB63:    xsi_set_current_line(187, ng0);
    t3 = (t0 + 5840);
    t5 = (t3 + 56U);
    t11 = *((char **)t5);
    memset(t15, 0, 8);
    t12 = (t11 + 4);
    t6 = *((unsigned int *)t12);
    t7 = (~(t6));
    t8 = *((unsigned int *)t11);
    t9 = (t8 & t7);
    t10 = (t9 & 131071U);
    if (t10 != 0)
        goto LAB67;

LAB65:    if (*((unsigned int *)t12) == 0)
        goto LAB64;

LAB66:    t13 = (t15 + 4);
    *((unsigned int *)t15) = 1;
    *((unsigned int *)t13) = 1;

LAB67:    t14 = (t15 + 4);
    t18 = *((unsigned int *)t14);
    t19 = (~(t18));
    t20 = *((unsigned int *)t15);
    t21 = (t20 & t19);
    t22 = (t21 != 0);
    if (t22 > 0)
        goto LAB68;

LAB69:
LAB70:    goto LAB35;

LAB25:    xsi_set_current_line(197, ng0);

LAB89:    xsi_set_current_line(198, ng0);
    t3 = (t0 + 5840);
    t5 = (t3 + 56U);
    t11 = *((char **)t5);
    memset(t15, 0, 8);
    t12 = (t11 + 4);
    t6 = *((unsigned int *)t12);
    t7 = (~(t6));
    t8 = *((unsigned int *)t11);
    t9 = (t8 & t7);
    t10 = (t9 & 131071U);
    if (t10 != 0)
        goto LAB93;

LAB91:    if (*((unsigned int *)t12) == 0)
        goto LAB90;

LAB92:    t13 = (t15 + 4);
    *((unsigned int *)t15) = 1;
    *((unsigned int *)t13) = 1;

LAB93:    t14 = (t15 + 4);
    t18 = *((unsigned int *)t14);
    t19 = (~(t18));
    t20 = *((unsigned int *)t15);
    t21 = (t20 & t19);
    t22 = (t21 != 0);
    if (t22 > 0)
        goto LAB94;

LAB95:
LAB96:    goto LAB35;

LAB27:    xsi_set_current_line(221, ng0);

LAB113:    xsi_set_current_line(222, ng0);
    t3 = (t0 + 5840);
    t5 = (t3 + 56U);
    t11 = *((char **)t5);
    memset(t15, 0, 8);
    t12 = (t11 + 4);
    t6 = *((unsigned int *)t12);
    t7 = (~(t6));
    t8 = *((unsigned int *)t11);
    t9 = (t8 & t7);
    t10 = (t9 & 131071U);
    if (t10 != 0)
        goto LAB117;

LAB115:    if (*((unsigned int *)t12) == 0)
        goto LAB114;

LAB116:    t13 = (t15 + 4);
    *((unsigned int *)t15) = 1;
    *((unsigned int *)t13) = 1;

LAB117:    t14 = (t15 + 4);
    t18 = *((unsigned int *)t14);
    t19 = (~(t18));
    t20 = *((unsigned int *)t15);
    t21 = (t20 & t19);
    t22 = (t21 != 0);
    if (t22 > 0)
        goto LAB118;

LAB119:
LAB120:    goto LAB35;

LAB29:    xsi_set_current_line(232, ng0);

LAB135:    xsi_set_current_line(238, ng0);
    t3 = ((char*)((ng9)));
    t5 = (t0 + 608);
    t11 = *((char **)t5);
    memset(t15, 0, 8);
    xsi_vlog_signed_multiply(t15, 32, t3, 32, t11, 32);
    t5 = (t0 + 472);
    t12 = *((char **)t5);
    memset(t24, 0, 8);
    xsi_vlog_signed_divide(t24, 32, t15, 32, t12, 32);
    t5 = (t0 + 5840);
    xsi_vlogvar_assign_value(t5, t24, 0, 0, 17);
    xsi_set_current_line(239, ng0);
    t2 = ((char*)((ng14)));
    t3 = (t0 + 6160);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    goto LAB35;

LAB31:    xsi_set_current_line(244, ng0);

LAB136:    xsi_set_current_line(247, ng0);
    t3 = (t0 + 5840);
    t5 = (t3 + 56U);
    t11 = *((char **)t5);
    memset(t24, 0, 8);
    t12 = (t11 + 4);
    t6 = *((unsigned int *)t12);
    t7 = (~(t6));
    t8 = *((unsigned int *)t11);
    t9 = (t8 & t7);
    t10 = (t9 & 131071U);
    if (t10 != 0)
        goto LAB137;

LAB138:    if (*((unsigned int *)t12) != 0)
        goto LAB139;

LAB140:    t14 = (t24 + 4);
    t18 = *((unsigned int *)t24);
    t19 = *((unsigned int *)t14);
    t20 = (t18 || t19);
    if (t20 > 0)
        goto LAB141;

LAB142:    t21 = *((unsigned int *)t24);
    t22 = (~(t21));
    t26 = *((unsigned int *)t14);
    t27 = (t22 || t26);
    if (t27 > 0)
        goto LAB143;

LAB144:    if (*((unsigned int *)t14) > 0)
        goto LAB145;

LAB146:    if (*((unsigned int *)t24) > 0)
        goto LAB147;

LAB148:    memcpy(t15, t23, 8);

LAB149:    t25 = (t0 + 6160);
    xsi_vlogvar_assign_value(t25, t15, 0, 0, 3);
    goto LAB35;

LAB33:    xsi_set_current_line(251, ng0);

LAB150:    xsi_set_current_line(255, ng0);
    t3 = ((char*)((ng6)));
    t5 = (t0 + 6160);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 3);
    goto LAB35;

LAB37:    *((unsigned int *)t15) = 1;
    goto LAB40;

LAB41:    xsi_set_current_line(159, ng0);

LAB44:    xsi_set_current_line(161, ng0);
    t16 = (t0 + 744);
    t23 = *((char **)t16);
    t16 = ((char*)((ng3)));
    memset(t24, 0, 8);
    xsi_vlog_signed_divide(t24, 32, t23, 32, t16, 32);
    t25 = (t0 + 5840);
    xsi_vlogvar_assign_value(t25, t24, 0, 0, 17);
    xsi_set_current_line(162, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 6160);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    goto LAB43;

LAB46:    *((unsigned int *)t15) = 1;
    goto LAB49;

LAB50:    xsi_set_current_line(167, ng0);

LAB53:    xsi_set_current_line(169, ng0);
    t16 = (t0 + 3840U);
    t23 = *((char **)t16);
    memset(t24, 0, 8);
    t16 = (t23 + 4);
    t26 = *((unsigned int *)t16);
    t27 = (~(t26));
    t28 = *((unsigned int *)t23);
    t29 = (t28 & t27);
    t30 = (t29 & 1U);
    if (t30 != 0)
        goto LAB57;

LAB55:    if (*((unsigned int *)t16) == 0)
        goto LAB54;

LAB56:    t25 = (t24 + 4);
    *((unsigned int *)t24) = 1;
    *((unsigned int *)t25) = 1;

LAB57:    t31 = (t24 + 4);
    t32 = *((unsigned int *)t31);
    t33 = (~(t32));
    t34 = *((unsigned int *)t24);
    t35 = (t34 & t33);
    t36 = (t35 != 0);
    if (t36 > 0)
        goto LAB58;

LAB59:    xsi_set_current_line(177, ng0);

LAB62:    xsi_set_current_line(180, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 6160);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);

LAB60:    goto LAB52;

LAB54:    *((unsigned int *)t24) = 1;
    goto LAB57;

LAB58:    xsi_set_current_line(169, ng0);

LAB61:    xsi_set_current_line(172, ng0);
    t37 = (t0 + 744);
    t38 = *((char **)t37);
    t37 = ((char*)((ng3)));
    memset(t39, 0, 8);
    xsi_vlog_signed_divide(t39, 32, t38, 32, t37, 32);
    t40 = (t0 + 744);
    t41 = *((char **)t40);
    t40 = ((char*)((ng8)));
    memset(t42, 0, 8);
    xsi_vlog_signed_multiply(t42, 32, t41, 32, t40, 32);
    t43 = ((char*)((ng9)));
    memset(t44, 0, 8);
    xsi_vlog_signed_divide(t44, 32, t42, 32, t43, 32);
    memset(t45, 0, 8);
    xsi_vlog_signed_add(t45, 32, t39, 32, t44, 32);
    t46 = (t0 + 5840);
    xsi_vlogvar_assign_value(t46, t45, 0, 0, 17);
    xsi_set_current_line(173, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 6320);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(174, ng0);
    t2 = ((char*)((ng10)));
    t3 = (t0 + 6160);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    xsi_set_current_line(175, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 5520);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(176, ng0);
    t2 = ((char*)((ng11)));
    t3 = (t0 + 5680);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    goto LAB60;

LAB64:    *((unsigned int *)t15) = 1;
    goto LAB67;

LAB68:    xsi_set_current_line(187, ng0);

LAB71:    xsi_set_current_line(188, ng0);
    t16 = (t0 + 3840U);
    t23 = *((char **)t16);
    t16 = (t23 + 4);
    t26 = *((unsigned int *)t16);
    t27 = (~(t26));
    t28 = *((unsigned int *)t23);
    t29 = (t28 & t27);
    t30 = (t29 != 0);
    if (t30 > 0)
        goto LAB72;

LAB73:
LAB74:    xsi_set_current_line(191, ng0);
    t2 = (t0 + 744);
    t3 = *((char **)t2);
    t2 = ((char*)((ng9)));
    memset(t15, 0, 8);
    xsi_vlog_signed_divide(t15, 32, t3, 32, t2, 32);
    t5 = (t0 + 5840);
    xsi_vlogvar_assign_value(t5, t15, 0, 0, 17);
    xsi_set_current_line(192, ng0);
    t2 = (t0 + 5680);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t11 = ((char*)((ng7)));
    memset(t15, 0, 8);
    xsi_vlog_unsigned_minus(t15, 4, t5, 4, t11, 4);
    t12 = (t0 + 5680);
    xsi_vlogvar_assign_value(t12, t15, 0, 0, 4);
    xsi_set_current_line(193, ng0);
    t2 = (t0 + 5680);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    memset(t24, 0, 8);
    t11 = (t5 + 4);
    t6 = *((unsigned int *)t11);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 & 15U);
    if (t10 != 0)
        goto LAB76;

LAB77:    if (*((unsigned int *)t11) != 0)
        goto LAB78;

LAB79:    t13 = (t24 + 4);
    t18 = *((unsigned int *)t24);
    t19 = *((unsigned int *)t13);
    t20 = (t18 || t19);
    if (t20 > 0)
        goto LAB80;

LAB81:    t21 = *((unsigned int *)t24);
    t22 = (~(t21));
    t26 = *((unsigned int *)t13);
    t27 = (t22 || t26);
    if (t27 > 0)
        goto LAB82;

LAB83:    if (*((unsigned int *)t13) > 0)
        goto LAB84;

LAB85:    if (*((unsigned int *)t24) > 0)
        goto LAB86;

LAB87:    memcpy(t15, t16, 8);

LAB88:    t23 = (t0 + 6160);
    xsi_vlogvar_assign_value(t23, t15, 0, 0, 3);
    goto LAB70;

LAB72:    xsi_set_current_line(188, ng0);

LAB75:    xsi_set_current_line(189, ng0);
    t25 = (t0 + 5520);
    t31 = (t25 + 56U);
    t37 = *((char **)t31);
    t38 = ((char*)((ng7)));
    memset(t24, 0, 8);
    xsi_vlog_unsigned_add(t24, 4, t37, 4, t38, 4);
    t40 = (t0 + 5520);
    xsi_vlogvar_assign_value(t40, t24, 0, 0, 4);
    goto LAB74;

LAB76:    *((unsigned int *)t24) = 1;
    goto LAB79;

LAB78:    t12 = (t24 + 4);
    *((unsigned int *)t24) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB79;

LAB80:    t14 = ((char*)((ng10)));
    goto LAB81;

LAB82:    t16 = ((char*)((ng12)));
    goto LAB83;

LAB84:    xsi_vlog_unsigned_bit_combine(t15, 3, t14, 3, t16, 3);
    goto LAB88;

LAB86:    memcpy(t15, t14, 8);
    goto LAB88;

LAB90:    *((unsigned int *)t15) = 1;
    goto LAB93;

LAB94:    xsi_set_current_line(198, ng0);

LAB97:    xsi_set_current_line(201, ng0);
    t16 = (t0 + 5520);
    t23 = (t16 + 56U);
    t25 = *((char **)t23);
    t31 = ((char*)((ng8)));
    memset(t24, 0, 8);
    t37 = (t25 + 4);
    if (*((unsigned int *)t37) != 0)
        goto LAB99;

LAB98:    t38 = (t31 + 4);
    if (*((unsigned int *)t38) != 0)
        goto LAB99;

LAB102:    if (*((unsigned int *)t25) > *((unsigned int *)t31))
        goto LAB100;

LAB101:    t41 = (t24 + 4);
    t26 = *((unsigned int *)t41);
    t27 = (~(t26));
    t28 = *((unsigned int *)t24);
    t29 = (t28 & t27);
    t30 = (t29 != 0);
    if (t30 > 0)
        goto LAB103;

LAB104:    xsi_set_current_line(203, ng0);

LAB107:    xsi_set_current_line(204, ng0);
    t2 = (t0 + 6480);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    xsi_vlog_get_part_select_value(t48, 63, t5, 63, 1);
    t11 = ((char*)((ng6)));
    xsi_vlogtype_concat(t47, 64, 64, 2U, t11, 1, t48, 63);
    t12 = (t0 + 6480);
    xsi_vlogvar_assign_value(t12, t47, 0, 0, 64);

LAB105:    xsi_set_current_line(207, ng0);
    t2 = (t0 + 744);
    t3 = *((char **)t2);
    t2 = ((char*)((ng8)));
    memset(t15, 0, 8);
    xsi_vlog_signed_multiply(t15, 32, t3, 32, t2, 32);
    t5 = ((char*)((ng9)));
    memset(t24, 0, 8);
    xsi_vlog_signed_divide(t24, 32, t15, 32, t5, 32);
    t11 = (t0 + 5840);
    xsi_vlogvar_assign_value(t11, t24, 0, 0, 17);
    xsi_set_current_line(208, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 5520);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(209, ng0);
    t2 = ((char*)((ng11)));
    t3 = (t0 + 5680);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(210, ng0);
    t2 = (t0 + 6320);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t11 = ((char*)((ng7)));
    memset(t15, 0, 8);
    xsi_vlog_unsigned_minus(t15, 4, t5, 4, t11, 4);
    t12 = (t0 + 6320);
    xsi_vlogvar_assign_value(t12, t15, 0, 0, 4);
    xsi_set_current_line(212, ng0);
    t2 = (t0 + 6320);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t11 = (t5 + 4);
    t6 = *((unsigned int *)t11);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB108;

LAB109:    xsi_set_current_line(214, ng0);

LAB112:    xsi_set_current_line(215, ng0);
    t2 = ((char*)((ng13)));
    t3 = (t0 + 6160);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    xsi_set_current_line(216, ng0);
    t2 = (t0 + 744);
    t3 = *((char **)t2);
    t2 = ((char*)((ng3)));
    memset(t15, 0, 8);
    xsi_vlog_signed_divide(t15, 32, t3, 32, t2, 32);
    t5 = (t0 + 5840);
    xsi_vlogvar_assign_value(t5, t15, 0, 0, 17);

LAB110:    goto LAB96;

LAB99:    t40 = (t24 + 4);
    *((unsigned int *)t24) = 1;
    *((unsigned int *)t40) = 1;
    goto LAB101;

LAB100:    *((unsigned int *)t24) = 1;
    goto LAB101;

LAB103:    xsi_set_current_line(201, ng0);

LAB106:    xsi_set_current_line(202, ng0);
    t43 = (t0 + 6480);
    t46 = (t43 + 56U);
    t49 = *((char **)t46);
    xsi_vlog_get_part_select_value(t48, 63, t49, 63, 1);
    t50 = ((char*)((ng7)));
    xsi_vlogtype_concat(t47, 64, 64, 2U, t50, 1, t48, 63);
    t51 = (t0 + 6480);
    xsi_vlogvar_assign_value(t51, t47, 0, 0, 64);
    goto LAB105;

LAB108:    xsi_set_current_line(212, ng0);

LAB111:    xsi_set_current_line(213, ng0);
    t12 = ((char*)((ng10)));
    t13 = (t0 + 6160);
    xsi_vlogvar_assign_value(t13, t12, 0, 0, 3);
    goto LAB110;

LAB114:    *((unsigned int *)t15) = 1;
    goto LAB117;

LAB118:    xsi_set_current_line(222, ng0);

LAB121:    xsi_set_current_line(226, ng0);
    t16 = (t0 + 3840U);
    t23 = *((char **)t16);
    memset(t39, 0, 8);
    t16 = (t23 + 4);
    t26 = *((unsigned int *)t16);
    t27 = (~(t26));
    t28 = *((unsigned int *)t23);
    t29 = (t28 & t27);
    t30 = (t29 & 1U);
    if (t30 != 0)
        goto LAB122;

LAB123:    if (*((unsigned int *)t16) != 0)
        goto LAB124;

LAB125:    t31 = (t39 + 4);
    t32 = *((unsigned int *)t39);
    t33 = *((unsigned int *)t31);
    t34 = (t32 || t33);
    if (t34 > 0)
        goto LAB126;

LAB127:    t35 = *((unsigned int *)t39);
    t36 = (~(t35));
    t52 = *((unsigned int *)t31);
    t53 = (t36 || t52);
    if (t53 > 0)
        goto LAB128;

LAB129:    if (*((unsigned int *)t31) > 0)
        goto LAB130;

LAB131:    if (*((unsigned int *)t39) > 0)
        goto LAB132;

LAB133:    memcpy(t24, t38, 8);

LAB134:    t40 = (t0 + 6160);
    xsi_vlogvar_assign_value(t40, t24, 0, 0, 3);
    goto LAB120;

LAB122:    *((unsigned int *)t39) = 1;
    goto LAB125;

LAB124:    t25 = (t39 + 4);
    *((unsigned int *)t39) = 1;
    *((unsigned int *)t25) = 1;
    goto LAB125;

LAB126:    t37 = ((char*)((ng4)));
    goto LAB127;

LAB128:    t38 = ((char*)((ng5)));
    goto LAB129;

LAB130:    xsi_vlog_unsigned_bit_combine(t24, 3, t37, 3, t38, 3);
    goto LAB134;

LAB132:    memcpy(t24, t37, 8);
    goto LAB134;

LAB137:    *((unsigned int *)t24) = 1;
    goto LAB140;

LAB139:    t13 = (t24 + 4);
    *((unsigned int *)t24) = 1;
    *((unsigned int *)t13) = 1;
    goto LAB140;

LAB141:    t16 = ((char*)((ng14)));
    goto LAB142;

LAB143:    t23 = ((char*)((ng6)));
    goto LAB144;

LAB145:    xsi_vlog_unsigned_bit_combine(t15, 3, t16, 3, t23, 3);
    goto LAB149;

LAB147:    memcpy(t15, t16, 8);
    goto LAB149;

LAB152:    xsi_set_current_line(264, ng0);

LAB161:    xsi_set_current_line(265, ng0);
    t12 = (t0 + 4160U);
    t13 = *((char **)t12);
    t12 = (t13 + 4);
    t6 = *((unsigned int *)t12);
    t7 = (~(t6));
    t8 = *((unsigned int *)t13);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB162;

LAB163:
LAB164:    goto LAB160;

LAB154:    xsi_set_current_line(280, ng0);

LAB166:    xsi_set_current_line(281, ng0);
    t3 = (t0 + 6000);
    t11 = (t3 + 56U);
    t12 = *((char **)t11);
    memset(t15, 0, 8);
    t13 = (t12 + 4);
    t6 = *((unsigned int *)t13);
    t7 = (~(t6));
    t8 = *((unsigned int *)t12);
    t9 = (t8 & t7);
    t10 = (t9 & 8191U);
    if (t10 != 0)
        goto LAB170;

LAB168:    if (*((unsigned int *)t13) == 0)
        goto LAB167;

LAB169:    t14 = (t15 + 4);
    *((unsigned int *)t15) = 1;
    *((unsigned int *)t14) = 1;

LAB170:    t16 = (t15 + 4);
    t18 = *((unsigned int *)t16);
    t19 = (~(t18));
    t20 = *((unsigned int *)t15);
    t21 = (t20 & t19);
    t22 = (t21 != 0);
    if (t22 > 0)
        goto LAB171;

LAB172:
LAB173:    goto LAB160;

LAB156:    xsi_set_current_line(297, ng0);

LAB180:    xsi_set_current_line(301, ng0);
    t3 = (t0 + 6000);
    t11 = (t3 + 56U);
    t12 = *((char **)t11);
    memset(t24, 0, 8);
    t13 = (t12 + 4);
    t6 = *((unsigned int *)t13);
    t7 = (~(t6));
    t8 = *((unsigned int *)t12);
    t9 = (t8 & t7);
    t10 = (t9 & 8191U);
    if (t10 != 0)
        goto LAB181;

LAB182:    if (*((unsigned int *)t13) != 0)
        goto LAB183;

LAB184:    t16 = (t24 + 4);
    t18 = *((unsigned int *)t24);
    t19 = *((unsigned int *)t16);
    t20 = (t18 || t19);
    if (t20 > 0)
        goto LAB185;

LAB186:    t21 = *((unsigned int *)t24);
    t22 = (~(t21));
    t26 = *((unsigned int *)t16);
    t27 = (t22 || t26);
    if (t27 > 0)
        goto LAB187;

LAB188:    if (*((unsigned int *)t16) > 0)
        goto LAB189;

LAB190:    if (*((unsigned int *)t24) > 0)
        goto LAB191;

LAB192:    memcpy(t15, t25, 8);

LAB193:    t31 = (t0 + 6800);
    xsi_vlogvar_assign_value(t31, t15, 0, 0, 2);
    goto LAB160;

LAB158:    xsi_set_current_line(304, ng0);

LAB194:    xsi_set_current_line(306, ng0);
    t3 = (t0 + 4160U);
    t11 = *((char **)t3);
    memset(t24, 0, 8);
    t3 = (t11 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (~(t6));
    t8 = *((unsigned int *)t11);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB195;

LAB196:    if (*((unsigned int *)t3) != 0)
        goto LAB197;

LAB198:    t13 = (t24 + 4);
    t18 = *((unsigned int *)t24);
    t19 = *((unsigned int *)t13);
    t20 = (t18 || t19);
    if (t20 > 0)
        goto LAB199;

LAB200:    t21 = *((unsigned int *)t24);
    t22 = (~(t21));
    t26 = *((unsigned int *)t13);
    t27 = (t22 || t26);
    if (t27 > 0)
        goto LAB201;

LAB202:    if (*((unsigned int *)t13) > 0)
        goto LAB203;

LAB204:    if (*((unsigned int *)t24) > 0)
        goto LAB205;

LAB206:    memcpy(t15, t16, 8);

LAB207:    t23 = (t0 + 6800);
    xsi_vlogvar_assign_value(t23, t15, 0, 0, 2);
    goto LAB160;

LAB162:    xsi_set_current_line(265, ng0);

LAB165:    xsi_set_current_line(269, ng0);
    t14 = (t0 + 4320U);
    t16 = *((char **)t14);
    t14 = (t0 + 7120);
    xsi_vlogvar_assign_value(t14, t16, 0, 0, 2);
    xsi_set_current_line(273, ng0);
    t2 = (t0 + 744);
    t3 = *((char **)t2);
    t2 = (t0 + 6000);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 13);
    xsi_set_current_line(274, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 6640);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(275, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 6960);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(276, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 6800);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    goto LAB164;

LAB167:    *((unsigned int *)t15) = 1;
    goto LAB170;

LAB171:    xsi_set_current_line(281, ng0);

LAB174:    xsi_set_current_line(282, ng0);
    t23 = (t0 + 6960);
    t25 = (t23 + 56U);
    t31 = *((char **)t25);
    t37 = (t31 + 4);
    t26 = *((unsigned int *)t37);
    t27 = (~(t26));
    t28 = *((unsigned int *)t31);
    t29 = (t28 & t27);
    t30 = (t29 != 0);
    if (t30 > 0)
        goto LAB175;

LAB176:    xsi_set_current_line(288, ng0);

LAB179:    xsi_set_current_line(290, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 6640);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(291, ng0);
    t2 = ((char*)((ng15)));
    t3 = (t0 + 744);
    t11 = *((char **)t3);
    memset(t15, 0, 8);
    xsi_vlog_signed_multiply(t15, 32, t2, 32, t11, 32);
    t3 = (t0 + 6000);
    xsi_vlogvar_assign_value(t3, t15, 0, 0, 13);
    xsi_set_current_line(292, ng0);
    t2 = ((char*)((ng10)));
    t3 = (t0 + 6800);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);

LAB177:    goto LAB173;

LAB175:    xsi_set_current_line(282, ng0);

LAB178:    xsi_set_current_line(283, ng0);
    t38 = (t0 + 6960);
    t40 = (t38 + 56U);
    t41 = *((char **)t40);
    t43 = ((char*)((ng7)));
    memset(t24, 0, 8);
    xsi_vlog_unsigned_minus(t24, 4, t41, 4, t43, 4);
    t46 = (t0 + 6960);
    xsi_vlogvar_assign_value(t46, t24, 0, 0, 4);
    xsi_set_current_line(284, ng0);
    t2 = (t0 + 7120);
    t3 = (t2 + 56U);
    t11 = *((char **)t3);
    t12 = (t0 + 6640);
    xsi_vlogvar_assign_value(t12, t11, 0, 0, 2);
    xsi_set_current_line(286, ng0);
    t2 = (t0 + 744);
    t3 = *((char **)t2);
    t2 = (t0 + 6000);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 13);
    xsi_set_current_line(287, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 6800);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    goto LAB177;

LAB181:    *((unsigned int *)t24) = 1;
    goto LAB184;

LAB183:    t14 = (t24 + 4);
    *((unsigned int *)t24) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB184;

LAB185:    t23 = ((char*)((ng10)));
    goto LAB186;

LAB187:    t25 = ((char*)((ng12)));
    goto LAB188;

LAB189:    xsi_vlog_unsigned_bit_combine(t15, 2, t23, 2, t25, 2);
    goto LAB193;

LAB191:    memcpy(t15, t23, 8);
    goto LAB193;

LAB195:    *((unsigned int *)t24) = 1;
    goto LAB198;

LAB197:    t12 = (t24 + 4);
    *((unsigned int *)t24) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB198;

LAB199:    t14 = ((char*)((ng12)));
    goto LAB200;

LAB201:    t16 = ((char*)((ng6)));
    goto LAB202;

LAB203:    xsi_vlog_unsigned_bit_combine(t15, 2, t14, 2, t16, 2);
    goto LAB207;

LAB205:    memcpy(t15, t14, 8);
    goto LAB207;

}


extern void work_m_00000000000014465882_1614786015_init()
{
	static char *pe[] = {(void *)Cont_113_0,(void *)Cont_114_1,(void *)Cont_115_2,(void *)Cont_116_3,(void *)Cont_118_4,(void *)Cont_119_5,(void *)Always_135_6};
	static char *se[] = {(void *)sp_log2};
	xsi_register_didat("work_m_00000000000014465882_1614786015", "isim/uart_demo_isim_beh.exe.sim/work/m_00000000000014465882_1614786015.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}
