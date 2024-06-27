#include <stdio.h>

main()
{
	char name[20] = "Lisa Blackpink";
	char product[20] = "Mama Moo Sub";
	float price = 12.0, sumPrice;
	int qty = 10;
	
	printf("Hello World...\n");
	printf("My name is %s\n", "Paniti");
	printf("I\'m %s\n", name);
	printf("%d + %d = %d\n",10,2, 10+2);
	
	sumPrice = price * qty;
	printf("%s  : %f x %d = %f baht.\n", product, price, qty, sumPrice);
	printf("%s  : %f x %d = %f baht.\n", "Somtum", 55.00, 2, 55.00*2);
}
