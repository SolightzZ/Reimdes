//student id : 66040233122
//student name : Paniti Jahem
#include <stdio.h>

main()
{
	float num1, num2, num3;
	float sum, average;
	
	// Input 
	printf("Input Number(1) : ");
	scanf("%f", &num1);
	printf("Input Numbwe(2) : ");
	scanf("%f", &num2);
	printf("Input Number(3) : ");
	scanf("%f", &num3);
	
	// process
	sum = num1 + num2 + num3;
    average = sum / 3;

	// Output
    printf("-------------------------------------------------------------\n");
    printf("Summation : %.2f\n", sum);
    printf("Average : %.2f\n", average);
	
}
