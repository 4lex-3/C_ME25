//
// Created by alexm on 20.01.2026.
//

#include <stdio.h>
//Funktionsprototyp
float mwst (float, float);

int main() {
    float preis;
    float steuer;
    char r = 'n';

    do {
        printf("\t***Bruttorechner***\n\n\n");
        printf("Geben Sie den Nettowarenwert in Euro ein: ");
        scanf("%f", &preis);
        printf("Geben Sie den MwSt Steuersatz in Prozent ein: ");
        scanf("%f", &steuer);

        //Funktionsaufruf
        float brutto= mwst(preis, steuer);

        printf("Der Bruttopreis ist: %.2f\n\n", brutto);

        printf("Moecheten Sie noch einen Wert berechnen? [j|n]: ");
        scanf(" %c", &r);
    }while (r == 'j' || r == 'Y');

    printf("\t*************");

    return 0;
}

//MwSt Berechnung Funktions-Deklaration

float mwst (float preis, float steuer) {

    float brutto;
    brutto = preis * ((100 + steuer) / 100);

    return brutto;

}
