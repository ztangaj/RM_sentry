/**
 * @brief 
 * 
 * @file shell.hpp
 * @author Alex Au
 * @date 2018-09-20
 */
#include "ch.hpp"
#include "ch.h"
#include "hal.h"

#include "shell.h"
#include "chprintf.h"
#include "usbcfg.h"
#include "Peripherals.hpp"

#ifdef SHELL_SD
#define SHELL_CHN SHELL_SD
#else
#define SHELL_CHN SDU1
#endif

#define SHELL_WA_SIZE THD_WORKING_AREA_SIZE(2048)

/**
 * The shell default runs to Shell_SDU 
 * 
 **/

namespace ShellManager
{

// logging: whether the MCU should constantly prints log to the shell
extern volatile bool logging;

/**
 * @brief start the thread on the specified serial port
 * this function should only be called once
 */
void init();
} // namespace ShellManager