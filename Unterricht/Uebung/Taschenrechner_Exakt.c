//
// Created by alexm on 07.01.2026.
//

#include <stdio.h>
#include <stdlib.h>
#include<math.h>

int main(void){

    char dec = 'j';
    double x,y,z;
    char op = '\0';

    do{
        printf("Zahlenargument x: ");
        scanf("%lf", &x);
        printf("Operator: ");
        scanf(" %c", &op);
        while(op != '+' && op != '-' && op != '*' && op != '/' && op != ':' && op != '%'){
            printf("Achtung nur gültige Operatoren: ");
            scanf(" %c", &op);
        }
        printf("Zahlenargument y: ");
        scanf("%lf", &y);

        switch(op){
            case '+': z = x + y; break;
            case '-': z = x - y; break;
            case '*': z = x * y; break;
            case '/': z = x / y; break;
            case ':': z = x / y; break;
            case '%': z = (int)x % (int)y; break;
            default: printf("Error");
        }
        printf("%.2lf %c %.2lf = %.2lf\n", x, op, y, z);

        printf("Nochmal[j|n]: ");
        scanf(" %c", &dec);
    }while(dec == 'j' || dec == 'J');

    return 0;
}