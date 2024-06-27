/*
student id : 66040233122
student name : Paniti Jahem
*/

#include <stdio.h>

main() {
    char mealCode[3];
    int adultCustomers, childCustomers;

    printf("\n*** Ballroom Reservation **\n\n");

    printf("Select meal...\n");
    printf("\t m1: Deluxe meal (450 baht/person)\n");
    printf("\t m2: Standard meal (250 baht/person)\n");

    printf("\nEnter meal code (m1/m2) ==> ");
    scanf("%s", mealCode);

    printf("Enter number of adult customers ==> ");
    scanf("%d", &adultCustomers);

    printf("Enter number of child customers ==> ");
    scanf("%d", &childCustomers);

    float adultMealPrice, childMealPrice;
    if (mealCode[0] == 'm' && mealCode[1] == '1') {
        adultMealPrice = 450.0;
    } else if (mealCode[0] == 'm' && mealCode[1] == '2') {
        adultMealPrice = 250.0;
    } else {
        printf("Invalid meal code. Exiting program.\n");
        return 1;
    }

    childMealPrice = 0.6 * adultMealPrice;

    float roomPrice;
    if (adultCustomers + childCustomers <= 100) {
        roomPrice = 2000.0;
    } else if (adultCustomers + childCustomers <= 300) {
        roomPrice = 3000.0;
    } else if (adultCustomers + childCustomers <= 1000) {
        roomPrice = 4000.0;
    } else {
        roomPrice = 5000.0;
    }

    float totalAdultMealPrice = adultMealPrice * adultCustomers;
    float totalChildMealPrice = childMealPrice * childCustomers;
    float totalPrice = roomPrice + totalAdultMealPrice + totalChildMealPrice;

    printf("\n------ Ballroom reservation Report  -------------\n\n");
    printf("Room code : %c\n", roomPrice == 2000.0 ? 'A' : (roomPrice == 3000.0 ? 'B' : (roomPrice == 4000.0 ? 'C' : 'D')));
    printf("Meal type : %s meal\n", mealCode[0] == 'm' && mealCode[1] == '1' ? "Deluxe" : "Standard");
    printf("\n------------------------------------------------------------------------\n");
    printf("List\t\t|  Price\t|  Number\t|  Total\n");
    printf("------------------------------------------------------------------------\n");
    printf("Room price \t| %.2f\t\t| \t\t| %.2f\n", roomPrice, roomPrice);
    printf("Adult meal price| %.2f\t\t| %d\t\t| %.2f\n", adultMealPrice, adultCustomers, totalAdultMealPrice);
    printf("Child meal price| %.2f\t\t| %d\t\t| %.2f\n", childMealPrice, childCustomers, totalChildMealPrice);
    printf("\nTotal price\t| \t\t\t\t\t %.2f\n", totalPrice);
    printf("----------------------- END --------------------------------------------\n\n");
}

