/*
student id : 66040233122
student name : Paniti Jahem
*/

#include <stdio.h>

main() {
    char roomType, physicalTherapy, specialNurse;
    int numberOfDays;
    float roomRate, physicalTherapyRate, specialNurseRate, roomPrice, physicalTherapyPrice, specialNursePrice, totalPrice;

    printf("***** ABC Hospital *****\n\n");
    printf("Select room type\n");
    printf("\t P: Private room\t1500 baht / day\n");
    printf("\t S: Semi-Private room\t1000 baht / day\n");
    printf("\t W: Ward\t\t700 baht / day\n\n");

    printf("Enter room type (P/S/W) ==> ");
    scanf(" %c", &roomType);

    if (roomType == 'P' || roomType == 'p') {
        roomRate = 1500.00;
    } else if (roomType == 'S' || roomType == 's') {
        roomRate = 1000.00;
    } else if (roomType == 'W' || roomType == 'w') {
        roomRate = 700.00;
    } else {
        printf("Invalid room type!\n");
        return 1;
    }

    printf("Physical therapy ==> ");
    scanf(" %c", &physicalTherapy);

    if (physicalTherapy == 'Y' || physicalTherapy == 'y') {
        physicalTherapyRate = 0.00;
    } else {
        physicalTherapyRate = 0.00;
    }

    printf("Special nurse service? (Y/N) ==> ");
    scanf(" %c", &specialNurse);

    if (specialNurse == 'Y' || specialNurse == 'y') {
        specialNurseRate = 800.00;
    } else {
        specialNurseRate = 0.00;
    }

    printf("Enter number of days ==> ");
    scanf("%d", &numberOfDays);

    roomPrice = roomRate * numberOfDays;
    physicalTherapyPrice = physicalTherapyRate * numberOfDays;
    specialNursePrice = specialNurseRate * numberOfDays;
    totalPrice = roomPrice + physicalTherapyPrice + specialNursePrice;

    printf("\n*************************** Hospital service bill ************************************* \n\n");
    printf("------------------------------------------------------------------------------------------\n");
    printf("| %-3s | %-30s | %-20s | %-8s | %-10s |\n", 
			  "No.", "List", "Price/Unit", "Num day", "Sumprice");
	printf("-------------------------------------------------------------------------------------------\n");
    printf("| %-3d | %-30s | %-20.2f | %-8d | %-10.2f |\n", 1, "Private room service", roomRate, numberOfDays, roomPrice);
    printf("| %-3d | %-30s | %-20.2f | %-8d | %-10.2f |\n", 2, "Physical therapy", physicalTherapyRate, numberOfDays, physicalTherapyPrice);
    printf("| %-3d | %-30s | %-20.2f | %-8d | %-10.2f |\n", 3, "Special nurse service", specialNurseRate, numberOfDays, specialNursePrice);
    printf("-------------------------------------------------------------------------------------------\n");
    printf("| %60s | %20.2f |\n","Total price", totalPrice);
    printf("------------------------------------------------------------------------------------------\n\n\n");
}

