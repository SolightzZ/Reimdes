/*
student id : 66040233122
student name : Paniti Jahem

*/
#include <stdio.h>

main(){
	int i, sum = 0, n;
	
	printf("Enter number => ");
	scanf("%d", &n);
	do{
		sum += i; // sum = sum +i;
		i++;	
	}while(i<=n);
	
	/*
	i=1;
	while(i<=n){
		sum += i; // sum = sum +i;
		i++;
	}
	---------------------------
	for(i=1; i<=n; i++){
		sum += i; // sum = sum +i;
		}
		*/
	printf("\n-------------------------\n");
	printf("sumation 1-%d = %d\n", n, sum);
	}
