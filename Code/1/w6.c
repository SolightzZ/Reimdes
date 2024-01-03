#include <stdio.h>

main()
{
	char product[20];
	float price, sumPrice;
	int qty;
	
	printf("Enter name => ");
	scanf("%s", &product);
	printf("Enter name => ");
	scanf("%f", &price);
	printf("Enter amout of product");
	scanf("%d, &qty");
	
	sumPrice = price * qty;
	printf("\n------------------------\n");
	printf("%s : %.2f x %d = %.2f baht.\n\n", product, price, qty, sumPrice);
	
}
