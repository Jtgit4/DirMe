#include <stdio.h>
#include <stdlib.h>

int main(){

    int selection;

    do {
    printf("\n\033[1mDIRME - The Lazy way to change directories\033[0m\n");
    printf("\n\033[1m[1]\033[0m - HTB Machines\n");
    printf("\033[1m[2]\033[0m - Offsec Machines\n");
    printf("\033[1m[3]\033[0m - SecLists\n");
    printf("\033[1m[4]\033[0m - Linux Tools\n");
    printf("\033[1m[5]\033[0m - Windows Tools\n");

    printf("\n\033[1m\033[32mMake your selection: \033[0m");
    //fgets(selection,sizeof(selection),stdin);
    scanf("%d", &selection);
    printf("\n");

        //parse selection to system() to change directory
        switch (selection) {
        case 1:
            printf("\033[1m\033[34mChanging directories to HTB Machines\033[0m");
            system("cd /home/kali/CTF/HTB && $SHELL");
            break;

        case 2:
            printf("\033[1m\033[34mChanging directories to Offsec Machines\033[0m");
            system("cd /home/kali/CTF/offsec && $SHELL");
            break;

        case 3:
            printf("\033[1m\033[34mChanging directories to SecLists\033[0m");
            system("cd /home/kali/SecLists && $SHELL");
            break;

        case 4:
            printf("\033[1m\033[34mChanging directories to Linux Tools\033[0m");
            system("cd /home/kali/Desktop/tools && $SHELL");
            break;

        case 5:
            printf("\033[1m\033[34mChanging directories to Windows Tools\033[0m");
            system("cd /home/kali/Desktop/tools/Toolies && $SHELL");
            break;
        
        default:
            printf("\033[1m\033[31m\n------------------------------\n\033[0m");
            printf("\033[1m\033[31m\n%d is not a valid selection, try again.\n\033[0m", selection);
            printf("\033[1m\033[31m\n------------------------------\n\033[0m");
            break;
        }
    } while (selection != 99);
}


