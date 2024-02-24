#include <stdio.h>

main(){
	int x =10;
	int *px = &x;	//px is pointer [add address]
	
	printf("Value of x = %d\n", x);
	printf("address of x = %p\n", &x);
	printf("address of x = %d\n", &x);
	
	printf("-------------------------\n");
	
	printf("Value of px = %d\n", px);
	printf("address of px = %d\n", &px);	
	printf("Value at px = %d\n", *px);
	
	
}
