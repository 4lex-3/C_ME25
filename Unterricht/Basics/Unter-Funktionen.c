//
// Created by alexm on 07.01.2026.

// Unter-Funktionen


#include<stdio.h>
#include<stdlib.h>


// Funktions-Deklaration || Funktions-Prototyp)
//int addition(int x, int y); geht beides
int addition(int, int);// Angabe der Parameterliste (= Argumentliste)
                        // Variablennamen in der Argumentlist des
                        // FKT's Prototyps haben keine Bedeutung

int main(void) {

    int x, y , z; // Variablen Deklaration

    printf("Wert fuer x: ");
    scanf("%d", &x);

    printf("Wert y: ");
    scanf("%d", &y);

    z = addition(x, y);//Fkt's aufruf: Variablenwerte werden beim
                            // Aufruf der Reihe nach in die Variablen
                            // der Argumentliste der Fkt's Definition kopiert

    //z = x + y;
    printf("Addition %d + %d = %d", x, y, z);

    return(EXIT_SUCCESS);
}

// Funktionsdefinition:
int addition(int a, int b) {
    return a + b;
}