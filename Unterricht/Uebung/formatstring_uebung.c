//
// Created by alexm on 26.11.2025.
//
//
#include<stdio.h>
#include<stdlib.h>

int main() {

    int zahl = 1234;
    const int feldbreite = 78, y = 6, z = 4;
    const char leer = ' ';

    printf("<%d>\n\n", zahl);// correct
    printf("<%-10d>\n", zahl);//correct
    printf("<%*c>\n\n", feldbreite, leer);//correct
    printf("<%+0*.*f>\n\n", y+z+3, z, (float)zahl);// correct
    printf("<%0*d>\n\n", y+z+3, zahl);
    printf("<%*c %0*d>\n\n", feldbreite -y, leer, y, zahl);// correct
    printf("<%06d%*c>", zahl, feldbreite - 6, leer);// correct



    return(EXIT_SUCCESS);
}
