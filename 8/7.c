#include <stdio.h>

#define NUM 5

int main() {
    char name[NUM][20];
    int testScores[NUM][3];
    float average[NUM];
    char result[NUM][5];
    int i, j;

    printf("Input Student's examination data...\n\n");

    for (i = 0; i < NUM; i++) {
        printf("Student no.%d\n", i + 1);
        printf("Name ==> ");
        scanf("%s", name[i]);

        for (j = 0; j < 3; j++) {
            printf("Test no.%d ==> ", j + 1);
            scanf("%d", &testScores[i][j]);
        }

        printf("-------------------------------\n\n");
    }

    printf("\n\n");

    printf("Name\t\tTest 1\tTest 2\tTest 3\tAverage\t\tResult\n");

    for (i = 0; i < NUM; i++) {
        float sum = 0;
        printf("%s\t", name[i]);

        for (j = 0; j < 3; j++) {
            printf("%d\t", testScores[i][j]);
            sum += testScores[i][j];
        }

        average[i] = sum / 3;
        printf("%.2f\t", average[i]);

        if (average[i] >= 60) {
            printf("pass\n");
            strcpy(result[i], "pass");
        } else {
            printf("fail\n");
            strcpy(result[i], "fail");
        }
    }
}

