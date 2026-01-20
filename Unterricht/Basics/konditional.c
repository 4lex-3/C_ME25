//
// Created by alexm on 18.11.2025.
//
// Konditional (wenn ... dann ... sonst)
// Syntax:
// if(logExpr) Wahr Anweisung/en
// [else Falschanweisung]

// bemerkung:


#include <stdio.h>  // enthält z.B. : printf(), scanf()
#include <stdlib.h> // enthält z.B. : EXIT_SUCCESS

int main() {

    int x;
    int age;
    printf("Geben Sie ein Integer ein: \n ");
    scanf("%d", &x);

    // wenn es nach dem if nur eine Anweisung ist kann man die Geschweifte klammer auch weg lassen
    // if (x<0) printf("Negativ");
    // else printf("positiv");

    if (x > 0) {
        printf("positiv \n");
    } else if (x < 0) {
        printf("Negativ\n");
    }
    else {
        printf("Du bist ne Null\n");
    }

    printf("Gib dein Alter ein:\n");
    scanf("%d", &age);

    do {
        if (age<=0) {
            printf("Ist nicht möglich Wiederhole:");
            scanf("%d", &age);
        }
        else if (age > 0 && age <= 10) printf("Du Kind!\n");
        else if (age > 10 && age <=60) printf("Du Malocher\n");
        else printf("Du Rentner\n");
    }while (age <= 0);

    return (EXIT_SUCCESS);
}