#include <stdio.h>




void Hello(){							//????(Function prototype) | No Return no parmeter
	printf("Hello......\n");
}

/*
mreturn_type FunctionName(parmeter)
{	}
*/

int test1(){						// No parmeter but return Vakue
	return 10;
}

int Sum(int x, int y){				// Get parmeter anf return value
	return (x + y);
}

void test2(char n[])	// no return but get parmeter
{
	printf("HI...");
}
main(){
	Hello();
	Hello();
	printf("%d\n", test1());		//	No return but get parmeter
	printf("%d\n", Sum(10, 20));
	test2("Paniti");
}
