#ifndef MENU_H_INCLUDED
#define MENU_H_INCLUDED

#define BLUE   "\033[38;5;69m"
#define PINK   "\033[38;5;204m"
#define YELLOW "\033[38;5;226m"
#define GREEN  "\033[38;5;34m"
#define RESET  "\033[0m"

void banner() {
    printf(YELLOW"            _____   _____  _  _  _ _______  ______      ______  _______ _______ _     _     \n"RESET);
    printf(YELLOW"           |_____] |     | |  |  | |______ |_____/      |     \\ |______ |       |____/     \n"RESET);
    printf(PINK"           |       |_____| |__|__| |______ |    \\_      |_____/ |______ |_____  |    \\\_  \n"RESET);
    printf(BLUE"                                                                                        . Colored Version \n"RESET);
    printf(BLUE":::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::     \n"RESET);
    printf("---------------------------------------------------------------------------------------------------------     \n");
    printf("|    [back+] Return to the Main Menu    |    [back] Return to the Sub-Menu    |    [INFO] About Page    |     \n");
    printf("---------------------------------------------------------------------------------------------------------     \n");
}

void index() {
    printf("           \n");
    printf(BLUE"|          [1] > Operating System                                  \n");
    printf("|          [2] > Hardware Information                              \n");
    printf("|          [3] > Network Information                               \n");
    printf("|          [4] > User and Security                                 \n");
    printf("|          [5] > Power and Performance                             \n");
    printf("|          [6] > System Boot Information                           \n"RESET);
    printf("           \n");
}

void Operating_System_Menu () {
    printf(GREEN":\\Operating System \n"RESET);
    printf("           \n");
    printf(BLUE"|          [1] > View full system details                          \n");
    printf("|          [2] > Check Windows version                             \n");
    printf("|          [3] > View activation status                            \n");
    printf("|          [4] > View hotfixes                                     \n");
    printf("|          [5] > Uptime information                                \n"RESET);
    printf("           \n");
}

void Hardware_Information_Menu () {
    printf(GREEN":\\Hardware Information \n"RESET);
    printf("           \n");
    printf(BLUE"|          [1] > View processor info                         \n");
    printf("|          [2] > Display motherboard details                 \n");
    printf("|          [3] > Check RAM info                              \n");
    printf("|          [4] > View graphics card details                  \n");
    printf("|          [5] > Check disk details                          \n");
    printf("|          [6] > List logical drives                         \n"RESET);
    printf("           \n");
}

void Network_Information_Menu () {
    printf(GREEN":\\Network Information \n"RESET);
    printf("           \n");
    printf(BLUE"|          [1] > Show MAC addresses                   \n");
    printf("|          [2] > View IP configuration                \n"RESET);
    printf("           \n");
}

void User_and_Security_Menu () {
    printf(GREEN":\\User and Security \n"RESET);
    printf("           \n");
    printf(BLUE"|         [1] > Show current user account               \n");
    printf("|         [2] > List environment variables              \n");
    printf("|         [3] > Check computer hostname                 \n"RESET);
    printf("           \n");
}

void Power_and_Performance_Menu () {
    printf(GREEN":\\Power and Performance \n"RESET);
    printf("           \n");
    printf(BLUE"|         [1] > Generate battery report                   \n");
    printf("|         [2] > Show available power plans                \n"RESET);
    printf("           \n");
}

void System_Boot_Information_Menu () {
    printf(GREEN":\\System Boot Information \n"RESET);
    printf("           \n");
    printf(BLUE"|        [1] > Check boot mode                  \n");
    printf("|        [2] > Get boot time                \n"RESET);
    printf("           \n");
}

void info() {
    printf("\n");
    printf("   ************************************** PROGRAM INFO ***********************************\n");
    printf("\n");
    printf("\n");
    printf("   Tool Name      : ");
    printf(BLUE"POWER DECK  \n"RESET);
    printf("\n");
    printf("   Version        : ");
    printf(GREEN"v1.0.0 \n"RESET);
    printf("\n");
    printf("   Developer      : ");
    printf(YELLOW"Youness El Kabtane\n"RESET);
    printf("\n");
    printf("   Purpose        : This tool provides a quick and organized access to detailed system \n");
    printf("   information,including hardware,network,user accounts,and performance data.\n");
    printf("\n");
    printf("   Contact        : ");
    printf(PINK"younesselka.dev@gmail.com\n "RESET);
    printf("\n");
    printf("   ****************************************************************************************\n");
}

#endif // MENU_H_INCLUDED
