# NOSTROMO
The nostromo is a tiny virtual modulable processor with an assembly language based on the intel syntax who allows a simple instructions set and a CLI for more visualisation.

# The Virtual processor:

you can define which architecture you want(16, 32 or 64bits) if you wanna modify it. Else, the program will define a default architecture following your real computer's architecture.
the processor's registers will be modified following the architecture.
Exemple : 
in 16bits mode the program will use 16bits registers.
```c
struct register_sixteen_bits {
      int16_t AX;
      int16_t BX;
};
``` 
 in 32bits mode:
 ```c
 struct register_thirty_two_bits {
      int32_t EAX;
      int32_t EBX;
 };
 ```
 
 ## The NOSTROMO's registers:
 * (R)(E)AX : accumulator register
 * (R)(E)BX : base register
 * (R)(E)CX : count register
 * (R)(E)DX : data register
 * (R)(E)SI : source index register
 * (R)(E)DI : declaration index register
 * (R)(E)SP : stack pointer
 * (R)(E)BP : base pointer

# The CLI:

a pretty CLI (Command Line Interface) is here to help you to manage your tests.

The commands list:
* 1 - display the stack's representation (ascii)
* 2 - display the register's representation (ascii)
* 3 - Greetz
* 4 - helpmenu
* 5 - quit the program

## Example:
input> 1

STACK:
-----------------
|       9       |
-----------------
-----------------
|       2       |
-----------------
-----------------
|       7       |
-----------------
-----------------
|       5       |
-----------------
