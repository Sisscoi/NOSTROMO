#include <stdlib.h>
#include <stdio.h>

#include "cfg.h"
#include "hardware.h"
#include "stack.h"

void ide(void) {
    push(5); // foo((int)'a');
    push(7);
    rg3.RBX = 9;
    rg3.RAX = 1;
    add(rg3.RAX, rg3.RBX);
    push(2);
}
