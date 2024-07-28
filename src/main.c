#include <stdbool.h>
#include <stddef.h>

#include "common.h"

// [03000000] = 6 / 3 = 2
void __attribute__((optimize("O0"))) main(void) {
    asm("mov r0, #6\nmov r1, #3\nmov r11, #0x3000000\nswi #0x60000");
    while(true);
}
