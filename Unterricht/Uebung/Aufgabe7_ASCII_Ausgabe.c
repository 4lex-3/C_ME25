//
// Created by alexm on 10.12.2025.
// Alle AscII Symbole mit Wertung

#include<stdio.h>
#include<stdlib.h>

int main() {
    int ask;
    int i;
    do {
        printf("ASCII Tabelle.\n Geben sie an ob 128 oder 256:");
        scanf("%d", &ask);
    }while (ask != 128 && ask != 256);

    if (ask = 256) {

        for (i = 0; i < 256; i++) {
            printf("ASCII Tabelle: WERT, Hex, Bedeutung\n");
            printf("\t%d\t|\t%x\t|\t%c\t\n", i, i, i);

        }
    }else {
        for (i = 0; i < 128; i++) {
            printf("ASCII Tabelle: WERT, Hex, Bedeutung\n");
            printf("\t%d\t|\t%x\t|\t%c\t\n", i, i, i);
        }
    }

    return (EXIT_SUCCESS);
}