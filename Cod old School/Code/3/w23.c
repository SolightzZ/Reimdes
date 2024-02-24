/*
student id : 66040233122
student name : Paniti Jahem
*/

#include <stdio.h>
#include <string.h>

main() {
    char std_ID[13], stdName[20], grade[3];
    int mid, final, total;

    printf("Enter student ID     => "); scanf("%s", std_ID);
    printf("Enter student name   => "); scanf("%s", stdName);
    printf("Enter mid-term score => "); scanf("%d", &mid);
    printf("Enter final score    => "); scanf("%d", &final);

    total = mid + final;

    if (total >= 80)
        strcpy(grade, "A");
    else if (total >= 75)
        strcpy(grade, "B+");
    else if (total >= 70)
        strcpy(grade, "B");
    else if (total >= 65)
        strcpy(grade, "C+");
    else if (total >= 60)
        strcpy(grade, "C");
    else if (total >= 55)
        strcpy(grade, "D+");
    else if (total >= 50)
        strcpy(grade, "D");
    else
        strcpy(grade, "F");

    printf("\n\n++++ Student grade report +++++++\n\n");
    printf("Student ID      : %s\n", std_ID);
    printf("Student name    : %s\n", stdName);
    printf("Mid term score  : %d\n", mid);
    printf("Final score     : %d\n", final);
    printf("Total score     : %d\n", total);
    printf("Grade           : %s\n", grade);
    printf("+++++++++++++++++++++++++++++++++++\n");

}

