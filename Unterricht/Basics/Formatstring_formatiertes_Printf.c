//
// Created by alexm on 26.11.2025.
//
// FORMATIERTE AUSGABE mit (f) printf()
//
// printf("formatstring", [Liste mit Var-/Wert/Expr});

#include<stdio.h>
#include<stdlib.h>

int main() {

    int x = 20;
    float pi = 3.141592653589793;

    printf("Wert von x: <%+10d>\n", x);
    printf("Wert von X:  <%010d>\n", x);
    // flag: - macht es linksbündig
    printf("Wert von x: <%-10d>\n", x);
    // 15.3 beduetet von 15 reservierten stellen sind 3 nachkomma
    printf("Wert von PI: <%15.3f>\n", pi);


    printf("\n\n\n");

    //Var:
    // Erster Stern/Feldbreite: x
    // zweiter Stern / Anzahl nachkomma: 4
    // f: pi
    printf("Wert von pi: <%+*.*f>\n", x, 4, pi);

    printf("%f\n", (float)x);

    return (EXIT_SUCCESS);
}