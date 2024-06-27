#include <stdio.h>

int main(void) {
    char subject_name[20];
    char grade;
    int subject_id;
    float credit, total_credit = 0, gpa = 0, grade_value = 0;

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

    printf("Enter subject name ==> ");
    scanf("%s", subject_name);

    while (1) {
        printf("Enter subject ID  ==> ");
        scanf("%d", &subject_id);

        if (subject_id == 0) {
            break;  
        }

        if (subject_id >= 1 && subject_id <= 7) {k
            if (subject_id >= 1 && subject_id <= 5) {
                credit = 3;
            } else if (subject_id == 6) {
                credit = 1;
            } else if (subject_id == 7) {
                credit = 4;
            }

            while (1) {
                printf("Enter grade (A/B/C/D/F) ==> ");
                scanf(" %c", &grade);

                if (grade == 'A' || grade == 'B' || grade == 'C' || grade == 'D' || grade == 'F') {
                    switch (grade) {
                        case 'A':
                            grade_value = 4.0;
                            break;
                        case 'B':
                            grade_value = 3.0;
                            break;
                        case 'C':
                            grade_value = 2.0;
                            break;
                        case 'D':
                            grade_value = 1.0;
                            break;
                        default:
                            grade_value = 0.0;
                            break;
                    }
                    break; 
                } else {
                    printf("\n+++++ Invalid grade! +++++\n");
                    printf("------------------------------------\n");
                }
            }

            total_credit += credit;
            gpa += credit * grade_value;
        } else {
            printf("+++++ Invalid subject ID!!! +++++\n");
            printf("-------------------------------------------\n");
        }
    }

    if (total_credit > 0) {
        gpa = gpa / total_credit;
        printf("---------------------------\n\n");
        printf("GPA: %.2f\n", gpa);
        printf("Number of all Credit: %.2f\n", total_credit);
        printf("\n********* Thank You ************\n");
    } else {
        printf("\n********* Thank You ************\n");
    }
}

