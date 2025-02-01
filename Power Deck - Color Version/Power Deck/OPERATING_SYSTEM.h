#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>
#include "MENU.h"
#ifndef OPERATING_SYSTEM_H_INCLUDED
#define OPERATING_SYSTEM_H_INCLUDED


void Operating_System() {
    char input[100];
    char *command;

    Operating_System_Menu();

    while (1) {
        printf("\n>>: ");
        fgets(input, sizeof(input), stdin);
        input[strcspn(input, "\n")] = 0;

        if (strcmp(input, "1") == 0) {
            clearScreen();
            printf(GREEN":\\Operating System\\View full system details\n"RESET);
            printf("-------------------------------------------------------------------------------------------- \n");

            command = "systeminfo";

            printf("Executing: %s\n\n", command);
            executeCommand(command);

        } else if (strcmp(input, "2") == 0) {
            clearScreen();
            printf(GREEN":\\Operating System\\Check Windows version\n"RESET);
           printf("-------------------------------------------------------------------------------------------- \n");
            command = "Winver";

            printf("Executing: %s\n\n", command);
            executeCommand(command);

        } else if (strcmp(input, "3") == 0) {
            clearScreen();
            printf(GREEN":\\Operating System\\View activation status\n"RESET);
           printf("-------------------------------------------------------------------------------------------- \n");
            command = "slmgr /xpr";

            printf("Executing: %s\n\n", command);
            executeCommand(command);

        } else if (strcmp(input, "4") == 0) {
            clearScreen();
            printf(GREEN":\\Operating System\\View hotfixes\n"RESET);
            printf("-------------------------------------------------------------------------------------------- \n");

            command = "wmic qfe list";

            printf("Executing: %s\n\n", command);
            executeCommand(command);

        } else if (strcmp(input, "5") == 0) {
            clearScreen();
            printf(GREEN":\\Operating System\\Uptime information\n"RESET);
            printf("-------------------------------------------------------------------------------------------- \n");

            command = "net statistics workstation";

            printf("Executing: %s\n\n", command);
            executeCommand(command);

        } else if (strcmp(input, "back") == 0) {
            clearScreen();
            Operating_System();
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

#endif // OPERATING_SYSTEM_H_INCLUDED
