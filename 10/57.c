/*
student id: 66040233122
student name: Paniti JAhem
*/

#include <stdio.h>
#include <string.h>

typedef struct{
	char name[50];
	float gpa;
} student;

main(){
	student std[3];
	
	//	std[0].name == "Rewadee"
	strcpy(std[0].name, "Rewadee");
	std[0].gpa = 3.50;
	
	printf("Enter Student Name ==> ",std[1].name );
	scanf("%s", &std[1].name);
	printf("Enter Student Gpa ==> ", std[1].gpa);
	scanf("%f", &std[1].gpa);
	
	// Display
}
