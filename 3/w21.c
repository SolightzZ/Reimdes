/*
student id : 66040233122
student name : Paniti Jahem
*/

#include <stdio.h>

main()
{
	float price, qty, sumPrice, discount, netPrice;
	
	printf("Enter unit of price => ");
	scanf("%f", &price);
	printf("Enter unit of qty => ");
	scanf("%f", &qty);
	
	sumPrice = price * qty;
	
	if(sumPrice >= 1000){
		discount = sumPrice * 0.1;
	}
	else{
		discount =sumPrice * 0;
	}
	
	netPrice = sumPrice - discount;
	
	printf("\n%-20s : %20.2f\n", "sumPrice", sumPrice);
	printf("\n%-20s : %20.2f\n", "discount", discount);
	printf("\n%-20s : %20.2f\n", "netPrice", netPrice);
	printf("-----------------  End...  ------------------\n\n");
}
