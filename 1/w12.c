//student id : 66040233122
//student name : Paniti Jahem

#include <stdio.h>

main() 
{
    char phone[10];
    float minutes, rate, payment, subtotal, vat, total, change;

    // Input
    printf("Enter phone number => ");
    scanf("%s", phone);

    printf("Enter number of minute to call(min.) => ");
    scanf("%f", &minutes);

    printf("Enter call rate(bath/min.) => ");
    scanf("%f", &rate);

    // Calculate
    subtotal = minutes * rate;
    vat = subtotal * 0.07;
    total = subtotal + vat;

    // Display
    printf("\n-------------------------------------------\n\n");
    printf(" ********** AIS Mobile Service ***************\n");
    printf("%-30s : %15s\n", "Phone no.", phone);
    printf("%-30s : %15.2f min.\n", "Number of call", minutes);
    printf("%-30s : %15.2f bath/min.\n", "Call rate", rate);
    printf("\n--------------------------------------------\n\n");
    printf("%-30s : %15.2f bath\n", "Subtotal", subtotal);
    printf("%-30s : %15.2f bath\n", "VAT(7%)", vat);
    printf("%-30s : %15.2f bath\n", "Total", total);
    printf("\n--------------------------------------------\n\n");

    // Input payment
    printf("Enter amount of payment(bath) => ");
    scanf("%f", &payment);
    change = payment - total;
    printf("%-30s : %15.2f bath\n", "Change", change);

    // Display change
    printf("****** Thank You *******\n");

}

