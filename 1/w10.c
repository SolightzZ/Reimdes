//student id : 
//student name :

#include <stdio.h>

main()
{
   float fahrenheit, celsius = 0.0;

    // Input Fahrenheit
    printf("Enter temperature (Fahrenheit) => ");
    scanf("%f", &fahrenheit);

    // Process
    celsius=(fahrenheit-32)*5/9;

    // Output
    printf("-------------------------------------------------------------\n");
    printf("temperature of ( %.2f ) degrees Fahrengeit is ( %.2f ) degrees Celsius", fahrenheit, celsius);
}
