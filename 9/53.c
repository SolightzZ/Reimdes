#include <stdio.h>
/*
void fun(int x, int y) {	
// Get parmeter by value
	x = x * 2;
	y = y + 100;
	return;
}
*/

void fun(int *x, int *y) {	
// Get parmeter by value
	*x = *x * 2;
	*y = *y + 100;
	return;
}

main(){
	int a = 10, b = 20;
	printf("a = %d / b = %d\n", a, b);
	fun(&a,	&b);		// &a &b = 20 120 | &b &a = 110 40
	printf("a = %d / b =%d\n", a, b);
}
