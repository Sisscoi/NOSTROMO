#include <stdio.h>
#include <stdlib.h>
#include "cfg.h"
#include "stack.h"

/**
* fonction variadique - variadic function
* push int n : ajoute le nombre à la pile
* push register1 register : ajoute le contenu du registre à la pile
* pop int n : supprime le nombre
* pop register1 register : déplace le dernier entrant dans le registre
**/

int STACK[MAXSTACKSIZE];
int top = -1;
int barometre;
int stacksize = 15;

void push(int arg1) {
    if(arg1>=stacksize-1) {
        printf("stack overflow! the max size defined for the stack is %d \n", stacksize);
        return 1;
    }

    else {
        top++;
        STACK[top] = arg1;
    }
}
void pop(void) {
    if(top<=-1)
    {
        printf("\n\t Stack is empty");
    }
    else
    {
        //printf("%d\n", STACK[top]);
        top--;
    }
}

void display() {
    if(top>=0) {
        printf("\nSTACK:");
        for(barometre=top; barometre>=0; barometre--)
            printf("\n-----------------\n|\t%d\t|\n-----------------",STACK[barometre]);
    }
    else {
        printf("\n The STACK is empty");
    }
}
