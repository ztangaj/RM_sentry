# List of all the board related files.
BOARDSRC = $(CHIBIOS)/os/hal/boards/RM18A/board.c

# Required include directories
BOARDINC = $(CHIBIOS)/os/hal/boards/RM18A

# Shared variables
ALLCSRC += $(BOARDSRC)
ALLINC  += $(BOARDINC)
