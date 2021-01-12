#include <stdio.h>

// Set 1 to print debug messages to stdout
#define DEBUG_PRINTF 0

void debug_printf(const char *format, ...) {
    if (DEBUG_PRINTF == 1) {
        printf(format);
    }
}