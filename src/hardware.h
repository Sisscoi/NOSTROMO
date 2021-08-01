#ifndef HARDWARE_H_INCLUDED
#define HARDWARE_H_INCLUDED

#include <stdint.h>

typedef struct register1 {
int16_t AX; // accumulator register
int16_t BX; // base register
int16_t CX; // count register
int16_t DX; // data register
int16_t SI; // source index register
int16_t DI; // declaration index register
int16_t SP; // stack pointer
int16_t BP; // base pointer
} register1;

typedef struct register2 {
    int32_t EAX;
    int32_t EBX;
    int32_t ECX;
    int32_t EDX;
    int32_t ESI;
    int32_t EDI;
    int32_t ESP;
    int32_t EBP;
    } register2;

typedef struct register3 {
    int64_t RAX;
    int64_t RBX;
    int64_t RCX;
    int64_t RDX;
    int64_t RSI;
    int64_t RDI;
    int64_t RSP;
    int64_t RBP;
    } register3;

int add(int64_t arg1, int64_t arg2);
int mov(int arg1, int arg2);
int rgdisplay();

#endif // HARDWARE_H_INCLUDED
