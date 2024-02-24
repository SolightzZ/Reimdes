/*
student id: 66040233122
student name: Paniti JAhem
*/

#include <stdio.h>

main(){
	float sale[5];
	float sum = 0 , percent;
	int i;
	
	printf("Input saale volum of saleperson...\n");
	for(i=0; i<5; i++){
		printf("\nNo.%d => ", i+1); scanf("%f",&sale[i]);
		sum = sum + sale[i];
	}
	printf("-------------------------\n");
	printf("Tota; sale volume : %5.2d\n", sum);
	
	printf("+++ Sale Report +++\n\n");
	
	printf("----------------------------\n");
	printf("|	No.	|	Volume	|\n");
	printf("----------------------------\n");
	
	for(i=0; i<5; i++){
		percent = (sale[i]*100) / sum;
		printf("	no.%d	|	%5.2f\n", i + 1, percent);
	}
}
