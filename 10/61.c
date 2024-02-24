/*
student id: 66040233122
student name: Paniti JAhem
*/

#include <stdio.h>
#include <stdlib.h>

typedef struct Employee {
    int id;
    char name[20];
    char gender;
    float salary;
} Employee;

main() {
    Employee emp;
    FILE *fp;
    char loop;

    fp = fopen("D:\\Code\\10\\data.txt", "a"); 
    if (fp == NULL) {
        printf("Error!!! File is not exist...\n");
        exit(0);
    }

    do {
        system("cls"); //clear screen
        printf("Enter employee data....\n");
        printf("\tID ==> ");       scanf("%d", &emp.id);
        printf("\tName ==> ");     scanf("%s", emp.name);
        printf("\tGender ==> ");   scanf(" %c", &emp.gender); 
        printf("\tSalary ==> ");   scanf("%f", &emp.salary);

        fprintf(fp, "%d %s %c %.2f\n", emp.id, emp.name, emp.gender, emp.salary);
        fflush(fp);

        printf("\n------------------------------------------------\n\n");
        printf("Add another employee data? (Y/N) ==> ");
        scanf(" %c", &loop); 
    } while (loop == 'Y' || loop == 'y');
    fclose(fp); 

    system("pause");
    system("cls");
    
    fp = fopen("D:\\Code\\10\\data.txt", "r"); 
    if (fp == NULL) {
        printf("Error!!! File is not exist...\n");
        exit(0);
    }

    // printf table header
    printf("        +++++++++++++++++++ Emp data ++++++++++++++\n\n");
    printf("-----------------------------------------------------------\n");
    printf("%5s %-20s %-5s %10s\n", "ID", "Name", "Gender", "Salary");
    printf("-----------------------------------------------------------\n");

    while (fscanf(fp, "%d %s %c %f", &emp.id, &emp.name, &emp.gender, &emp.salary) != EOF) {
        printf("%5d %-20s %-5c %10.2f\n", emp.id, emp.name, emp.gender, emp.salary);
    }

    printf("-------------------------------------------------------------\n\n");
    
    fclose(fp); 
}
