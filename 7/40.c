/*
student id: 66040233122
student name: Paniti JAhem
*/

#include <stdio.h>

main(){
 int fday, nday, i;

    printf("Enter fire of week(1:sun->:7Sat) => ");
    scanf("%d", &fday);

    printf("Enter number of days in this month => ");
    scanf("%d", &nday);

    printf("\n\n");
    printf("----------------------------------------\n");
    printf("Sun   Mon   Tue   Wed   Thu   Fri   Sat\n");
    printf("---------------------------------------\n");

    for (i = 1; i < fday; i++) {
        printf("      ");
    }
    
    for (i = 1; i <= nday; i++) {
        printf("%3d", i);

        if ((i + fday - 1) % 7 == 0 || i == nday) {
            printf("\n");
        } else {
            printf("   ");
        }
    }
}
