#include <stdlib.h>
#include <stdio.h>

#include "cfg.h"
#include "hardware.h"
#include "stack.h"

void ide(void) {
    push(5); // foo((int)'a');
    add64(rg3.RAX, 6);
}
