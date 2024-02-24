/*
student id : 66040233122
student name : Paniti Jahem
*/


#include <stdio.h>

main() {
    char menuCode;
    char type;
    char size;
    int amount;

    int prices[5][3][3] = {
        {{35, 40, 45}, {40, 45, 50}, {45, 50, 55}},
        {{40, 45, 50}, {45, 50, 55}, {50, 55, 60}},
        {{45, 50, 55}, {50, 55, 60}, {55, 60, 65}},
        {{50, 55, 60}, {55, 60, 65}, {60, 65, 70}},
        {{55, 60, 65}, {60, 65, 70}, {65, 70, 75}}
    };

    printf("Menu              HOT          ICed       Smoothie\n");
    printf("               S / M / L    S / M / L     S / M / L\n");
    printf("---------------------------------------------------\n");
    printf("A : Americano  30/ 40/ 45   40/ 45/ 50    45/ 50/ 55\n");
    printf("E : Espresso   40/ 45/ 50   45/ 50/ 55    50/ 55/ 60\n");
    printf("C : Cappuccino 45/ 50/ 55   50/ 55/ 60    55/ 60/ 65\n");
    printf("L : Latte      50/ 55/ 60   55/ 60/ 65    60/ 65/ 70\n");
    printf("M : Mocha      55/ 60/ 65   60/ 65/ 70    65/ 70/ 75\n\n");
    printf("----------------------------------------------------\n\n");
    
    printf("Enter coffee menu (A/E/C/L/M): ");
    scanf(" %c", &menuCode);

    printf("Enter type (H/I/S): ");
    scanf(" %c", &type);

    printf("Enter size (S/M/L): ");
    scanf(" %c", &size);

    printf("Enter amount of coffee: ");
    scanf("%d", &amount);

    int menuIndex;
    switch (menuCode) {
        case 'A': menuIndex = 0; break;
        case 'E': menuIndex = 1; break;
        case 'C': menuIndex = 2; break;
        case 'L': menuIndex = 3; break;
        case 'M': menuIndex = 4; break;
        default:
            printf("Invalid menu code\n");
    }

    int typeIndex, sizeIndex;
    switch (type) {
        case 'H': typeIndex = 0; break;
        case 'I': typeIndex = 1; break;
        case 'S': typeIndex = 2; break;
        default:
            printf("Invalid type\n");
    }

    switch (size) {
        case 'S': sizeIndex = 0; break;
        case 'M': sizeIndex = 1; break;
        case 'L': sizeIndex = 2; break;
        default:
            printf("Invalid size\n");
    }


    int totalPrice = prices[menuIndex][typeIndex][sizeIndex] * amount;
    printf("\n*****************************************************\n");
    printf("%c (%s/%c) : %d x %d = %d baht.\n", menuCode, (type == 'H') ? "Hot" : ((type == 'I') ? "Iced" : "Smoothie"), size, amount, prices[menuIndex][typeIndex][sizeIndex], totalPrice);
}

