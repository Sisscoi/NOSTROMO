#include "hardware.h"
#include "cfg.h"

int add(int64_t arg1, int64_t arg2) {
    int64_t a = arg1 + arg2;
    arg1 = a;
}

int rgdisplay() {
    //printf("===========================\n");
    printf("\nREGISTERS VALUE: \n");
    if(vmarch == 16) {
        printf("AX: %d\n", rg1.AX);
        printf("BX: %d\n", rg1.BX);
        printf("CX: %d\n", rg1.CX);
        printf("DX: %d\n", rg1.DX);
        printf("SI: %d\n", rg1.SI);
        printf("DI: %d\n", rg1.DI);
        printf("SP: %d\n", rg1.SP);
        printf("BP: %d\n", rg1.BP);
    }

    else if(vmarch == 32) {
        printf("EAX: %d\n", rg2.EAX);
        printf("EBX: %d\n", rg2.EBX);
        printf("ECX: %d\n", rg2.ECX);
        printf("EDX: %d\n",rg2.EDX);
        printf("ESI: %d\n", rg2.ESI);
        printf("EDI: %d\n", rg2.EDI);
        printf("ESP: %d\n", rg2.ESP);
        printf("EBP: %d\n", rg2.EBP);
    }

    else if(vmarch == 64) {
        printf("RAX: %d\n", rg3.RAX);
        printf("RBX: %d\n", rg3.RBX);
        printf("RCX: %d\n", rg3.RCX);
        printf("RDX: %d\n", rg3.RDX);
        printf("RSI: %d\n", rg3.RSI);
        printf("RDI: %d\n", rg3.RDI);
        printf("RSP: %d\n", rg3.RSP);
        printf("RBP: %d\n", rg3.RBP);
    }
}

