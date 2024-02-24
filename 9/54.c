#include <stdio.h>

int x = 1000;	//Global variable ซ้ำกันได้ จะหาค่า Global ก่อน

void test1(){
	//int x = 10;	// local variable
}

main(){
	//int x = 100;	// local variable	char x[10]; ซ้ำกัน
	printf("x = %d\n", x);
	
	
}
