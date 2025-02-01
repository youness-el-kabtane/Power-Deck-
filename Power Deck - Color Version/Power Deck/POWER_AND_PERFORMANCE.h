#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>
#include "MENU.h"
#ifndef POWER_AND_PERFORMANCE_H_INCLUDED
#define POWER_AND_PERFORMANCE_H_INCLUDED

void Power_and_Performance() {
    char input[100];
    char *command;

    Power_and_Performance_Menu();

    while (1) {
        printf("\n>>: ");
        fgets(input, sizeof(input), stdin);
        input[strcspn(input, "\n")] = 0;

        if (strcmp(input, "1") == 0) {
            clearScreen();
            printf(GREEN":\\Power and Performance\\Generate battery report  \n"RESET);
            printf("-------------------------------------------------------------------------------------------- \n");

            command = "powercfg /batteryreport";

            printf("Executing: %s\n\n", command);
            executeCommand(command);

        } else if (strcmp(input, "2") == 0) {
            clearScreen();
            printf(GREEN":\\Power and Performance\\Show available power plans\n"RESET);
            printf("-------------------------------------------------------------------------------------------- \n");

            command = "powercfg /list";

            printf("Executing: %s\n\n", command);
            executeCommand(command);

        } else if (strcmp(input, "back") == 0) {
            clearScreen();
            Power_and_Performance();
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



#endif // POWER_AND_PERFORMANCE_H_INCLUDED
