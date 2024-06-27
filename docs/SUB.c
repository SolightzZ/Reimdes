/*
student id: 66040233122
student name: Paniti JAhem
*/

#include <stdio.h>

main(){
	
	char subject_name[20];
	char grade;
  	int subject_id;
  	float credit, total_credit, gpa;
	
	printf("\n");
	printf("			+++++++++++++   IT Subject List   +++++++++++++\n\n");
	printf("------------------------------------------------------------------------------\n");
	printf("Subject ID		Subject Name       				Credit\n");
	printf("------------------------------------------------------------------------------\n");
	printf("	1		Introduction to Information Technology\t\t3\n");		
	printf("	2		Comper programming\t\t\t\t3\n");							
	printf("	3		Networking\t\t\t\t\t3\n");									
	printf("	4		Database System\t\t\t\t\t3\n");							
	printf("	5		Data Structure\t\t\t\t\t3\n");								
	printf("	6		Ethics for IT Profession\t\t\t1\n");					
	printf("	7		Senior Project\t\t\t\t\t4\n");								
	printf("	0		++++++++++++++	Stop program +++++++\n");
	printf("------------------------------------------------------------------------------\n\n");
	
	printf("Enter student name ==> ");
    scanf("%s", subject_name);
    
 do {
    printf("Enter subject ID (1-7) ==> ");
    scanf("%d", &subject_id);

    if (subject_id >= 1 && subject_id <= 7) {
      switch (subject_id) {
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
          credit = 3;
          break;
        case 6:
          credit = 1;
          break;
        case 7:
          credit = 4;
          break;
        default:
          printf("++++++ Invalid subject ID!!! ++++++\n");
          printf("--------------------------------");
          continue; 
      		}
		}else {
			printf("--------------------------------\n");
			printf("+++ Invalid subject ID!!! ++++\n");
			printf("--------------------------------\n");
		}
		
	do {
		printf("Enter grade (A/B/C/D/F) ==> ");
        scanf(" %c", &grade);
	}while (grade != 'A' && grade != 'B' && grade != 'C' && grade != 'D' && grade != 'F');
	
	switch (grade) {
        case 'A':
          grade = 4.0;
          break;
        case 'B':
          grade = 3.0;
          break;
        case 'C':
          grade = 2.0;
          break;
        case 'D':
          grade = 1.0;
          break;
        default:
          grade = 0.0;
        	printf("+++ Invalid subject ID!!! ++++\n");
			printf("--------------------------------\n");
          continue; 
	} while (subject_id != 0);
	
	total_credit += credit;
    gpa = total_credit / grade;
	printf("GPA %d: %.2f\n", subject_id, gpa);

}
