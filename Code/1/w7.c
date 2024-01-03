//student id : 66040233122
//student name : Paniti Jahem

#include <stdio.h>

main()
{
    float weight;
    printf("Enter weight(kg.) on Earth => ");
    scanf("%f", &weight);

    printf("\n\n********** Weight Converter **********\n\n");
    printf("------------------------------------------\n");
    printf("%-15s %10s\n", "Planet", "Weight(kg.)\n");
    printf("------------------------------------------\n");
    printf("%-15s %10.2f\n", "Earth", weight);
    printf("%-15s %10.2f\n", "Mercury", weight * 0.378);
    printf("%-15s %10.2f\n", "Venus", weight * 0.907);
    printf("%-15s %10.2f\n", "Moon", weight * 0.166);
    printf("%-15s %10.2f\n", "Mars", weight * 0.377);
    printf("%-15s %10.2f\n", "Jupiter", weight * 2.364);
    printf("%-15s %10.2f\n", "Saturn", weight * 1.064);
    printf("%-15s %10.2f\n", "Neptune", weight * 1.125);
    printf("%-15s %10.2f\n", "Pluto", weight * 0.067);
    
    return 0;
}

