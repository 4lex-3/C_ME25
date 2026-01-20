//
// Created by alexm on 10.12.2025.
// Arbeitsblatt von Stempfle in Directory

#include <stdio.h>
#include <stdlib.h>
#include<math.h>


int main() {

    int celsius;

    printf("\tCelsius\t|\tFahrenheit\n");
    printf("\t---------------------\n");

    for (celsius = -50;celsius <= 150; celsius += 10) {

        float fahrenheit = celsius * 9.0 / 5.0 + 32.0;
        printf("\t%+3d\t|\t%3.2f\n", celsius, fahrenheit);
    }

    return (EXIT_SUCCESS);
}