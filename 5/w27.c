/*
student id : 66040233122
student name : Paniti Jahem
*/

#include <stdio.h>

main() {
    char sex;
    float weight, height, rate, bmr, tdee;
    int age, activity;

    printf("******** TDEE Calculator **************\n\n");

    printf("Enter gender (M/F) ==> ");
    scanf(" %c", &sex);

    printf("Enter age (yr.) ==> ");
    scanf("%d", &age);

    printf("Enter weight (kg.) ==> ");
    scanf("%f", &weight);

    printf("Enter Height (cm.) ==>");
    scanf("%f", &height);

    if (sex == 'M' || sex == 'm')
        bmr = 66 + (13.7 * weight) + (5 * height) - (6.8 * age);
    else if (sex == 'F' || sex == 'f')
        bmr = 665 + (9.6 * weight) + (1.8 * height) - (4.7 * age);
    else {
        bmr = 0;
        printf("You entered an invalid gender code!!!\n");
    }

    printf("\n----------------------------------------\n");
    printf("Select daily activity...\n");
    printf("\t 1 : No exercise \n");
    printf("\t 2 : Light exercise 1-3 day/week.\n");
    printf("\t 3 : Moderate exercise 4-5 day/week.\n");
    printf("\t 4 : HEAVY exercise 6-7 day/week.\n");
    printf("\t 5 : Athlete 2x per day\n\n");

    printf("Enter activity number ==> ");
    scanf("%d", &activity);

    switch (activity) {
        case 1: rate = 1.2; break;
        case 2: rate = 1.375; break;
        case 3: rate = 1.55; break;
        case 4: rate = 1.7; break;
        case 5: rate = 1.9; break;
        default:
            rate = 0;
            printf("You entered an invalid activity\n");
    }

    tdee = bmr * rate;
    
	printf("----------------- TDEE Report ------------\n\n");
    printf("%20s : %.2f\n", "Basal Metabolic Rate (BMR)", bmr);
    printf("%20s : %.2f\n", "Total Daily Energy Expenditure (TDEE)", tdee);
    printf("\n----------------- END ------------\n\n");
}
