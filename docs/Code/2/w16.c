/*
student id : 66040233122
student name : Paniti Jahem
*/

#include <stdio.h>

main() 
{
    float w, l, r, dlameter, rec_area, space_area, circle_area;
    int numCW, numCL, num_clrcle;

    printf("+++++ Calculate area +++++\n\n");
    printf("Enter width(W) of rectangle ==> ");
    scanf("%f", &w);
    printf("Enter length(L) of rectangle ==> ");
    scanf("%f", &l);
    printf("Enter Radius(R) of circle ==> ");
    scanf("%f", &r);

    dlameter = 2 * r;
    numCW = w / dlameter;
    numCL = l / dlameter;
    num_clrcle = numCW * numCL;
    rec_area = w * l;
    circle_area = (3.14 * r * r) * num_clrcle;
    space_area = rec_area - circle_area;

    printf("--------------------------------\n");
    printf("%-30s : %d\n", "Number of all circles", num_clrcle);
    printf("%-30s : %.2f\n", "Space area inside rectangle", space_area);


}

