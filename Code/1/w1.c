#include <stdio.h>


main()
{
	char name[20];
	int age; 
	
	printf("enter name => ");
	scanf("%s", &name);
	printf("Enter age =>  ");
	scanf("%d" ,age);
	printf("--------------------------------------------\n\n");
	printf("Hello!! My name is %s. \nI/'m %d years old. \n",name, age);
}
