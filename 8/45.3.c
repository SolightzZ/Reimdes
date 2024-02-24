/*
student id: 66040233122
student name: Paniti JAhem
*/

#include <stdio.h>

main(){
	float sum, avg, max;
	float score[5];
	int i;
	
	sum = 0;
	printf("Input Student Score.....\n");
	for(i=0; i<5; i++){
		printf("\nNo.%d => ", i+1);	scanf("%f", &score[i]);
		sum += score[1];
	
	}
	avg = sum / 5;
	max =score[0];
	
	printf("\n\n");
	printf("++++++++ Student score Report ++++++++++\n\n");
	printf("--------------------------------\n");
	printf("  	Student	  |  Score \n");
	printf("--------------------------------\n");
	
	for(i=0; i<5; i++){
		printf("	no.%d	|	%5.2f	\n", i+1, score[i]);
		if(score[i] > max)
			max =score[i];
	}
	printf("--------------------------------\n");
	printf("Averge score		: %5.2f\n", avg);
	printf("Top score		: %5.2f\n", max);
	
	
}

