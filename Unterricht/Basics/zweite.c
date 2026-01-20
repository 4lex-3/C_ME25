//
// Created by alexm on 12.11.2025.
// zweites Unterrichtsprogramm
/* Dieses Programm zeigt das man variablen auch hinter einander schreiben kann.
 * Und wie man damit rechnet
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
    //int l;
    //int b;
    //int h;
    //int vol = 0;
    //oder
    int l, b, h, vol;

    printf("Laenge: ");
    scanf("%d", &l);
    printf("Breite: ");
    scanf("%d", &b);
    printf("Hoehe: ");
    scanf("%d", &h);

    vol = l * b * h;

    printf("Das Ziegelvolumen ist: %d * %d * %d = %d\n", l, b, h, vol);


    return (EXIT_SUCCESS);
}