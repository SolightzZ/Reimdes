/*
student id : 66040233122
student name : Paniti Jahem
*/

#include <stdio.h>
#include <string.h>

main(){
	  int dayNo;
    char dayName[15];

    printf("Enter day number of weekday (1-7) => ");
    scanf("%d", &dayNo);

    if (dayNo == 1)
        strcpy(dayName, "Monday");
    else if (dayNo == 2)
        strcpy(dayName, "Tuesday");
    else if (dayNo == 3)
        strcpy(dayName, "Wednesday");
    else if (dayNo == 4)
        strcpy(dayName, "Thursday");
    else if (dayNo == 5)
        strcpy(dayName, "Friday");
    else if (dayNo == 6)
        strcpy(dayName, "Saturday");
    else if (dayNo == 7)
        strcpy(dayName, "Sunday");
    else
        strcpy(dayName, "Invalid day no.!");

    printf("----------------------------------\n");
    printf("Day no. %d is %s.\n", dayNo, dayName);
}
