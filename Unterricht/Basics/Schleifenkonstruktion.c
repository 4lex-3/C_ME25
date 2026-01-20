//
// Created by alexm on 09.12.2025.
// Schleifenkonstruktion

#include<stdio.h>
#include<stdlib.h>

int main() {

    int i , j ,k ,m;
    printf("Zahl eingeben:  ");
    scanf("%d",&i);
    j = i;
    k = i;
    m = i;
    // könnte auch oben h scannen und jedes mal i = h schreiben vor jeder Schleife


    printf("Kopfschleife: \n");
    while (i >= 0) {
        printf("%10d\n", i);
        i--;

    }


    printf("\n\nFussschleife\n");

    do {
        printf("%10d\n", j);
        j--;
    }while (j >= 0);


    printf("\n\n\nZaehlerschleife: \n");

    for (k; k >= 0; k--) {
        printf("%10d\n", k);
    }



    return (EXIT_SUCCESS);
}