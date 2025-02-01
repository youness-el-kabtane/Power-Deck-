#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>
#include "MENU.h"
#ifndef USER_AND_SECURITY_H_INCLUDED
#define USER_AND_SECURITY_H_INCLUDED

void User_and_Security() {
    char input[100];
    char *command;

    User_and_Security_Menu();

    while (1) {
        printf("\n>>: ");
        fgets(input, sizeof(input), stdin);
        input[strcspn(input, "\n")] = 0;

        if (strcmp(input, "1") == 0) {
            clearScreen();
            printf(":\\User and Security\\Show current user account \n");
            printf("-------------------------------------------------------------------------------------------- \n");

            command = "Whoami";

            printf("Executing: %s\n\n", command);
            executeCommand(command);

        } else if (strcmp(input, "2") == 0) {
            clearScreen();
            printf(":\\User and Security\\List environment variables \n");
            printf("-------------------------------------------------------------------------------------------- \n");
            command = "Set";

            printf("Executing: %s\n\n", command);
            executeCommand(command);

        } else if (strcmp(input, "3") == 0) {
            clearScreen();
            printf(":\\User and Security\\Check computer hostname \n");
            printf("-------------------------------------------------------------------------------------------- \n");
            command = "Hostname";

            printf("Executing: %s\n\n", command);
            executeCommand(command);

        } else if (strcmp(input, "back") == 0) {
            clearScreen();
            User_and_Security();
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


#endif // USER_AND_SECURITY_H_INCLUDED
