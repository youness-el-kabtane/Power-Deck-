#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>
#include "MENU.h"
#ifndef SYSTEM_BOOT_INFORMATION_H_INCLUDED
#define SYSTEM_BOOT_INFORMATION_H_INCLUDED

void System_Boot_Information() {
    char input[100];
    char *command;

    System_Boot_Information_Menu();

    while (1) {
        printf("\n>>: ");
        fgets(input, sizeof(input), stdin);
        input[strcspn(input, "\n")] = 0;

        if (strcmp(input, "1") == 0) {
            clearScreen();
            printf(GREEN":\\System Boot Information\\Check boot mode  \n"RESET);
            printf("-------------------------------------------------------------------------------------------- \n");
            command = "Bcdedit";

            printf("Executing: %s\n\n", command);
            executeCommand(command);

        } else if (strcmp(input, "2") == 0) {
            clearScreen();
            printf(GREEN":\\System Boot Information\\Get boot time\n"RESET);
            printf("-------------------------------------------------------------------------------------------- \n");
            command = "systeminfo";

            printf("Executing: %s\n\n", command);
            executeCommand(command);

        } else if (strcmp(input, "back") == 0) {
            clearScreen();
            System_Boot_Information();
            return;

        } else if (strcmp(input, "back+") == 0) {
            clearScreen();
            index ();
            return;

        } else {
            printf("Invalid input, try again.\n");
        }
    }

}

#endif // SYSTEM_BOOT_INFORMATION_H_INCLUDED
