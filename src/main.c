#include <stdbool.h>
#include <stddef.h>

#include "common.h"

void __attribute__((optimize("O0"))) main(void) {
    asm("mov r0, #6\nmov r1, #3\nswi #0x60000");
    while(true);
}
