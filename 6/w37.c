/*
student id : 66040233122
student name : Paniti Jahem

*/
#include <stdio.h>
main(){
	int num;
	char b_name[30];
	
	printf("\n\t\Programing Language Course\n\n");
	printf("----------------------------------------------\n");
	printf("\t1\t:\tJAVA Programing\n");
	printf("\t2\t:\tPYTHON Programing\n");
	printf("\t3\t:\tPHP Programing\n");
	printf("\t4\t:\tC Programing\n");
	printf("---------------------------------------------\n\n");
	
	printf("\tEnter menu Choice(1-4) => ");
	scanf("%d", &num);
	while(num<1 || num>4){
		printf("\t--- Invalid menu chice!!! ---\n");
		printf("\t------------------------------\n");
		printf("\tEnter menu Choice(1-4) => ");
		scanf("%d", &num);
	}
	 switch (num) {
        case 1: strcpy(b_name, "JAVA Programing"); break;
        case 2: strcpy(b_name, "PYTHON Programing"); break;
        case 3: strcpy(b_name, "PHP Programing");break;
        case 4: strcpy(b_name, "C Programming"); break;
       
     } default: printf("--- Invalid menu chice!!! ---\n");
    printf("\n\t***********************************\n\n");
	printf("\tYour course is : %s", b_name);
	printf("\n\n\t******** Thank Tou ********\n\n");
}
