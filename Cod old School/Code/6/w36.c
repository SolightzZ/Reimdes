/*
student id : 66040233122
student name : Paniti Jahem

*/
#include <stdio.h>
main(){
	int sum = 0, num;
	/*
	printf("Enter number => ");
	scanf("%d", &num);
	*/
	
	do{ //loop
		printf("Enter number => ");
		scanf("%d", &num);
		if(num>=0){
			sum += num;
		}
	}while(num >= 0);
	
	printf("-----------------\n");
	printf("sum of all number : %d\n", sum);
}
