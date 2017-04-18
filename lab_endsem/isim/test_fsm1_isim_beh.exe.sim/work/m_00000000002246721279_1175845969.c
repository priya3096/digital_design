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

/* This file is designed for use with ISim build 0x8ef4fb42 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "C:/Documents/lab_endsem/fsm1.v";
static unsigned int ng1[] = {0U, 0U};
static int ng2[] = {0, 0};
static unsigned int ng3[] = {4U, 0U};
static unsigned int ng4[] = {1U, 0U};
static unsigned int ng5[] = {2U, 0U};
static unsigned int ng6[] = {3U, 0U};
static unsigned int ng7[] = {5U, 0U};
static unsigned int ng8[] = {6U, 0U};
static unsigned int ng9[] = {7U, 0U};
static int ng10[] = {1, 0};



static void Always_37_0(char *t0)
{
    char t14[8];
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
    int t13;
    char *t15;
    char *t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;
    char *t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    char *t31;
    char *t32;

LAB0:    t1 = (t0 + 2360U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(37, ng0);
    t2 = (t0 + 2700);
    *((int *)t2) = 1;
    t3 = (t0 + 2388);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(37, ng0);

LAB5:    xsi_set_current_line(38, ng0);
    t4 = (t0 + 1332U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(43, ng0);

LAB10:    xsi_set_current_line(44, ng0);
    t2 = (t0 + 1744);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);

LAB11:    t5 = ((char*)((ng1)));
    t13 = xsi_vlog_unsigned_case_compare(t4, 3, t5, 3);
    if (t13 == 1)
        goto LAB12;

LAB13:    t2 = ((char*)((ng4)));
    t13 = xsi_vlog_unsigned_case_compare(t4, 3, t2, 3);
    if (t13 == 1)
        goto LAB14;

LAB15:    t2 = ((char*)((ng5)));
    t13 = xsi_vlog_unsigned_case_compare(t4, 3, t2, 3);
    if (t13 == 1)
        goto LAB16;

LAB17:    t2 = ((char*)((ng6)));
    t13 = xsi_vlog_unsigned_case_compare(t4, 3, t2, 3);
    if (t13 == 1)
        goto LAB18;

LAB19:    t2 = ((char*)((ng3)));
    t13 = xsi_vlog_unsigned_case_compare(t4, 3, t2, 3);
    if (t13 == 1)
        goto LAB20;

LAB21:    t2 = ((char*)((ng7)));
    t13 = xsi_vlog_unsigned_case_compare(t4, 3, t2, 3);
    if (t13 == 1)
        goto LAB22;

LAB23:    t2 = ((char*)((ng8)));
    t13 = xsi_vlog_unsigned_case_compare(t4, 3, t2, 3);
    if (t13 == 1)
        goto LAB24;

LAB25:    t2 = ((char*)((ng9)));
    t13 = xsi_vlog_unsigned_case_compare(t4, 3, t2, 3);
    if (t13 == 1)
        goto LAB26;

LAB27:
LAB28:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(39, ng0);

LAB9:    xsi_set_current_line(40, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 1744);
    xsi_vlogvar_assign_value(t12, t11, 0, 0, 3);
    xsi_set_current_line(41, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1652);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB8;

LAB12:    xsi_set_current_line(45, ng0);
    t11 = (t0 + 1424U);
    t12 = *((char **)t11);
    t11 = ((char*)((ng2)));
    memset(t14, 0, 8);
    t15 = (t12 + 4);
    t16 = (t11 + 4);
    t6 = *((unsigned int *)t12);
    t7 = *((unsigned int *)t11);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t15);
    t10 = *((unsigned int *)t16);
    t17 = (t9 ^ t10);
    t18 = (t8 | t17);
    t19 = *((unsigned int *)t15);
    t20 = *((unsigned int *)t16);
    t21 = (t19 | t20);
    t22 = (~(t21));
    t23 = (t18 & t22);
    if (t23 != 0)
        goto LAB32;

LAB29:    if (t21 != 0)
        goto LAB31;

LAB30:    *((unsigned int *)t14) = 1;

LAB32:    t25 = (t14 + 4);
    t26 = *((unsigned int *)t25);
    t27 = (~(t26));
    t28 = *((unsigned int *)t14);
    t29 = (t28 & t27);
    t30 = (t29 != 0);
    if (t30 > 0)
        goto LAB33;

LAB34:    xsi_set_current_line(50, ng0);

LAB37:    xsi_set_current_line(51, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 1836);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);

LAB35:    goto LAB28;

LAB14:    xsi_set_current_line(53, ng0);
    t3 = (t0 + 1424U);
    t5 = *((char **)t3);
    t3 = ((char*)((ng2)));
    memset(t14, 0, 8);
    t11 = (t5 + 4);
    t12 = (t3 + 4);
    t6 = *((unsigned int *)t5);
    t7 = *((unsigned int *)t3);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t11);
    t10 = *((unsigned int *)t12);
    t17 = (t9 ^ t10);
    t18 = (t8 | t17);
    t19 = *((unsigned int *)t11);
    t20 = *((unsigned int *)t12);
    t21 = (t19 | t20);
    t22 = (~(t21));
    t23 = (t18 & t22);
    if (t23 != 0)
        goto LAB41;

LAB38:    if (t21 != 0)
        goto LAB40;

LAB39:    *((unsigned int *)t14) = 1;

LAB41:    t16 = (t14 + 4);
    t26 = *((unsigned int *)t16);
    t27 = (~(t26));
    t28 = *((unsigned int *)t14);
    t29 = (t28 & t27);
    t30 = (t29 != 0);
    if (t30 > 0)
        goto LAB42;

LAB43:    xsi_set_current_line(58, ng0);

LAB46:    xsi_set_current_line(59, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 1836);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);

LAB44:    goto LAB28;

LAB16:    xsi_set_current_line(61, ng0);
    t3 = (t0 + 1424U);
    t5 = *((char **)t3);
    t3 = ((char*)((ng2)));
    memset(t14, 0, 8);
    t11 = (t5 + 4);
    t12 = (t3 + 4);
    t6 = *((unsigned int *)t5);
    t7 = *((unsigned int *)t3);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t11);
    t10 = *((unsigned int *)t12);
    t17 = (t9 ^ t10);
    t18 = (t8 | t17);
    t19 = *((unsigned int *)t11);
    t20 = *((unsigned int *)t12);
    t21 = (t19 | t20);
    t22 = (~(t21));
    t23 = (t18 & t22);
    if (t23 != 0)
        goto LAB50;

LAB47:    if (t21 != 0)
        goto LAB49;

LAB48:    *((unsigned int *)t14) = 1;

LAB50:    t16 = (t14 + 4);
    t26 = *((unsigned int *)t16);
    t27 = (~(t26));
    t28 = *((unsigned int *)t14);
    t29 = (t28 & t27);
    t30 = (t29 != 0);
    if (t30 > 0)
        goto LAB51;

LAB52:    xsi_set_current_line(66, ng0);

LAB55:    xsi_set_current_line(67, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 1836);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);

LAB53:    goto LAB28;

LAB18:    xsi_set_current_line(69, ng0);
    t3 = (t0 + 1424U);
    t5 = *((char **)t3);
    t3 = ((char*)((ng2)));
    memset(t14, 0, 8);
    t11 = (t5 + 4);
    t12 = (t3 + 4);
    t6 = *((unsigned int *)t5);
    t7 = *((unsigned int *)t3);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t11);
    t10 = *((unsigned int *)t12);
    t17 = (t9 ^ t10);
    t18 = (t8 | t17);
    t19 = *((unsigned int *)t11);
    t20 = *((unsigned int *)t12);
    t21 = (t19 | t20);
    t22 = (~(t21));
    t23 = (t18 & t22);
    if (t23 != 0)
        goto LAB59;

LAB56:    if (t21 != 0)
        goto LAB58;

LAB57:    *((unsigned int *)t14) = 1;

LAB59:    t16 = (t14 + 4);
    t26 = *((unsigned int *)t16);
    t27 = (~(t26));
    t28 = *((unsigned int *)t14);
    t29 = (t28 & t27);
    t30 = (t29 != 0);
    if (t30 > 0)
        goto LAB60;

LAB61:    xsi_set_current_line(74, ng0);

LAB64:    xsi_set_current_line(75, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 1836);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);

LAB62:    goto LAB28;

LAB20:    xsi_set_current_line(77, ng0);
    t3 = (t0 + 1424U);
    t5 = *((char **)t3);
    t3 = ((char*)((ng2)));
    memset(t14, 0, 8);
    t11 = (t5 + 4);
    t12 = (t3 + 4);
    t6 = *((unsigned int *)t5);
    t7 = *((unsigned int *)t3);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t11);
    t10 = *((unsigned int *)t12);
    t17 = (t9 ^ t10);
    t18 = (t8 | t17);
    t19 = *((unsigned int *)t11);
    t20 = *((unsigned int *)t12);
    t21 = (t19 | t20);
    t22 = (~(t21));
    t23 = (t18 & t22);
    if (t23 != 0)
        goto LAB68;

LAB65:    if (t21 != 0)
        goto LAB67;

LAB66:    *((unsigned int *)t14) = 1;

LAB68:    t16 = (t14 + 4);
    t26 = *((unsigned int *)t16);
    t27 = (~(t26));
    t28 = *((unsigned int *)t14);
    t29 = (t28 & t27);
    t30 = (t29 != 0);
    if (t30 > 0)
        goto LAB69;

LAB70:    xsi_set_current_line(82, ng0);

LAB73:    xsi_set_current_line(83, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 1836);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);

LAB71:    goto LAB28;

LAB22:    xsi_set_current_line(85, ng0);
    t3 = (t0 + 1424U);
    t5 = *((char **)t3);
    t3 = ((char*)((ng2)));
    memset(t14, 0, 8);
    t11 = (t5 + 4);
    t12 = (t3 + 4);
    t6 = *((unsigned int *)t5);
    t7 = *((unsigned int *)t3);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t11);
    t10 = *((unsigned int *)t12);
    t17 = (t9 ^ t10);
    t18 = (t8 | t17);
    t19 = *((unsigned int *)t11);
    t20 = *((unsigned int *)t12);
    t21 = (t19 | t20);
    t22 = (~(t21));
    t23 = (t18 & t22);
    if (t23 != 0)
        goto LAB77;

LAB74:    if (t21 != 0)
        goto LAB76;

LAB75:    *((unsigned int *)t14) = 1;

LAB77:    t16 = (t14 + 4);
    t26 = *((unsigned int *)t16);
    t27 = (~(t26));
    t28 = *((unsigned int *)t14);
    t29 = (t28 & t27);
    t30 = (t29 != 0);
    if (t30 > 0)
        goto LAB78;

LAB79:    xsi_set_current_line(90, ng0);

LAB82:    xsi_set_current_line(91, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 1836);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);

LAB80:    goto LAB28;

LAB24:    xsi_set_current_line(93, ng0);
    t3 = (t0 + 1424U);
    t5 = *((char **)t3);
    t3 = ((char*)((ng2)));
    memset(t14, 0, 8);
    t11 = (t5 + 4);
    t12 = (t3 + 4);
    t6 = *((unsigned int *)t5);
    t7 = *((unsigned int *)t3);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t11);
    t10 = *((unsigned int *)t12);
    t17 = (t9 ^ t10);
    t18 = (t8 | t17);
    t19 = *((unsigned int *)t11);
    t20 = *((unsigned int *)t12);
    t21 = (t19 | t20);
    t22 = (~(t21));
    t23 = (t18 & t22);
    if (t23 != 0)
        goto LAB86;

LAB83:    if (t21 != 0)
        goto LAB85;

LAB84:    *((unsigned int *)t14) = 1;

LAB86:    t16 = (t14 + 4);
    t26 = *((unsigned int *)t16);
    t27 = (~(t26));
    t28 = *((unsigned int *)t14);
    t29 = (t28 & t27);
    t30 = (t29 != 0);
    if (t30 > 0)
        goto LAB87;

LAB88:    xsi_set_current_line(98, ng0);

LAB91:    xsi_set_current_line(99, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 1836);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);

LAB89:    goto LAB28;

LAB26:    xsi_set_current_line(101, ng0);
    t3 = (t0 + 1424U);
    t5 = *((char **)t3);
    t3 = ((char*)((ng2)));
    memset(t14, 0, 8);
    t11 = (t5 + 4);
    t12 = (t3 + 4);
    t6 = *((unsigned int *)t5);
    t7 = *((unsigned int *)t3);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t11);
    t10 = *((unsigned int *)t12);
    t17 = (t9 ^ t10);
    t18 = (t8 | t17);
    t19 = *((unsigned int *)t11);
    t20 = *((unsigned int *)t12);
    t21 = (t19 | t20);
    t22 = (~(t21));
    t23 = (t18 & t22);
    if (t23 != 0)
        goto LAB95;

LAB92:    if (t21 != 0)
        goto LAB94;

LAB93:    *((unsigned int *)t14) = 1;

LAB95:    t16 = (t14 + 4);
    t26 = *((unsigned int *)t16);
    t27 = (~(t26));
    t28 = *((unsigned int *)t14);
    t29 = (t28 & t27);
    t30 = (t29 != 0);
    if (t30 > 0)
        goto LAB96;

LAB97:    xsi_set_current_line(106, ng0);

LAB100:    xsi_set_current_line(107, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 1836);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);

LAB98:    goto LAB28;

LAB31:    t24 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t24) = 1;
    goto LAB32;

LAB33:    xsi_set_current_line(46, ng0);

LAB36:    xsi_set_current_line(47, ng0);
    t31 = ((char*)((ng3)));
    t32 = (t0 + 1836);
    xsi_vlogvar_assign_value(t32, t31, 0, 0, 3);
    goto LAB35;

LAB40:    t15 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t15) = 1;
    goto LAB41;

LAB42:    xsi_set_current_line(54, ng0);

LAB45:    xsi_set_current_line(55, ng0);
    t24 = ((char*)((ng5)));
    t25 = (t0 + 1836);
    xsi_vlogvar_assign_value(t25, t24, 0, 0, 3);
    goto LAB44;

LAB49:    t15 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t15) = 1;
    goto LAB50;

LAB51:    xsi_set_current_line(62, ng0);

LAB54:    xsi_set_current_line(63, ng0);
    t24 = ((char*)((ng6)));
    t25 = (t0 + 1836);
    xsi_vlogvar_assign_value(t25, t24, 0, 0, 3);
    goto LAB53;

LAB58:    t15 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t15) = 1;
    goto LAB59;

LAB60:    xsi_set_current_line(70, ng0);

LAB63:    xsi_set_current_line(71, ng0);
    t24 = ((char*)((ng7)));
    t25 = (t0 + 1836);
    xsi_vlogvar_assign_value(t25, t24, 0, 0, 3);
    goto LAB62;

LAB67:    t15 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t15) = 1;
    goto LAB68;

LAB69:    xsi_set_current_line(78, ng0);

LAB72:    xsi_set_current_line(79, ng0);
    t24 = ((char*)((ng7)));
    t25 = (t0 + 1836);
    xsi_vlogvar_assign_value(t25, t24, 0, 0, 3);
    goto LAB71;

LAB76:    t15 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t15) = 1;
    goto LAB77;

LAB78:    xsi_set_current_line(86, ng0);

LAB81:    xsi_set_current_line(87, ng0);
    t24 = ((char*)((ng7)));
    t25 = (t0 + 1836);
    xsi_vlogvar_assign_value(t25, t24, 0, 0, 3);
    goto LAB80;

LAB85:    t15 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t15) = 1;
    goto LAB86;

LAB87:    xsi_set_current_line(94, ng0);

LAB90:    xsi_set_current_line(95, ng0);
    t24 = ((char*)((ng9)));
    t25 = (t0 + 1836);
    xsi_vlogvar_assign_value(t25, t24, 0, 0, 3);
    goto LAB89;

LAB94:    t15 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t15) = 1;
    goto LAB95;

LAB96:    xsi_set_current_line(102, ng0);

LAB99:    xsi_set_current_line(103, ng0);
    t24 = ((char*)((ng6)));
    t25 = (t0 + 1836);
    xsi_vlogvar_assign_value(t25, t24, 0, 0, 3);
    goto LAB98;

}

static void Always_114_1(char *t0)
{
    char t8[8];
    char t24[8];
    char t41[8];
    char t57[8];
    char t65[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t9;
    char *t10;
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
    char *t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    char *t37;
    char *t38;
    char *t39;
    char *t40;
    char *t42;
    char *t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    char *t56;
    char *t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    char *t64;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    char *t69;
    char *t70;
    char *t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    char *t79;
    char *t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    int t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    int t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    unsigned int t92;
    char *t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    unsigned int t97;
    unsigned int t98;
    char *t99;
    char *t100;
    char *t101;
    char *t102;

LAB0:    t1 = (t0 + 2504U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(114, ng0);
    t2 = (t0 + 2708);
    *((int *)t2) = 1;
    t3 = (t0 + 2532);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(114, ng0);

LAB5:    xsi_set_current_line(115, ng0);
    t4 = (t0 + 1836);
    t5 = (t4 + 36U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng6)));
    memset(t8, 0, 8);
    t9 = (t6 + 4);
    t10 = (t7 + 4);
    t11 = *((unsigned int *)t6);
    t12 = *((unsigned int *)t7);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t9);
    t15 = *((unsigned int *)t10);
    t16 = (t14 ^ t15);
    t17 = (t13 | t16);
    t18 = *((unsigned int *)t9);
    t19 = *((unsigned int *)t10);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB9;

LAB6:    if (t20 != 0)
        goto LAB8;

LAB7:    *((unsigned int *)t8) = 1;

LAB9:    memset(t24, 0, 8);
    t25 = (t8 + 4);
    t26 = *((unsigned int *)t25);
    t27 = (~(t26));
    t28 = *((unsigned int *)t8);
    t29 = (t28 & t27);
    t30 = (t29 & 1U);
    if (t30 != 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t25) != 0)
        goto LAB12;

LAB13:    t32 = (t24 + 4);
    t33 = *((unsigned int *)t24);
    t34 = (!(t33));
    t35 = *((unsigned int *)t32);
    t36 = (t34 || t35);
    if (t36 > 0)
        goto LAB14;

LAB15:    memcpy(t65, t24, 8);

LAB16:    t93 = (t65 + 4);
    t94 = *((unsigned int *)t93);
    t95 = (~(t94));
    t96 = *((unsigned int *)t65);
    t97 = (t96 & t95);
    t98 = (t97 != 0);
    if (t98 > 0)
        goto LAB28;

LAB29:    xsi_set_current_line(121, ng0);

LAB32:    xsi_set_current_line(122, ng0);
    t2 = (t0 + 1836);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = (t0 + 1744);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 3);
    xsi_set_current_line(123, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1652);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);

LAB30:    goto LAB2;

LAB8:    t23 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB9;

LAB10:    *((unsigned int *)t24) = 1;
    goto LAB13;

LAB12:    t31 = (t24 + 4);
    *((unsigned int *)t24) = 1;
    *((unsigned int *)t31) = 1;
    goto LAB13;

LAB14:    t37 = (t0 + 1836);
    t38 = (t37 + 36U);
    t39 = *((char **)t38);
    t40 = ((char*)((ng9)));
    memset(t41, 0, 8);
    t42 = (t39 + 4);
    t43 = (t40 + 4);
    t44 = *((unsigned int *)t39);
    t45 = *((unsigned int *)t40);
    t46 = (t44 ^ t45);
    t47 = *((unsigned int *)t42);
    t48 = *((unsigned int *)t43);
    t49 = (t47 ^ t48);
    t50 = (t46 | t49);
    t51 = *((unsigned int *)t42);
    t52 = *((unsigned int *)t43);
    t53 = (t51 | t52);
    t54 = (~(t53));
    t55 = (t50 & t54);
    if (t55 != 0)
        goto LAB20;

LAB17:    if (t53 != 0)
        goto LAB19;

LAB18:    *((unsigned int *)t41) = 1;

LAB20:    memset(t57, 0, 8);
    t58 = (t41 + 4);
    t59 = *((unsigned int *)t58);
    t60 = (~(t59));
    t61 = *((unsigned int *)t41);
    t62 = (t61 & t60);
    t63 = (t62 & 1U);
    if (t63 != 0)
        goto LAB21;

LAB22:    if (*((unsigned int *)t58) != 0)
        goto LAB23;

LAB24:    t66 = *((unsigned int *)t24);
    t67 = *((unsigned int *)t57);
    t68 = (t66 | t67);
    *((unsigned int *)t65) = t68;
    t69 = (t24 + 4);
    t70 = (t57 + 4);
    t71 = (t65 + 4);
    t72 = *((unsigned int *)t69);
    t73 = *((unsigned int *)t70);
    t74 = (t72 | t73);
    *((unsigned int *)t71) = t74;
    t75 = *((unsigned int *)t71);
    t76 = (t75 != 0);
    if (t76 == 1)
        goto LAB25;

LAB26:
LAB27:    goto LAB16;

LAB19:    t56 = (t41 + 4);
    *((unsigned int *)t41) = 1;
    *((unsigned int *)t56) = 1;
    goto LAB20;

LAB21:    *((unsigned int *)t57) = 1;
    goto LAB24;

LAB23:    t64 = (t57 + 4);
    *((unsigned int *)t57) = 1;
    *((unsigned int *)t64) = 1;
    goto LAB24;

LAB25:    t77 = *((unsigned int *)t65);
    t78 = *((unsigned int *)t71);
    *((unsigned int *)t65) = (t77 | t78);
    t79 = (t24 + 4);
    t80 = (t57 + 4);
    t81 = *((unsigned int *)t79);
    t82 = (~(t81));
    t83 = *((unsigned int *)t24);
    t84 = (t83 & t82);
    t85 = *((unsigned int *)t80);
    t86 = (~(t85));
    t87 = *((unsigned int *)t57);
    t88 = (t87 & t86);
    t89 = (~(t84));
    t90 = (~(t88));
    t91 = *((unsigned int *)t71);
    *((unsigned int *)t71) = (t91 & t89);
    t92 = *((unsigned int *)t71);
    *((unsigned int *)t71) = (t92 & t90);
    goto LAB27;

LAB28:    xsi_set_current_line(116, ng0);

LAB31:    xsi_set_current_line(117, ng0);
    t99 = (t0 + 1836);
    t100 = (t99 + 36U);
    t101 = *((char **)t100);
    t102 = (t0 + 1744);
    xsi_vlogvar_assign_value(t102, t101, 0, 0, 3);
    xsi_set_current_line(118, ng0);
    t2 = ((char*)((ng10)));
    t3 = (t0 + 1652);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB30;

}


extern void work_m_00000000002246721279_1175845969_init()
{
	static char *pe[] = {(void *)Always_37_0,(void *)Always_114_1};
	xsi_register_didat("work_m_00000000002246721279_1175845969", "isim/test_fsm1_isim_beh.exe.sim/work/m_00000000002246721279_1175845969.didat");
	xsi_register_executes(pe);
}
