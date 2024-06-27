/*
student id : 66040233122
student name : Paniti Jahem
*/

#include <stdio.h>


main() 
{
    int numDoll, numModel, numGame;
    float sumDoll, sumModel, sumGame, sumAll, vat, totalPrice;

    printf("*********** Toy 4 U ***\n\n");
    printf("Enter number of doll => ");
    scanf("%d", &numDoll);
    printf("Enter number of model => ");
    scanf("%d", &numModel);
    printf("Enter number of game => ");
    scanf("%d", &numGame);

    sumDoll = numDoll * 150.00;
    sumModel = numModel * 100.00;
    sumGame = numGame * 200.00;
    sumAll = sumDoll + sumModel + sumGame;
    vat = sumAll * 0.07;
    totalPrice = sumAll + vat;

    printf("\n*********** Toy 4 U Bill ***********\n\n");
    printf("Product            Price       Num       Sum\n");
    printf("--------------------------------------------\n");
    printf("Doll               150.00      %2d     %8.2f\n", numDoll, sumDoll);
    printf("Model              100.00      %2d     %8.2f\n", numModel, sumModel);
    printf("Game               200.00      %2d     %8.2f\n", numGame, sumGame);
    printf("--------------------------------------------\n");
    printf("Sum price of all:              %8.2f baht\n", sumAll);
    printf("VAT (7%%):                      %8.2f baht\n", vat);
    printf("--------------------------------------------\n");
    printf("Total price:                    %8.2f baht\n", totalPrice);
    printf("\n********* THANK YOU *********\n");

    return 0;
}

	
