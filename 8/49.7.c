/*
student id: 66040233122
student name: Paniti JAhem
*/

#include <stdio.h>
#include <string.h>

main() {
    char seat[5][6][20] = {{"N/A", "N/A", "N/A", "N/A", "N/A", "N/A"},
                           {"N/A", "N/A", "N/A", "N/A", "N/A", "N/A"},
                           {"N/A", "N/A", "N/A", "N/A", "N/A", "N/A"},
                           {"N/A", "N/A", "N/A", "N/A", "N/A", "N/A"},
                           {"N/A", "N/A", "N/A", "N/A", "N/A", "N/A"}};

    int i, j;
    int row, col;
    
    for (i = 0; i < 5; i++) {
        for (j=0; j<6; j++) {
            strcpy(seat[i][j], "N/A");
        }
    }
    
	printf("H");
 	 do {
        printf("Input row (1-5) and Column (1-6) of seat (enter 0 to exit) ==> ");
        scanf("%d %d", &row, &col);

        if (row != 0) {
            if ((row >= 1 && row <= 5) && (col >= 1 && col <= 6)) {
                if (strcmp(seat[row - 1][col - 1], "N/A") == 0) {
                    printf("Input student name ==> ");
                    scanf("%s", seat[row - 1][col - 1]);
                } else {
                    printf("This seat is not available\n");
                }
            } else {
                printf("Row/Column number is invalid!!\n");
                printf("Input row (1-5) and column (1-6) only!!\n");
            }
            printf("\n------------------------------------------------------------\n");
        }
    } while (row != 0);

    // Display seat
    printf("\n*********** Examination seat diagram\n\n");
    printf("%3s", " ");
    for (i = 0; i < 6; i++) {
        printf("%20d", i);
    }
    printf("\n---------------------------------------------------------------------------------------------------------\n");
    for (i = 0; i < 5; i++) {
        printf("%3d", i + 1);
        for (j = 0; j < 6; j++) {
            printf("%20s", seat[i][j]);
        }
        printf("\n------------------------------------------------------------------------------------------------------\n");
    }
}

/*
main() {
    char seat[5][6][20] = {{"N/A", "N/A", "N/A", "N/A", "N/A", "N/A"},
                           {"N/A", "N/A", "N/A", "N/A", "N/A", "N/A"},
                           {"N/A", "N/A", "N/A", "N/A", "N/A", "N/A"},
                           {"N/A", "N/A", "N/A", "N/A", "N/A", "N/A"},
                           {"N/A", "N/A", "N/A", "N/A", "N/A", "N/A"}};

    int i, j;
    int row, col;

    for (i = 0; i < 5; i++) {
        for (j = 0; j < 6; j++) {
            printf("%-20s", seat[i][j]);
        }
        printf("\n");
    }

    while (1) {
        printf("Input row and column (0 to exit) ==> ");
        scanf("%d", &row);

        if (row == 0) {
            break;
        }

        scanf("%d", &col);

        if (row < 1 || row > 5 || col < 1 || col > 6) {
            printf("Row/Column number is invalid! Press row(1-5) and column(1-6) only.\n");
            continue;
        }

        if (strcmp(seat[row - 1][col - 1], "N/A") != 0) {
            printf("Seat is not available...\n");
            continue;
        }

        char name[20];
        printf("Input student name -> ");
        scanf("%s", name);

        strcpy(seat[row - 1][col - 1], name);
    }

    printf("\nFinal Examination Seat\n");
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 6; j++) {
            printf("%-20s", seat[i][j]);
        }
        printf("\n");
    }
}

*/
