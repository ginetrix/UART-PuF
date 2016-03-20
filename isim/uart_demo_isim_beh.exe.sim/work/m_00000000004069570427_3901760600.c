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
static const char *ng0 = "C:/Users/Arte/Documents/GitHub/UART_Testing/ipcore_dir/mimas_v2_hex_display/display_hex_byte.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {252U, 0U};
static unsigned int ng3[] = {1U, 0U};
static unsigned int ng4[] = {96U, 0U};
static unsigned int ng5[] = {2U, 0U};
static unsigned int ng6[] = {218U, 0U};
static unsigned int ng7[] = {3U, 0U};
static unsigned int ng8[] = {242U, 0U};
static unsigned int ng9[] = {4U, 0U};
static unsigned int ng10[] = {102U, 0U};
static unsigned int ng11[] = {5U, 0U};
static unsigned int ng12[] = {182U, 0U};
static unsigned int ng13[] = {6U, 0U};
static unsigned int ng14[] = {190U, 0U};
static unsigned int ng15[] = {7U, 0U};
static unsigned int ng16[] = {224U, 0U};
static unsigned int ng17[] = {8U, 0U};
static unsigned int ng18[] = {254U, 0U};
static unsigned int ng19[] = {9U, 0U};
static unsigned int ng20[] = {246U, 0U};
static unsigned int ng21[] = {10U, 0U};
static unsigned int ng22[] = {238U, 0U};
static unsigned int ng23[] = {11U, 0U};
static unsigned int ng24[] = {62U, 0U};
static unsigned int ng25[] = {12U, 0U};
static unsigned int ng26[] = {156U, 0U};
static unsigned int ng27[] = {13U, 0U};
static unsigned int ng28[] = {122U, 0U};
static unsigned int ng29[] = {14U, 0U};
static unsigned int ng30[] = {158U, 0U};
static unsigned int ng31[] = {15U, 0U};
static unsigned int ng32[] = {142U, 0U};



static void Cont_97_0(char *t0)
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

LAB0:    t1 = (t0 + 2528U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(97, ng0);
    t2 = (t0 + 1608);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 3176);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 255U;
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
    xsi_driver_vfirst_trans(t5, 0, 7);
    t18 = (t0 + 3096);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Always_103_1(char *t0)
{
    char *t1;
    char *t2;
    int t3;
    char *t4;
    char *t5;

LAB0:    xsi_set_current_line(103, ng0);

LAB2:    xsi_set_current_line(104, ng0);
    t1 = (t0 + 1048U);
    t2 = *((char **)t1);

LAB3:    t1 = ((char*)((ng1)));
    t3 = xsi_vlog_unsigned_case_compare(t2, 4, t1, 4);
    if (t3 == 1)
        goto LAB4;

LAB5:    t1 = ((char*)((ng3)));
    t3 = xsi_vlog_unsigned_case_compare(t2, 4, t1, 4);
    if (t3 == 1)
        goto LAB6;

LAB7:    t1 = ((char*)((ng5)));
    t3 = xsi_vlog_unsigned_case_compare(t2, 4, t1, 4);
    if (t3 == 1)
        goto LAB8;

LAB9:    t1 = ((char*)((ng7)));
    t3 = xsi_vlog_unsigned_case_compare(t2, 4, t1, 4);
    if (t3 == 1)
        goto LAB10;

LAB11:    t1 = ((char*)((ng9)));
    t3 = xsi_vlog_unsigned_case_compare(t2, 4, t1, 4);
    if (t3 == 1)
        goto LAB12;

LAB13:    t1 = ((char*)((ng11)));
    t3 = xsi_vlog_unsigned_case_compare(t2, 4, t1, 4);
    if (t3 == 1)
        goto LAB14;

LAB15:    t1 = ((char*)((ng13)));
    t3 = xsi_vlog_unsigned_case_compare(t2, 4, t1, 4);
    if (t3 == 1)
        goto LAB16;

LAB17:    t1 = ((char*)((ng15)));
    t3 = xsi_vlog_unsigned_case_compare(t2, 4, t1, 4);
    if (t3 == 1)
        goto LAB18;

LAB19:    t1 = ((char*)((ng17)));
    t3 = xsi_vlog_unsigned_case_compare(t2, 4, t1, 4);
    if (t3 == 1)
        goto LAB20;

LAB21:    t1 = ((char*)((ng19)));
    t3 = xsi_vlog_unsigned_case_compare(t2, 4, t1, 4);
    if (t3 == 1)
        goto LAB22;

LAB23:    t1 = ((char*)((ng21)));
    t3 = xsi_vlog_unsigned_case_compare(t2, 4, t1, 4);
    if (t3 == 1)
        goto LAB24;

LAB25:    t1 = ((char*)((ng23)));
    t3 = xsi_vlog_unsigned_case_compare(t2, 4, t1, 4);
    if (t3 == 1)
        goto LAB26;

LAB27:    t1 = ((char*)((ng25)));
    t3 = xsi_vlog_unsigned_case_compare(t2, 4, t1, 4);
    if (t3 == 1)
        goto LAB28;

LAB29:    t1 = ((char*)((ng27)));
    t3 = xsi_vlog_unsigned_case_compare(t2, 4, t1, 4);
    if (t3 == 1)
        goto LAB30;

LAB31:    t1 = ((char*)((ng29)));
    t3 = xsi_vlog_unsigned_case_compare(t2, 4, t1, 4);
    if (t3 == 1)
        goto LAB32;

LAB33:    t1 = ((char*)((ng31)));
    t3 = xsi_vlog_unsigned_case_compare(t2, 4, t1, 4);
    if (t3 == 1)
        goto LAB34;

LAB35:
LAB36:    goto LAB36;

LAB4:    xsi_set_current_line(105, ng0);
    t4 = ((char*)((ng2)));
    t5 = (t0 + 1608);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 8);
    goto LAB36;

LAB6:    xsi_set_current_line(106, ng0);
    t4 = ((char*)((ng4)));
    t5 = (t0 + 1608);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 8);
    goto LAB36;

LAB8:    xsi_set_current_line(107, ng0);
    t4 = ((char*)((ng6)));
    t5 = (t0 + 1608);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 8);
    goto LAB36;

LAB10:    xsi_set_current_line(108, ng0);
    t4 = ((char*)((ng8)));
    t5 = (t0 + 1608);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 8);
    goto LAB36;

LAB12:    xsi_set_current_line(109, ng0);
    t4 = ((char*)((ng10)));
    t5 = (t0 + 1608);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 8);
    goto LAB36;

LAB14:    xsi_set_current_line(110, ng0);
    t4 = ((char*)((ng12)));
    t5 = (t0 + 1608);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 8);
    goto LAB36;

LAB16:    xsi_set_current_line(111, ng0);
    t4 = ((char*)((ng14)));
    t5 = (t0 + 1608);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 8);
    goto LAB36;

LAB18:    xsi_set_current_line(112, ng0);
    t4 = ((char*)((ng16)));
    t5 = (t0 + 1608);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 8);
    goto LAB36;

LAB20:    xsi_set_current_line(113, ng0);
    t4 = ((char*)((ng18)));
    t5 = (t0 + 1608);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 8);
    goto LAB36;

LAB22:    xsi_set_current_line(114, ng0);
    t4 = ((char*)((ng20)));
    t5 = (t0 + 1608);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 8);
    goto LAB36;

LAB24:    xsi_set_current_line(115, ng0);
    t4 = ((char*)((ng22)));
    t5 = (t0 + 1608);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 8);
    goto LAB36;

LAB26:    xsi_set_current_line(116, ng0);
    t4 = ((char*)((ng24)));
    t5 = (t0 + 1608);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 8);
    goto LAB36;

LAB28:    xsi_set_current_line(117, ng0);
    t4 = ((char*)((ng26)));
    t5 = (t0 + 1608);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 8);
    goto LAB36;

LAB30:    xsi_set_current_line(118, ng0);
    t4 = ((char*)((ng28)));
    t5 = (t0 + 1608);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 8);
    goto LAB36;

LAB32:    xsi_set_current_line(119, ng0);
    t4 = ((char*)((ng30)));
    t5 = (t0 + 1608);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 8);
    goto LAB36;

LAB34:    xsi_set_current_line(120, ng0);
    t4 = ((char*)((ng32)));
    t5 = (t0 + 1608);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 8);
    goto LAB36;

LAB1:    return;
}


extern void work_m_00000000004069570427_3901760600_init()
{
	static char *pe[] = {(void *)Cont_97_0,(void *)Always_103_1};
	xsi_register_didat("work_m_00000000004069570427_3901760600", "isim/uart_demo_isim_beh.exe.sim/work/m_00000000004069570427_3901760600.didat");
	xsi_register_executes(pe);
}
