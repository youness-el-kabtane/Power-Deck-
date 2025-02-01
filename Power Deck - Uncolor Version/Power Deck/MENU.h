#ifndef MENU_H_INCLUDED
#define MENU_H_INCLUDED



void banner() {
    printf("            _____   _____  _  _  _ _______  ______      ______  _______ _______ _     _     \n");
    printf("           |_____] |     | |  |  | |______ |_____/      |     \\ |______ |       |____/     \n");
    printf("           |       |_____| |__|__| |______ |    \\_      |_____/ |______ |_____  |    \\\_  \n");
    printf("                                                                                            \n");
    printf(":::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::     \n");
    printf("---------------------------------------------------------------------------------------------------------     \n");
    printf("|    [back+] Return to the Main Menu    |    [back] Return to the Sub-Menu    |    [INFO] About Page    |     \n");
    printf("---------------------------------------------------------------------------------------------------------     \n");
}

void index() {
    printf("           \n");
    printf("|          [1] > Operating System                                  \n");
    printf("|          [2] > Hardware Information                              \n");
    printf("|          [3] > Network Information                               \n");
    printf("|          [4] > User and Security                                 \n");
    printf("|          [5] > Power and Performance                             \n");
    printf("|          [6] > System Boot Information                           \n");
    printf("           \n");
}

void Operating_System_Menu () {
    printf(":\\Operating System \n");
    printf("           \n");
    printf("|          [1] > View full system details                          \n");
    printf("|          [2] > Check Windows version                             \n");
    printf("|          [3] > View activation status                            \n");
    printf("|          [4] > View hotfixes                                     \n");
    printf("|          [5] > Uptime information                                \n");
    printf("           \n");
}

void Hardware_Information_Menu () {
    printf(":\\Hardware Information \n");
    printf("           \n");
    printf("|          [1] > View processor info                         \n");
    printf("|          [2] > Display motherboard details                 \n");
    printf("|          [3] > Check RAM info                              \n");
    printf("|          [4] > View graphics card details                  \n");
    printf("|          [5] > Check disk details                          \n");
    printf("|          [6] > List logical drives                         \n");
    printf("           \n");
}

void Network_Information_Menu () {
    printf(":\\Network Information \n");
    printf("           \n");
    printf("|          [1] > Show MAC addresses                   \n");
    printf("|          [2] > View IP configuration                \n");
    printf("           \n");
}

void User_and_Security_Menu () {
    printf(":\\User and Security \n");
    printf("           \n");
    printf("|         [1] > Show current user account               \n");
    printf("|         [2] > List environment variables              \n");
    printf("|         [3] > Check computer hostname                 \n");
    printf("           \n");
}

void Power_and_Performance_Menu () {
    printf(":\\Power and Performance \n");
    printf("           \n");
    printf("|         [1] > Generate battery report                   \n");
    printf("|         [2] > Show available power plans                \n");
    printf("           \n");
}

void System_Boot_Information_Menu () {
    printf(":\\System Boot Information \n");
    printf("           \n");
    printf("|        [1] > Check boot mode                  \n");
    printf("|        [2] > Get boot time                \n");
    printf("           \n");
}

void info() {
    printf("\n");
    printf("   ************************************** PROGRAM INFO ***********************************\n");
    printf("\n");
    printf("\n");
    printf("   Tool Name      : POWER DECK  \n");
    printf("\n");
    printf("   Version        : v1.0.0 \n");
    printf("\n");
    printf("   Developer      : Youness El Kabtane\n");
    printf("\n");
    printf("   Purpose        : This tool provides a quick and organized access to detailed system \n");
    printf("   information,including hardware,network,user accounts,and performance data.\n");
    printf("\n");
    printf("   Contact        : younesselka.dev@gmail.com\n ");
    printf("\n");
    printf("   ****************************************************************************************\n");
}

#endif // MENU_H_INCLUDED
