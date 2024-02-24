/*
student id : 66040233122
student name : Paniti Jahem
*/

#include <stdio.h>

main(){
	float price, rate, sumPrice, discount, netPrice;
int qty;
char member;

printf("************ ABC SHOP ******************\n");
printf("input unit quntity price ==> ");	scanf("%f", &price);
printf("Input quantity ==> ");				scanf("%d", &qty);

sumPrice = price * qty;

printf("\n---------------------------------------------\n");
printf("%s : %10.2f bath.\n", "sumPrice", sumPrice);
printf("Are you member?(Y/N) ==> ");		scanf("%s", &member);

if(member=='Y'){
		rate = 0.15;
	}
else{
}

discount = sumPrice * rate;
netPrice = sumPrice - discount;

printf("---------------------------------------------\n");
printf("%20s : %10.2f baht.\n", "discount", discount);
printf("%20s : %10.2f bath.\n", "netPrice", netPrice);

printf("\n************** THANK TOU *****************");
}

