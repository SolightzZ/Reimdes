/*
student id : 66040233122
student name : Paniti Jahem
*/

#include <stdio.h>

 main()
{
    int numAdult, numChild;
    float adultMealPrice, childMealPrice, dessertPrice, roomPrice, tipTaxRate, deposit;
    float sumAdult, sumChild, sumDessert, sumMeal;
    float tipTax, total, totalAmount;

    printf("    REWADEE Catering and Convention Services   \n\n");
    printf("Please input data for service\n\n");

    printf("Number of adult customers ==> ");
    scanf("%d", &numAdult);

    printf("Number of child customers ==> ");
    scanf("%d", &numChild);

    printf("Cost per adult meal (bath) ==> ");
    scanf("%f", &adultMealPrice);

    printf("Cost for dessert (bath) ==> ");
    scanf("%f", &dessertPrice);

    printf("Room fee (bath) ==> ");
    scanf("%f", &roomPrice);

    printf("Tip and tax rate(%%) ==> ");
    scanf("%f", &tipTaxRate);

    printf("Less deposit (bath) ==> ");
    scanf("%f", &deposit);

    printf("\n----------------------------\n\n");


	system("pause");
	system("cls");
	
    childMealPrice = adultMealPrice * 60 / 100;
    sumAdult = numAdult * adultMealPrice;
    sumChild = numChild * childMealPrice;
    sumDessert = (numAdult + numChild) * dessertPrice;
    sumMeal = sumAdult + sumChild + sumDessert;
    tipTax = sumMeal * (tipTaxRate / 100);
    total = sumMeal + tipTax + roomPrice;
    totalAmount = total - deposit;

    printf("   REWADEE Catering and Convention Services    \n\n");
    printf("%-30s%-15d\n", "Number of adults :", numAdult);
    printf("%-30s%-15d\n", "Number of children :", numChild);
    printf("%-30s%-15.2f\n", "Cost per adult without dessert :", adultMealPrice);
    printf("%-30s%-15.2f\n", "Cost per child without dessert :", childMealPrice);
    printf("%-30s%-15.2f\n", "Cost per dessert :", dessertPrice);
    printf("%-30s%-15.2f\n", "Room fee :", roomPrice);
    printf("%-30s%-15.2f\n", "Tip and tax rate :", tipTaxRate);
    printf("\n");
    printf("%-30s%-15.2f\n", "Total cost for adult meals :", sumAdult);
    printf("%-30s%-15.2f\n", "Total cost for child meals :", sumChild);
    printf("%-30s%-15.2f\n", "Total cost for dessert :", sumDessert);
    printf("%-30s%-15.2f\n", "Total food cost :", sumMeal);
    printf("%-30s%-15.2f\n", "Plus tip and tax :", tipTax);
    printf("%-30s%-15.2f\n", "Plus room fee :", roomPrice);
    printf("%-30s%-15s\n", "", "----------------");
    printf("%-30s%-15.2f\n", "Less deposit", deposit);
    printf("------------------------------\n");
    printf("%-30s%-15.2f\n", "Balance due", totalAmount);

}

