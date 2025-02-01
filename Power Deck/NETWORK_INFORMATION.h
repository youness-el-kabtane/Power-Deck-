#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>
#include "MENU.h"
#ifndef NETWORK_INFORMATION_H_INCLUDED
#define NETWORK_INFORMATION_H_INCLUDED

void Network_Information () {
    char input[100];
    char *command;

    Network_Information_Menu ();

    while (1) {
        printf("\n>>: ");
        fgets(input, sizeof(input), stdin);
        input[strcspn(input, "\n")] = 0;

        if (strcmp(input, "1") == 0) {
            clearScreen();
            printf(":\\Network Information\\Show MAC addresses \n");
            printf("-------------------------------------------------------------------------------------------- \n");
            command = "wmic nic get name,MACAddress";

            printf("Executing: %s\n\n", command);
            executeCommand(command);

        } else if (strcmp(input, "2") == 0) {
            clearScreen();
            printf(":\\Network Information\\View IP configuration\n");
            printf("-------------------------------------------------------------------------------------------- \n");
            command = "Ipconfig";

            printf("Executing: %s\n\n", command);
            executeCommand(command);

        } else if (strcmp(input, "back") == 0) {
            clearScreen();
            Network_Information();
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





#endif // NETWORK_INFORMATION_H_INCLUDED
