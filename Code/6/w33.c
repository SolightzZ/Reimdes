/*
student id : 66040233122
student name : Paniti Jahem

*/
#include <stdio.h>
main(){
	int i, n;
	float num, sum, avg;
	
	printf("Enter multiply number => ");
	scanf("%d", &n);
	
	printf("-----------------\n");
	i=1;
	while(i<=12){
		printf("%2d x %2d = %3d\n", n, i, n*i);
		i++;
	}
	/*
	for(i=1; i<=12; i++){
		printf("%2d x %2d = %3d\n", n, i, n*i);
	}
	*/
	printf("----------------\n");
}
