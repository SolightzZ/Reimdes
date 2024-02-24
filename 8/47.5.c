/*
student id: 66040233122
student name: Paniti JAhem
*/

#include <stdio.h>
#define CITY 2
#define WEEK 7

main(){
	int i, j;
	int temp[CITY][WEEK];
	
	printf("Input temperature data....\n");
    for (i = 0; i < CITY; i++) {
        printf("City#%d\n", i + 1);
        for (j = 0; j < WEEK; j++) {
            printf("\tDay #%d ==> ", j + 1);
            scanf("%d", &temp[i][j]);
        }
        printf("\n---------------------\n\n");
    }

    printf("\n\n");
    printf("++++++ City Temperature Report ++++++++++++\n\n");
    printf("----------------------------------------------\n");
    printf(" CITY | ");
    for (j = 0; j < WEEK; j++) {
        printf("%3d  |", j + 1);
    }
    printf("\n---------------------------\n");

    for (i = 0; i < CITY; i++) {
        printf(" #%d  |", i + 1);
        for (j = 0; j < WEEK; j++) {
            printf("%3d  |", temp[i][j]);
        }
        printf("\n");
    }
    printf("----------------------------------\n");
}
