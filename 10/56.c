/*
student id: 66040233122
student name: Paniti JAhem
*/

#include <stdio.h>

typedef struct{
	int date, moth, year;
} Date;

typedef struct {
	int id;
	char name[50];
	float salary;
	char email[60];
	Date birthdate;
} Person;

void Test1(){
	
}

main(){
	Person p1, p2;
	Person p3 = {100, "Rewdee", 50000.00, "Reeadee.ppsn@gmail.com", {10,10,2000}};
	
	printf("-------------------------\n");
	printf("Input personal data\n");
	printf("\tID ==> "); scanf("%d", &p3.id);
	printf("\tName ==> "); scanf("%s", &p3.name);
	printf("\tSalary ==> "); scanf("%f", &p3.salary);
	printf("\tEmail ==> "); scanf("%s", &p3.email);
	printf("\tbirthdate (dd mm yy) ==> "); scanf("%d %d %d",&p3.birthdate.date, &p3.birthdate.moth, &p3.birthdate.year);
	printf("-------------------------\n\n");
	
	printf("Persson data....\n");
	printf("ID     		: %d\n",p3.id);
	printf("Name		: %s\n",p3.name);
	printf("Salary 		: %.2f\n", p3.salary);
	printf("Email		: %s\n",p3.email);
	printf("birthdate	: %d/%d/%d\n",p3.birthdate.date, p3.birthdate.moth, p3.birthdate.year);
	
}
