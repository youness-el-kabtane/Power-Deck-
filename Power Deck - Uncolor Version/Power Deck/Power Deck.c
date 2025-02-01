#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>
#include "MENU.h"
#include "OPERATING_SYSTEM.h"
#include "HARDWARE_INFORMATION.h"
#include "NETWORK_INFORMATION.h"
#include "USER_AND_SECURITY.h"
#include "POWER_AND_PERFORMANCE.h"
#include "SYSTEM_BOOT_INFORMATION.h"


void executeCommand(const char *command) {
    FILE *fp;
    char path[1035];

    // Open the command for reading.
    fp = popen(command, "r");
    if (fp == NULL) {
        perror("Error executing command");
        return;
    }

    // Read and display the output of the command.
    while (fgets(path, sizeof(path)-1, fp) != NULL) {
        printf("%s", path);
    }

    // Close the file pointer.
    fclose(fp);
}

void clearScreen() {
    system("cls");  // For Windows system, use "cls" to clear the screen
    banner();       // Display the banner after clearing the screen
}


int main() {
    char input[100];

    banner();
    index();

    while (1) {
        printf("\n>>: ");
        fgets(input, sizeof(input), stdin);
        input[strcspn(input, "\n")] = 0;

        if (strcmp(input, "back+") == 0) {
            clearScreen();
            index();  // Return to the main menu
        } else if (strcmp(input, "1") == 0) {
            clearScreen();
            Operating_System();
        } else if (strcmp(input, "2") == 0) {
            clearScreen();
            Hardware_Information();
        } else if (strcmp(input, "3") == 0) {
            clearScreen();
            Network_Information();
        } else if (strcmp(input, "4") == 0) {
            clearScreen();
            User_and_Security();
        } else if (strcmp(input, "5") == 0) {
            clearScreen();
            Power_and_Performance();
        } else if (strcmp(input, "6") == 0) {
            clearScreen();
            System_Boot_Information();
        } else if (strcmp(input, "INFO") == 0) {
            clearScreen();
            info();
        } else {
            printf("Invalid input\n");
        }
    }

    return 0;
}
