/*
student id : 66040233122
student name : Paniti Jahem
*/

#include <stdio.h>
#include <string.h>

 main() {
    char b_name[50];
    int b_code, qty;
    float price, sumPrice;

    printf("\t\t Book List\n\n");
    printf("---------------------------------------------------------------\n");
    printf("Code \t\t Book Title\t\t Price\n");
    printf("---------------------------------------------------------------\n");
    printf("\t 1 \t : Harry Porter\t\t 250 baht.\n");
    printf("\t 2 \t : Vampire Twilight\t 200 baht.\n");
    printf("\t 3 \t : C Programming\t 150 baht.\n");
    printf("\t 4 \t : JAVA Programming\t 180 baht.\n");
    printf("\t 5 \t : Basic Python\t\t 240 baht.\n");
    printf("\t 6 \t : ---------------- STOP ----------------\n\n\n");

    printf("---------------------------------------------------------------\n");
    printf("Input book code ==> ");
    scanf("%d", &b_code);

    if (b_code == 6) {
        printf("***************** Bye Bye *********************************\n");
    }

    printf("Input number of books ==> ");
    scanf("%d", &qty);

    switch (b_code) {
        case 1: strcpy(b_name, "Harry Porter");  price = 250.0;  break;
        case 2: strcpy(b_name, "Vampire Twilight"); price = 200.0; break;
        case 3: strcpy(b_name, "C Programming"); price = 150.0; break;
        case 4: strcpy(b_name, "JAVA Programming"); price = 180.0; break;
        case 5: strcpy(b_name, "Basic Python"); price = 240.0; break;
        default: printf("\nInvalid book code!!!\n");
     }

    sumPrice = price * qty;

    printf("\n %s : %d x %.2f = %.2f baht.\n", b_name, qty, price, sumPrice); 
    printf("---------------------------------------------------------------\n");
}

