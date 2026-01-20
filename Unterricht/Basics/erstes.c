//
// Created by alexm on 11.11.2025.
// Version 1.0 erstes programm ME25 Stempfle

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

    char x [] = "\0";

    printf("\"Guten Morgen\" meine Freunde: Gib deinen Namen ein: \n");
    fgets(x, sizeof(x), stdin);
    x[strlen(x) - 1] = '\0';
    printf("%s\n", x);


    return (EXIT_SUCCESS);
}

