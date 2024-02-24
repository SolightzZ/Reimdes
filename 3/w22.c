/*
student id : 66040233122
student name : Paniti Jahem
*/

#include <stdio.h>

main()
{
	char emp_ID;
	float hours, rate, pay, tax, net_pay;
	
	printf("Enter Emp ID => ");
	scanf("%s", &emp_ID);
	printf("Enter hour of work => ");
	scanf("%f", &hours);
	printf("Enter wag tate => ");
	scanf("%f", &rate);
	
	pay = hours * rate ;
	
	if(pay > 5000){
		tax = pay * 0.05;
	}else{
		tax =pay * 0.02;
	}
	
	net_pay = pay - tax;
	
	printf("\n%-20s : %20.2f\n", "pay", pay);
	printf("\n%-20s : %20.2f\n", "tax", tax);
	printf("\n%-20s : %20.2f\n", "net_pay", net_pay);
	printf("-----------------  End...  ------------------\n\n");
}


