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

#include "xsi.h"

struct XSI_INFO xsi_info;



int main(int argc, char **argv)
{
    xsi_init_design(argc, argv);
    xsi_register_info(&xsi_info);

    xsi_register_min_prec_unit(-12);
    work_m_00000000004069570427_3901760600_init();
    work_m_00000000003672016352_0301808214_init();
    work_m_00000000003256663278_1614786015_init();
    work_m_00000000001311915638_2899789463_init();
    work_m_00000000004024846176_2613777659_init();
    work_m_00000000004134447467_2073120511_init();


    xsi_register_tops("work_m_00000000004024846176_2613777659");
    xsi_register_tops("work_m_00000000004134447467_2073120511");


    return xsi_run_simulation(argc, argv);

}
