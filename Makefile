##############################################################################
# Build global options
# NOTE: Can be overridden externally.
#

# Compiler options here.
ifeq ($(USE_OPT),)
  USE_OPT = --specs=nosys.specs -O2 -ggdb -fomit-frame-pointer -falign-functions=16 \
  -D SHELL_CONFIG_FILE -D CHPRINTF_USE_FLOAT -D BOARD_OTG_NOVBUSSENS \
  -D ARM_MATH_CM4 
endif

# C specific options here (added to USE_OPT).
ifeq ($(USE_COPT),)
  USE_COPT = 
endif

# C++ specific options here (added to USE_OPT).
ifeq ($(USE_CPPOPT),)
  USE_CPPOPT = -std=gnu++11 -fno-exceptions -fno-rtti
endif

# Enable this if you want the linker to remove unused code and data
ifeq ($(USE_LINK_GC),)
  USE_LINK_GC = yes
endif

# Linker extra options here.
ifeq ($(USE_LDOPT),)
  USE_LDOPT = 
endif

# Enable this if you want link time optimizations (LTO)
ifeq ($(USE_LTO),)
  USE_LTO = yes
endif

# If enabled, this option allows to compile the application in THUMB mode.
ifeq ($(USE_THUMB),)
  USE_THUMB = yes
endif

# Enable this if you want to see the full log while compiling.
ifeq ($(USE_VERBOSE_COMPILE),)
  USE_VERBOSE_COMPILE = no
endif

# If enabled, this option makes the build process faster by not compiling
# modules not used in the current configuration.
ifeq ($(USE_SMART_BUILD),)
  USE_SMART_BUILD = yes
endif

#
# Build global options
##############################################################################

##############################################################################
# Architecture or project specific options
#

# Stack size to be allocated to the Cortex-M process stack. This stack is
# the stack used by the main() thread.
ifeq ($(USE_PROCESS_STACKSIZE),)
  USE_PROCESS_STACKSIZE = 0x400
endif

# Stack size to the allocated to the Cortex-M main/exceptions stack. This
# stack is used for processing interrupts and exceptions.
ifeq ($(USE_EXCEPTIONS_STACKSIZE),)
  USE_EXCEPTIONS_STACKSIZE = 0x400
endif

# Enables the use of FPU (no, softfp, hard).
ifeq ($(USE_FPU),)
  USE_FPU = hard
endif

#
# Architecture or project specific options
##############################################################################

##############################################################################
# Project, sources and paths
#

# Define project name here
PROJECT = RM18A

ifeq (, $(MAKECMDGOALS))
MAKECMDGOALS := _default
endif

CHIBIOS = ./chibios
ifneq (clean, $(MAKECMDGOALS))
ifneq (, $(wildcard ./src/$(MAKECMDGOALS)))
# Imported source files and paths
CONFDIR = ./src/$(MAKECMDGOALS)/config

# Licensing files.
include $(CHIBIOS)/os/license/license.mk
# Startup files.
include $(CHIBIOS)/os/common/startup/ARMCMx/compilers/GCC/mk/startup_stm32f4xx.mk
# HAL-OSAL files (optional).
include $(CHIBIOS)/os/hal/hal.mk
include $(CHIBIOS)/os/hal/ports/STM32/STM32F4xx/platform.mk
include $(CHIBIOS)/os/hal/osal/rt/osal.mk
# RTOS files (optional).
include $(CHIBIOS)/os/rt/rt.mk
include $(CHIBIOS)/os/common/ports/ARMCMx/compilers/GCC/mk/port_v7m.mk
include $(CHIBIOS)/os/various/cpp_wrappers/chcpp.mk
# Other files (optional).
include $(CHIBIOS)/os/hal/lib/streams/streams.mk
include ./src/shell/shell.mk

# Define linker script file here
LDSCRIPT= ./STM32F427II.ld

# C sources that can be compiled in ARM or THUMB mode depending on the global
# setting.
CSRC = $(ALLCSRC) \
       $(TESTSRC) \
       ./src/peripherals/usbcfg.c

# C++ sources that can be compiled in ARM or THUMB mode depending on the global
# setting.
CPPSRC = $(ALLCPPSRC) \
		./src/ext_hw/DR16.cpp \
		./src/ext_hw/SH1106.cpp \
		./src/peripherals/flash.cpp \
		./src/peripherals/CRC.cpp \
		./src/ShellManager.cpp \
		./src/Persistence.cpp \
		./src/CAN_Receiver.cpp

# C sources to be compiled in ARM mode regardless of the global setting.
# NOTE: Mixing ARM and THUMB mode enables the -mthumb-interwork compiler
#       option that results in lower performance and larger code size.
ACSRC =

# C++ sources to be compiled in ARM mode regardless of the global setting.
# NOTE: Mixing ARM and THUMB mode enables the -mthumb-interwork compiler
#       option that results in lower performance and larger code size.
ACPPSRC =

# C sources to be compiled in THUMB mode regardless of the global setting.
# NOTE: Mixing ARM and THUMB mode enables the -mthumb-interwork compiler
#       option that results in lower performance and larger code size.
TCSRC =

# C sources to be compiled in THUMB mode regardless of the global setting.
# NOTE: Mixing ARM and THUMB mode enables the -mthumb-interwork compiler
#       option that results in lower performance and larger code size.
TCPPSRC =

# List ASM source files here
ASMSRC = $(ALLASMSRC)
ASMXSRC = $(ALLXASMSRC)

INCDIR = $(ALLINC) $(TESTINC)  $(CONFDIR)

#
# Project, sources and paths
##############################################################################

##############################################################################
# Compiler settings
#

MCU  = cortex-m4

#TRGT = arm-elf-
TRGT = arm-none-eabi-
CC   = $(TRGT)gcc
CPPC = $(TRGT)g++
# Enable loading with g++ only if you need C++ runtime support.
# NOTE: You can use C++ even without C++ support if you are careful. C++
#       runtime support makes code size explode.
LD   = $(TRGT)gcc
#LD   = $(TRGT)g++
CP   = $(TRGT)objcopy
AS   = $(TRGT)gcc -x assembler-with-cpp
AR   = $(TRGT)ar
OD   = $(TRGT)objdump
SZ   = $(TRGT)size
HEX  = $(CP) -O ihex
BIN  = $(CP) -O binary

# ARM-specific options here
AOPT =

# THUMB-specific options here
TOPT = -mthumb -DTHUMB

# Define C warning options here
CWARN = -Wall -Wextra -Wundef -Wstrict-prototypes

# Define C++ warning options here
CPPWARN = -Wall -Wextra -Wundef

#
# Compiler settings
##############################################################################

##############################################################################
# Start of user section
#

# List all user C define here, like -D_DEBUG=1
UDEFS =

# Define ASM defines here
UADEFS =

# List all user directories here
UINCDIR = ./CMSIS/DSP/Include \
          ./src \
          ./src/peripherals \
          ./src/ext_hw

# List the user directory to look for the libraries here
ULIBDIR = ./CMSIS/Lib/GCC

# List all user libraries here
ULIBS = -larm_cortexM4lf_math -lm

CSRC := $(CSRC) $(wildcard ./src/$(MAKECMDGOALS)/*.c) ./src/$(MAKECMDGOALS)/board/board.c
CPPSRC := $(CPPSRC) $(wildcard ./src/$(MAKECMDGOALS)/*.cpp)
INCDIR := $(INCDIR) ./src/$(MAKECMDGOALS)/board
$(info -------------------------------)
include ./src/$(MAKECMDGOALS)/robot.mk
UINCDIR := $(UINCDIR) ./src/$(MAKECMDGOALS)
$(info building $(MAKECMDGOALS))
$(info $(CSRC))
$(info $(CPPSRC))
$(info -------------------------------)
$(MAKECMDGOALS): all
ifeq (st, $(findstring st, $(upload)))
	openocd -f openocd/stlink.cfg \
	-c "transport select hla_swd" \
	-f openocd/stm32f4x.cfg \
	-c "reset_config trst_only combined" \
	-c "program build/RM18A.elf verify reset exit"
else
ifeq (jlink, $(findstring jlink, $(upload)))
	openocd -f interface/jlink.cfg \
	-c "transport select swd" \
	-f openocd/stm32f4x.cfg \
	-c "reset_config trst_only combined" \
	-c "program build/RM18A.elf verify reset exit"
endif
endif
	@echo built $(MAKECMDGOALS)
else
$(MAKECMDGOALS):
	@echo Directory ./src/$(MAKECMDGOALS) not found
endif
endif

RULESPATH = $(CHIBIOS)/os/common/startup/ARMCMx/compilers/GCC
include $(RULESPATH)/rules.mk

