#include <stdlib.h>
#include <stdio.h>

#include "hardware.h"
#include "stack.h"

void ide(void) {
    push(5); // foo((int)'a');
    add(C_BITS_REGISTERS[0], 6);
}
