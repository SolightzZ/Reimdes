/*
student id : 66040233122
student name : Paniti Jahem
*/

#include <stdio.h>

main()
	{
	float midterm, final, total;
	
	printf("Enter mid-teem score => ");
	scanf("%f", &midterm);
	printf("Enter final score => ");
	scanf("%f", &final);
	
	total = midterm + final;
	printf("Total score : %.2f\n\n", total);
	
	if(total >=60)
	{
		printf("++++++++++++++++++++++++++\n");
		printf("     You pass the eam  ...   \n");
		printf("++++++++++++++++++++++++++\n");
	} else 
	{
		printf("++++++++++++++++++++++++++\n");
		peintf(" YOu Failed ... ");
		printf("++++++++++++++++++++++++++\n");
	}
	printf("\n-----------bye bye.---------\n");
}
