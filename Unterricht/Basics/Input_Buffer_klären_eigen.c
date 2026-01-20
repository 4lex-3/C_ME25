//
// Created by alexm on 16.12.2025.
// hier leere ich den input buffer mit einer getchar() in einer funktion

#include <stdio.h>
#include <stdlib.h>

void clear_buffer(void);

int main() {
    int x;
    char a;
    // Ohne buffer leeren
    printf("\tOHNE LEEREN DES BUFFERS:\n\n");
    printf("Gib Zahl ein:");
    scanf("%d", &x);
    printf("Geben sie einen Buchstaben ein:");
    scanf("%c", &a);

    printf("\nHier ist ihre Zahl:%d und ihr Buchstabe:%c", x, a);


    // Mit LEEREN des buffers über Funktion
    printf("\n\n\tMIT LEEREN DES BUFFERS:\n\n");
    printf("Gib Zahl ein:");
    scanf("%d", &x);
    // hier buffer leeren:
    clear_buffer();
    printf("Geben sie einen Buchstaben ein:");
    scanf("%c", &a);
    clear_buffer();

    printf("\nHier ist ihre Zahl:%d und ihr Buchstabe:%c", x, a);

    return 0;
}

void clear_buffer(void) {
    int c;
    //EOF = End of Line
    while ((c = getchar()) != '\n' && c != EOF) {

    }
}