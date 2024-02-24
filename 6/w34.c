/*
student id : 66040233122
student name : Paniti Jahem

*/
#include <stdio.h>
main(){
	float num, sum, avg;
	int n, i;
	
	printf("********** program Find Average number **\n");
	printf("Enter all of number => ");
	scanf("%d", &n);
	printf("-------------------------------------------\n");
	
	i=1;
	while(i<=n){
		printf("\tEnter number(%d) => ", i);
		scanf("%d", &num);
		sum += num; // sum = sum + num;
		i++;
	}
	/*
	for(i=1; i<=n; i++){
		printf("\tEnter number(%d) => ", i);
		scanf("%d", &num);
		sum += num; // sum = sum + num;
	}
	*/
	
	avg= sum / n ;
	
	printf("-------------------------------------------\n");
	printf("Average number : %.2f\n\n", avg);
}
