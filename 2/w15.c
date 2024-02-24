/*
student id : 66040233122
student name : Paniti Jahem
*/

#include <stdio.h>
#define INTEREST 0.03
// const float INTEREST 0.03 
main()
{
	float car_price, down_rate, down_payment, loan, monthly_payment;
	int num_year, num_month;
	
	printf("Enter car price	==> ");
	scanf("%f", &car_price);
	printf("Enter percentage of doun payment ==> ");
	scanf("%f", &down_rate);
	printf("Enter number of year to payment  ==> ");
	scanf("%d", &num_year);
	printf("******************************************\n\n");
	
	down_payment = car_price * (down_rate / 100);
	loan = car_price - down_payment;
	num_month = num_year * 12;
	monthly_payment = (loan * INTEREST * num_year + loan ) / num_month;
	
	printf("***************ABC Auto Group*************\n\n");
	printf("++++++++++ ABC Auto Group INvoice +++++++++\n\n");
	printf("-------------------------------------------\n");
	printf("%-20s %-10s\n", "List", "Amount(bath)");
	printf("-------------------------------------------\n");
	printf("%-20s %-10.2f\n", "Car price", car_price);
	printf("%-20s %-10.2f\n", "Down payment(20%)", down_payment);
	printf("%-20s %-10.2f\n", "Loan balance", loan);
	printf("-------------------------------------------\n");
	printf("%-20s %-10.2f", "patment/month", monthly_payment);
	
}
