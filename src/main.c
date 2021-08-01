#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

#include "cfg.h"
#include "hardware.h"
#include "stack.h"

/**
*
* https://felix.engineer/blogs/virtual-machine-in-c
* https://riptutorial.com/x86/example/6971/16-bit-registers
* http://www2.ift.ulaval.ca/~marchand/ift17583/Acetates/17583-AcetatesA7.pdf
**/
/**
DEMAIN:
* ajouter la fonction add plutôt que d'affecter comme ça : rg.RAX = 4;
* ajouter une fonction ide() qui contiendra le code *FAIT*
* trouver une manière d'assurer la compatibilité des types (rg.rax, rg.eax) (peut-être ne faire qu'une seule struct
de type int avec ax, bx, cx... et modifier le type et ajouter un préfixe après suivant l'architecture choisie)
solution -> renommer les variables et changer le type. Exemple:
if (vmarch == 32)
    rg2.eax = rg.AX;
**/
vmarch = OSARCH;
char selection[2];

int bannerize(void) {
    printf("******************\n");
    printf("**** NOSTROMO ****\n");
    printf("******************\n");
}

void helpmenu() {
    printf("\n HELP MENU\n");
    printf("1 - display the stack's representation (ascii)\n");
    printf("2 - display the register's representation (ascii)\n");
    printf("3 - Greetz\n");
    printf("4 - helpmenu\n");
    printf("5 - quit the program\n");
}

int notAnAST(void) {
    char strax[] = "AX";
    char strbx[] = "BX";
    char strcx[] = "CX";
    char strdx[] = "DX";
    char strsi[] = "SI";
    char strdi[] = "DI";
    char strsp[] = "SP";
    char strbp[] = "BP";

    int intax = (int)strax;
    int intbx = (int)strbx;
    int intcx = (int)strcx;
    int intdx = (int)strdx;
    int intsi = (int)strsi;
    int intdi = (int)strdi;
    int intsp = (int)strsp;
    int intbp = (int)strbp;
    int among = 7;
    printf("[TEST]INSTRUCTIONS VALUES:\n");
    printf("AX en int : %d\n", intax);
    printf("BX en int : %d\n", intbx);
    printf("CX en int : %d\n", intcx);
    printf("DX en int : %d\n", intdx);
    printf("SI en int : %d\n", intsi);
    printf("DI en int : %d\n", intdi);
    printf("SP en int : %d\n", intsp);
    printf("BP en int : %d\n", intbp);
    printf("niark niark niark, im uncastable, im : %d\n", among);
    printf("===========================");

}



void selectmode(void) {
    printf("select default computer architecture for the Virtual Machine? Y/n \n");
    fgets(selection, 2, stdin);

    if(strcmp(selection, "N") == 0 || strcmp(selection, "n") == 0) {
            printf("Please type the bits-mode : \n");
            scanf("%d", &vmarch); // si non, utiliser vmarch à la place
            vmarch == 16 ? printf("gracefully setted %d-bits mode\n", vmarch) : vmarch == 32 ? printf("gracefully setted %d-bits architecture\n", vmarch) : vmarch == 64 ? printf("gracefully setted %d-bits architecture\n", vmarch) : printf("Please enter a compatible architecture\n");
    }

    else if(strcmp(selection, "Y") == 0 || strcmp(selection, "y") == 0) {
            printf("default architecture : %d-bits\n", OSARCH); // si oui : use OSARCH comme une const
            vmarch = OSARCH;
    }
    else {
        printf("please type y or n\n");
    }
    printf("===========================\n");
}


int cli() {              // on récupère l'entrée utilisateur et on exec la fn appropriée
    bool a = true;
    int saisie;
    printf("please type 4 for show the options\n");
    while(a) {
        printf("\n> ");
        scanf("%d", &saisie);
        if(saisie == 1) {
            display();
        }

        if(saisie == 2) {
            rgdisplay();
        }

        if(saisie == 3) {
            printf("me\n");
        }

        if(saisie == 4) {
            helpmenu();
        }

        if(saisie == 5) {
            break;
        }

        else {
                //////
        }
    }
}


int main() {
    bannerize();
    selectmode();

    if(vmarch == 16) {
        rg1.AX = 0;
        rg1.BX = 0;
        rg1.CX = 0;
        rg1.DX = 0;
        rg1.SI = 0;
        rg1.DI = 0;
        rg1.SP = 0;
        rg1.BP = 0;

        ide();
    }

    else if(vmarch == 32) {
        rg2.EAX = 0;
        rg2.EBX = 0;
        rg2.ECX = 0;
        rg2.EDX = 0;
        rg2.ESI = 0;
        rg2.EDI = 0;
        rg2.ESP = 0;
        rg2.EBP = 0;

        ide();
    }

    else if(vmarch == 64) {
        rg3.RAX = 0;
        rg3.RBX = 0;
        rg3.RCX = 0;
        rg3.RDX = 0;
        rg3.RSI = 0;
        rg3.RDI = 0;
        rg3.RSP = 0;
        rg3.RBP = 0;

        ide();
    }
    else {
        ////////////////
    }
    cli();



    return 0;
}
