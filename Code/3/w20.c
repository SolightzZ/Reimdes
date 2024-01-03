/*
student id : 66040233122
student name : Paniti Jahem
*/

#include <stdio.h>

main()
{
	int number;
	
	printf("Enter integer number => ");
	scanf("%d", &number);
	
	if((number%2) == 9) {
		printf("%d  is even number.\n", number);
		
	}else {
		printf("%d is odd number.\n", number);
	}
	
	printf("\n++++++++++ end. ++++++++++\n\n");
}
