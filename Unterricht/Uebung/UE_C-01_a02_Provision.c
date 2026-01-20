//
// Created by alexm on 25.11.2025.
// Übungsaufgabe Stempfle


#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main() {

    float UG1;
    float UG2;
    float UG3;
    float umsatz;

    float prov1;
    float prov2;
    float prov3;
    float prov4;
    double provision = 0.0;

    char vorname[30] = "\0";
    char nachname[30] = "\0";
    char choice = '\0';

    printf("!Provisionsprogramm!\n");
    printf("Geben sie die Umsatzgrenzen in Euro ein\n UG1 < UG2 < UG2\n");

    printf("Umsatzgrenze 1: ");
    scanf("%f",&UG1);

    do {
        printf("Umsatzgrenze 2 :\n");
        scanf("%f",&UG2);
        if(UG1>UG2) {
            printf("UG1 muss kleiner als UG2 sein\n");
        }
    }while (UG1 >= UG2);

    do {
        printf("Umsatzgrenze 3: \n");
        scanf("%f",&UG3);
        if(UG3<UG2) {
            printf("UG3 muss größer als UG2 sein\n");
        }
    }while (UG3<UG2);

    printf("Geben sie die Provisionstufen in prozent ein:\n");

    printf("PS1:\n");
    scanf("%f",&prov1);

    do {
        printf("PS2:\n");
        scanf("%f",&prov2);
        if(prov1>prov2) {
            printf("Die PS2 muss höher als PS1 sein!\n");
        }
    }while (prov1>prov2);

    do {
        printf("PS3:\n");
        scanf("%f",&prov3);
        if (prov2 > prov3) {
            printf("PS3 muss höher als PS2 sein");
        }
    }while ( prov2 > prov3);

    do {
        printf("PS4:\n");
        scanf("%f",&prov4);
        if (prov3 > prov4) {
            printf("PS4 muss höher als PS3 sein\n");
        }
    }while (prov3 > prov4);

    do {
        printf("Geben sie ihren Vornamen ein:\n");
        scanf(" %s", vorname);
        printf("Nachname:\n");
        scanf(" %s", nachname);

        printf("Geben Sie ihren Umsatz ein:\n");
        scanf("%f",&umsatz);

        if ( umsatz < UG1) {
            provision = (umsatz / 100) * prov1;
        }else if ( umsatz < UG2) {
            provision = (umsatz / 100) * prov2;
        }else if ( umsatz < UG3) {
            provision = (umsatz / 100) * prov3;
        }else if (umsatz >= UG3) {
            provision = (umsatz / 100) * prov4;
        }
        printf("Provision von %s %s ist %.2lf\n", vorname, nachname, provision );

        printf("Soll das Programm nochmal ausgefuehrt werden?[J/N]\n");
        scanf(" %c", &choice);
    }while (choice == 'j' || choice == 'J');



    return 0;
}