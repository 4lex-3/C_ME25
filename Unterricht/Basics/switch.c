//
// Created by alexm on 09.12.2025.
// switch; konstruktionsanweisung

#include <stdio.h>
#include <stdlib.h>

int main () {
    int x;
    printf("Zahl eingeben");
    scanf("%d", &x);

    switch (x) {
        case 1: printf("Ampel blinkt.\n");
            break;
        case 2: printf("Ampel ist rot\n");
            break;
        case 3: printf("Ampel ist rot-gelb\n");
            break;
        case 4: printf("Ampel ist gelb\n");
            break;
        case 5: printf("Ampel ist gruen\n");
            break;
        default: printf("Wert muss zwischen 0 und 6 sein.\n");
    }



    return (EXIT_SUCCESS);
}