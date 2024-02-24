/*
student id: 66040233122
student name: Paniti JAhem
*/

#include <stdio.h>
#include <string.h>

typedef struct {
    int date, month, year;
} Date;

typedef struct {
    int id;
    char name[50];
    Date birthdate;
} Person;

main() {
    int i;

    Person p[3];  
	
	printf("\n\tPerson Data...\n");
	
    // Person entry
    for (i = 0; i < 3; i++) {
        printf("\t-------------------------------------\n");
        printf("\tEnter Person ID ==> ");		scanf("%d", &p[i].id);
        printf("\tEnter Person Name ==> ");	scanf("%s", p[i].name);
        printf("\tEnter Person Birthdate (dd mm yy) ==> ");
        scanf("%d %d %d", &p[i].birthdate.date, &p[i].birthdate.month, &p[i].birthdate.year);
    }

	printf("\n\t-------------------------------------\n");
	printf("\tID	   Name	       Birthdate\n");
	printf("\t-------------------------------------\n");
    // Display
    for (i = 0; i < 3; i++) {
        printf("\t%d", p[i].id);
        printf("\t %s", p[i].name);
        printf("\t%d/%d/%d\n", p[i].birthdate.date, p[i].birthdate.month, p[i].birthdate.year);
    }

    printf("\t-------------------------------------\n");
}

