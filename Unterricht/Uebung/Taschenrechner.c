//
// Created by alexm on 10.12.2025.
// Taschenrechner mit switch Anweisungen

#include <stdio.h>
#include<math.h>


int main () {

    double x;
    double y;
    double z;
    char op = '\0';
    char rep = '\0';

    do {
        printf("Geben Sie ihren Operator ein:");
        scanf("%c", &op);
        printf("Geben Sie einen Wert fuer x ein:");
        scanf("%lf", &x);
        printf("Geben Sie einen Wert fuer y ein: ");
        scanf("%lf", &y);

        if (y == 0 && (op == '/' || op == ':')) {
            printf("Teilen durch 0 nicht moeglich");
        }else {
            switch (op) {
                case '+': z = x + y;
                    break;
                case '-': z = x - y;
                    break;
                case '*': z = x * y;
                    break;
                case '/': z = x / y;
                    break;
                case ':': z = x / y;
                    break;
                case '%': z = (int)x % (int)y;
                    break;
                default: printf("Fehler");

            }
            printf("Z = %.4lf", z);
        }
        printf("\nWollen Sie nochmal? [Y/N]");
        scanf(" %c", &rep);

    }while (rep == 'y' || rep == 'Y');

    return 0;
}