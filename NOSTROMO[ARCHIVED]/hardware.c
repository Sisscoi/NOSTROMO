#include <stdlib.h>
#include "hardware.h"


void add(int arg1, int arg2) {
    arg1 = arg1 + arg2;
    //printf("%d\n", rg3.RAX);
}

int rgdisplay() {
    //printf("===========================\n");
    printf("\nREGISTERS VALUE: \n");
    if(vmarch == 16) {
        printf("AX: %d\n", A_BITS_REGISTERS[0]);
        printf("BX: %d\n", A_BITS_REGISTERS[1]);
        printf("CX: %d\n", A_BITS_REGISTERS[2]);
        printf("DX: %d\n", A_BITS_REGISTERS[3]);
        printf("SI: %d\n", A_BITS_REGISTERS[4]);
        printf("DI: %d\n", A_BITS_REGISTERS[5]);
        printf("SP: %d\n", A_BITS_REGISTERS[6]);
        printf("BP: %d\n", A_BITS_REGISTERS[7]);
    }

    else if(vmarch == 32) {
        printf("EAX: %d\n", B_BITS_REGISTERS[0]);
        printf("EBX: %d\n", B_BITS_REGISTERS[1]);
        printf("ECX: %d\n", B_BITS_REGISTERS[2]);
        printf("EDX: %d\n", B_BITS_REGISTERS[3]);
        printf("ESI: %d\n", B_BITS_REGISTERS[4]);
        printf("EDI: %d\n", B_BITS_REGISTERS[5]);
        printf("ESP: %d\n", B_BITS_REGISTERS[6]);
        printf("EBP: %d\n", B_BITS_REGISTERS[7]);
    }

    else if(vmarch == 64) {
        printf("RAX: %d\n", C_BITS_REGISTERS[0]);
        printf("RBX: %d\n", C_BITS_REGISTERS[1]);
        printf("RCX: %d\n", C_BITS_REGISTERS[2]);
        printf("RDX: %d\n", C_BITS_REGISTERS[3]);
        printf("RSI: %d\n", C_BITS_REGISTERS[4]);
        printf("RDI: %d\n", C_BITS_REGISTERS[5]);
        printf("RSP: %d\n", C_BITS_REGISTERS[6]);
        printf("RBP: %d\n", C_BITS_REGISTERS[7]);
    }

    /******
    void rgdisplay(void) {
    for(int i; i = 0; i < 8) {
        printf("register(X)%d\n", A_BITS_REGISTERS[i]);
    }
    **/
}
}

