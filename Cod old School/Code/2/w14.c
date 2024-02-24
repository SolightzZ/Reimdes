/*
student id : 66040233122
student name : Paniti Jahem
*/

#include <stdio.h>

main()
{
	int money, balance;
	int b1000, b500, b100, b50, b20, c10, c5, c1;
	
	printf("*********** Money petty exhange program ************\n");
	printf("Enter amount of money => ");
	scanf("%d", &money);
	
 	b1000 = money / 1000;
    balance = money % 1000;
    b500 = balance / 500;
    balance %= 500;
    b100 = balance / 100;
    balance %= 100;
    b50 = balance / 50;
    balance %= 50;
    b20 = balance / 20;
    balance %= 20;
    c10 = balance / 10;
    balance %= 10;
    c5 = balance / 5;
    balance %= 5;
    c1 = balance;
	
	printf("----------------------------------------------------\n");
	printf("%-20s %15d\n", "Money", money);
	printf("%-20s %15d\n","Banknote 1000",b1000);
	printf("%-20s %15d\n","Banknote 500",b500);
	printf("%-20s %15d\n","Banknote 100",b100);
	printf("%-20s %15d\n","Banknote 50",b50);
	printf("%-20s %15d\n","Banknote 20",b20);
	printf("%-20s %15d\n","Coin 10",c10);
	printf("%-20s %15d\n","Coin 5",c5);
	printf("%-20s %15d\n","Coin 1",c1);
}
