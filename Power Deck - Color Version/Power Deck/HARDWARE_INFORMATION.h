#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>
#include "MENU.h"
#ifndef HARDWARE_INFORMATION_H_INCLUDED
#define HARDWARE_INFORMATION_H_INCLUDED

void Hardware_Information() {
    char input[100];
    char *command;

    Hardware_Information_Menu ();

    while (1) {
        printf("\n>>: ");
        fgets(input, sizeof(input), stdin);
        input[strcspn(input, "\n")] = 0;

        if (strcmp(input, "1") == 0) {
            clearScreen();
            printf(GREEN":\\Hardware Information\\View processor info\n"RESET);
            printf("-------------------------------------------------------------------------------------------- \n");

            command = "wmic cpu get name";

            printf("Executing: %s\n\n", command);
            executeCommand(command);

        } else if (strcmp(input, "2") == 0) {
            clearScreen();
            printf(GREEN":\\Hardware Information\\Display motherboard details\n"RESET);
            printf("-------------------------------------------------------------------------------------------- \n");

            command = "wmic baseboard get product,Manufacturer";

            printf("Executing: %s\n\n", command);
            executeCommand(command);

        } else if (strcmp(input, "3") == 0) {
            clearScreen();
            printf(GREEN":\\Hardware Information\\Check RAM info\n"RESET);
            printf("-------------------------------------------------------------------------------------------- \n");

            command = "wmic memorychip get capacity, speed";

            printf("Executing: %s\n\n", command);
            executeCommand(command);

        } else if (strcmp(input, "4") == 0) {
            clearScreen();
            printf(GREEN":\\Hardware Information\\View graphics card details\n"RESET);
            printf("-------------------------------------------------------------------------------------------- \n");
            command = "wmic path win32_videocontroller get name";

            printf("Executing: %s\n\n", command);
            executeCommand(command);

        } else if (strcmp(input, "5") == 0) {
            clearScreen();
            printf(GREEN":\\Hardware Information\\Check disk details\n"RESET);
           printf("-------------------------------------------------------------------------------------------- \n");

            command = "wmic diskdrive get size, model";

            printf("Executing: %s\n\n", command);
            executeCommand(command);

        } else if (strcmp(input, "6") == 0) {
            clearScreen();
            printf(GREEN":\\Hardware Information\\List logical drives\n"RESET);
            printf("-------------------------------------------------------------------------------------------- \n");

            command = "wmic logicaldisk get name, description";

            printf("Executing: %s\n\n", command);
            executeCommand(command);

        } else if (strcmp(input, "back") == 0) {
            clearScreen();
            Hardware_Information();
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



#endif // HARDWARE_INFORMATION_H_INCLUDED
