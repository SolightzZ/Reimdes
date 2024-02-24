/*
student id: 66040233122
steudent name: Paniti Jahem
*/

#include <stdio.h>

main()
{
    int num, odd = 0, even = 0;

    printf("********* Check odd/Even Number **********\n\n");
    printf("Enter integer number => ");
    scanf("%D", &num);

    while (num > 0)
    {
        if (num %2 == 0)
        { even = even +1; 
            }
        else        
		{ odd = odd +1; 
            }
        printf("Enter integer number => ");
        scanf("%D", &num);
    }

    printf("---------------------------------------\n");
    printf("\ttype\t\t|\tNumber\n");
    printf("---------------------------------------\n");
    printf("\tOdd nummber\t|\t%d\n", odd);
    printf("\tEved\t\t|\t%d\n", even );
}
