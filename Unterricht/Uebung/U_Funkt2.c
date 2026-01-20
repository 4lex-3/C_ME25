//
// Created by alexm on 13.01.2026.
//


#include <math.h>
#include<stdio.h>

void star();
float x_n(float, int);

int main() {

    float x;
    int n;

    star();

    printf("Geben Sie einen Wert fuer X ein: ");
    scanf("%f", &x);

    printf("Geben Sie einen Wert fuer n ein: ");
    scanf("%d", &n);

    while (n<=0) {
        printf("n muss groesser o sin: ");
        scanf("%d", &n);
    }

    float erg = x_n(x, n);

    printf("Ergebnis : %.2f\n", erg);


    star();


    return 0;
}

void star() {
    for (int i = 0; i < 20; i++) {
        printf("*");
    }
    printf("\n");
}

float x_n(float x, int n) {
    return (pow(x, n));
}