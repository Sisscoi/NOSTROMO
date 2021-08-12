# NOSTROMO
The nostromo is a tiny virtual modulable processor with an extremely experimental assembly language based on the intel syntax who allows a simple instructions set and a CLI for more visualisation.

# The Virtual processor:

you can define which architecture you want(16, 32 or 64bits) if you wanna modify it. Else, the program will define a default architecture following your real computer's architecture.
the processor's registers will be modified following the architecture.
Example : 
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
 *(The Architecture doesn't change others settings, like the stack or registers firsts parameters destination)*
 
 ## The NOSTROMO's registers:
 * (R)(E)AX : accumulator register
 * (R)(E)BX : base register
 * (R)(E)CX : count register
 * (R)(E)DX : data register
 * (R)(E)SI : source index register
 * (R)(E)DI : declaration index register
 * (R)(E)SP : stack pointer
 * (R)(E)BP : base pointer

# The IDE:

U can edit pseudo-assembly code using the IDE function. All that will be writen in the scope of this function will be interpreted by the (virtual)Processor. By the way, is the only actual way to edit code, 'cause im too lazy to integrate an user IDE. 

## Edit code:
To edit ur own code, access to `ide.c` and write your code in the ide() function's scope.
Example:
```c
void ide(void) {
    push(5);
    add(rg3.RAX, 5);
}
```
# The CLI:

A pretty CLI (Command Line Interface) is here to help you to manage your tests and allow you to see easily the impact of your actions.

The commands list:
* 1 - display the stack's representation (ascii)
* 2 - display the register's representation (ascii)
* 3 - Greetz
* 4 - helpmenu
* 5 - quit the program

## Example:
input> 1

STACK:
```
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
```


**Thank you for reading this, please star if u appreciated this project**
