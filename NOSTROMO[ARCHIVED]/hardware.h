#ifndef HARDWARE_H_INCLUDED
#define HARDWARE_H_INCLUDED

#include <stdint.h>

#define OSARCH sizeof(void *) * 8
#define MAXSTACKSIZE 16

extern int vmarch;
void add(int arg1, int arg2);
int mov(int arg1, int arg2);
int rgdisplay();

int A_BITS_REGISTERS[7];
int B_BITS_REGISTERS[7];
int C_BITS_REGISTERS[7];

#endif // HARDWARE_H_INCLUDED
