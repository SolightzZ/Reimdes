/*
student id: 66040233122
student name: Paniti JAhem
*/

#include <stdio.h>
#define NUM 5


main() {
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

        printf("\n- - - - - - - -\n");
    }

    printf("\n");
	printf("|------------------------------------------------|\n");
    printf("|Name\tTest 1\tTest 2\tTest 3\tAverage\tResult	 |\n");
    printf("|------------------------------------------------|\n");

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




/* Code old
main(){
	char name[NUM][20]; //array of คนแลคเตอร์   [avg/3]
	int i;
	
	for(i=0; i<NUM; i++){
		printf("Enter student no.%d name ==> ",i+1); 
		scanf("%s", &name);
	}
	printf("---------------------------------------\n");
	for(i=0; i<NUM; i++){
		printf("%s\n", name[i]);
	}
}
*/

