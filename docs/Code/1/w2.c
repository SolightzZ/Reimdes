#include <stdio.h>
#define MAX 100
#define TXT "Hello"

main()
{
	int num1 = 10 , num2, num3;
	const float tax = 0.07; // tax is constant
	
	num1 = 200;
	num2 = num1 + 100;
	num3 = num1 + num2;
	num2 = 0;
	//tax = 0.10;
	
	printf("Hello World.");
	printf("My name is %s", "Rewadee");
	printf("Wind speed is %d MPH\n", 95);
	printf("%d\n", MAX);
	printf("%s\n", TXT);
	printf("Tax = %f\n", tax);
}
