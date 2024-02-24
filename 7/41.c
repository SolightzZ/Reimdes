/*
student id: 66040233122
student name: Paniti JAhem
*/

#include <stdio.h>

int main() {
    int i, g, c, l, j, n, table, total;
    table = 0;
    total = 0;

    printf("Enter table length(1-5) => ");
    scanf("%d", &l);

    while (l < 1 || l > 5) {
        printf("++ Error!!! Table must be only 1-5 ++\n");
        printf("--------------------------------------\n");
        printf("Enter table length(1-5) => ");
        scanf("%d", &l);
    }

    printf("Enter number of customer groups(1-200) => ");
    scanf("%d", &g);

    while (g < 1 || g > 200) {
        printf("++ Error!!! Customer group must be only 1-200 ++\n");
        printf("--------------------------------------\n");
        printf("Enter number of customer groups(1-200) => ");
        scanf("%d", &g);
    }

    for (i = 1; i <= g; i++) {
        printf("Enter number of customers in group #%d => ", i);
        scanf("%d", &c);

        while (c < 1 || c > 100) {
            printf("++ Error!!! Number of customers must be only 1-100 ++\n");
            printf("--------------------------------------\n");
            printf("Enter number of customers in group #%d => ", i);
            scanf("%d", &c);
        }

        n = (i - 1) * l;

        if (c % (l * 2) == 0) {
            table = c / (l * 2);
        } else {
            table = c / (l * 2) + 1;
        }

        printf("Use %d table(s) for group #%d.\n", table, i);
        printf("-----------------------------------------\n");
        total = total + table;
    }

    printf("\n\n----------------------------------------------------------\n");
    printf("Number of all tables: %d\n", total);
}

