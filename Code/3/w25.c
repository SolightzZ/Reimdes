/*
student id : 66040233122
student name : Paniti Jahem
*/

#include <stdio.h>
#include <ctype.h>

main()
{
	char code;
	float price, sum, rate, discount, net;
	int qty;
	
	printf("Enter product code(A/B/C/... ==> )");
	scanf("%c", &code);
	printf("Enter unit price of product =>");
	scanf("%f", &price);
	printf("Enter number of product");
	scanf("%d", &qty);
	
	sum = price * qty;
	
	 switch (toupper(code)) { // tolowe
		case 'A':	if(sum>1000)	rate = 0.10;
					else			rate = 0.00;
					break;
					
		case 'B':	if(sum>=10000)		rate = 0.30;
					else if(sum>5000)	rate = 0.20;
					else				rate = 0.00;
					break;
					
		case 'c':	if(sum>=3000)	rate = 0.20;
					else			rate = 0.05;
					break;
					
		default :	rate =0.00;
		
	}
	
	discount = rate * sum;
	net = sum - discount;
	
	printf("\n\n");
	printf("********* Invoice ***********\n\n");
	printf("Product code        : %c\n", toupper(code));
	printf("Number of profuct 	: %7d pcs.\n", qty);
	printf("Unit price 			: %10.2f baht. \n",price);
	printf("----------------------------------------\n");
	printf("Sum price 			: %10.2f baht. \n", sum);
	printf("Discount (%2.0fc)	: %10.2f baht. \n", rate*100, '%', discount);
	printf("Net price 			: %10.2f baht. \n", net);
	printf("\n\n ++++ Thank You ++++");
	
}
