# NOSTROMO
The nostromo is a tiny virtual modulable processor with an assembly language based on the intel syntax who allows a simple instructions set and a CLI for more visualisation.

# The Virtual processor:

you can define which architecture you want(16, 32 or 64bits) if you wanna modify it. Else, the program will define a default architecture following your real computer's architecture.
the processor's registers will be modified following the architecture.
Exemple : 
in 16bits mode the program will use 16bits registers.
```c
typedef struct register_sixteen_bits {
      int16_t AX;
      int16_t BX;
} register1;
```
### ...
