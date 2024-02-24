/*
student id: 66040233122
student name: Paniti JAhem
*/

#include <stdio.h>
#include "myfunction.c"
#include <stdlib.h>

int main() {
    int n;
    char ch, loop;

    do {
        system("cls");
        menu();
        printf("Enter menu (B/D) ==> ");
        scanf(" %c", &ch);  // Corrected the format specifier and added a space before %c

        if (ch == 'B' || ch == 'b') {
            printf("Enter decimal number => ");
            scanf("%d", &n);
            printf("%d in decimal = %d in binary\n", n, Decimal_to_Binary(n));
        } else if (ch == 'D' || ch == 'd') {  // Corrected the quotation marks
            printf("Enter Binary number => ");
            scanf("%d", &n);  // Corrected the format specifier
            printf("%d in binary = %d in decimal\n", n, Binary_to_Decimal(n));
        } else {
            printf("Invalid menu choice!!!!\n");
        }

        printf("\n-----------------------------\n");
        printf("Restart? (Y/N) ==> ");
        scanf(" %c", &loop);  // Corrected the format specifier and added a space before %c

    } while (loop == 'Y' || loop == 'y');

    return 0;  // Added return statement
}

