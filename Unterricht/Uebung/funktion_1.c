//
// Created by alexm on 20.01.2026.
//

#include <stdio.h>
//fkt prototyp
void f(void);
void f2(int);
int f3 (void);
int f4 (int);

int main() {

    int x=42;

    for (int i = 0; i < 10; i++) {
        f();
    }
    printf("\n\n");

    f2(x);

    printf("\n\n");

    int erg ;
    erg = f3() * 1000;

    printf("%d", erg);

    printf("\n\n");

    erg = f4(42);
    printf("42*1000 = %d", erg);


    return 0;
}

//fkt definition
void f(void) {
    printf("Happy Birthday you fag\n");
}

void f2(int a){
    int r = a * 2;
    printf("%d * 2 = %d", a, r);
}

int f3(void) {
    int wert;
    printf("Gib Wert ein: ");
    scanf("%d", &wert);
    return wert;
}

int f4 (int a) {
    return (a * 1000);
}