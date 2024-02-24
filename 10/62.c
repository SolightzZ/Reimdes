//student name : Paniti Jahem
//studen ID : 66040233122

#include <stdio.h>
#include <stdlib.h>

typedef struct employee {
    int id;
    char name[20];
    char gender;
    float salary;
} employee;

void menu() {
    printf("+++++++ Employee data management +++++++ \n");
    printf("-----------------------------------------\n");
    printf(" 1 : Show employee data. \n");
    printf(" 2 : Add employee data. \n");
    printf(" 0 : Exit program. \n");
    printf("-----------------------------------------\n");
}

void showemployee() {
    employee emp;
    FILE *fp;

    fp = fopen("D:\\Code\\10\\data.txt", "r");
    if (fp == NULL) {
        printf("Error!!! cannot open file...\n");
        return;
    }

    printf("          +++++++ Employee data +++++++\n\n");
    printf("--------------------------------------------------------\n");
    printf("%5s  %-20s  %-5s  %10s\n", "ID", "Name", "Gender", "Salary");
    printf("--------------------------------------------------------\n");
    while (fscanf(fp, "%d %s %c %f", &emp.id, emp.name, &emp.gender, &emp.salary) != EOF) {
        printf("%5d  %-20s  %-5c  %10.2f\n", emp.id, emp.name, emp.gender, emp.salary);
    }
    printf("--------------------------------------------------------\n");
    fclose(fp);
}

void addemployee() {
    employee emp;
    FILE *fp;
    char loop;

    fp = fopen("D:\\Code\\10\\data.txt", "a");
    if (fp == NULL) {
        printf("Error!!! cannot open file...\n");
        return;
    }
    do {
        system("cls");
        printf("Enter employee data...\n");
        printf("\tID ==> ");
        scanf("%d", &emp.id);
        printf("\tName ==> ");
        scanf("%s", emp.name);
        printf("\tGender ==> ");
        scanf(" %c", &emp.gender);
        printf("\tSalary ==> ");
        scanf("%f", &emp.salary);

        fprintf(fp, "%d %s %c %.2f\n", emp.id, emp.name, emp.gender, emp.salary);
        fflush(fp);

        printf("\n-----------------------------------------\n\n");
        printf("Add another employee data?(Y/N) ==> ");
        scanf(" %c", &loop);
    } while (loop == 'Y' || loop == 'y');
    fclose(fp);
}

main() {
    int ch;

    do {
        system("cls");
        menu();
        printf("Enter menu choice ==> ");
        scanf("%d", &ch);

        if (ch == 1) {
            showemployee();
        } else if (ch == 2) {
            addemployee();
        } else if (ch == 0) {
            exit(0);
        } else {
            printf("Invalid menu choice!!!\n");
        }
        system("pause");
    } while (ch != 0);
}
