/*
student id: 66040233122
student name: Paniti JAhem
*/

// myfunction.c
#include <stdio.h>
#include <math.h>

void menu() {
    printf("Instruction.....\n");
    printf("Enter D / d : Convert binary to Decimal.\n");
    printf("Enter B / b : Convert Decimal to Binary.\n");
    return;
}

int Binary_to_Decimal(int n) {
    int decimal = 0, rem, i = 0;
    while (n != 0) {
        rem = n % 10;
        n = n / 10;
        decimal = decimal + (rem * pow(2, i));
        i = i + 1;
    }
    return decimal;
}

int Decimal_to_Binary(int n) {
    int binary = 0, i = 1, rem;
    while (n != 0) {
        rem = n % 2;
        n = n / 2;
        binary = binary + (rem * i);
        i = i * 10;
    }
    return binary;
}

