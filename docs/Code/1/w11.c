//student id : 66040233122
//student name : Paniti Jahem

#include <stdio.h>
#include <math.h>

main()
{
	double w, cm_h, m_h, bmi;
	
	printf("Enter wight(kg.) => "); scanf("%lf", &w);
	printf("Enter haigh(cm.) => "); scanf("%lf", &cm_h);
	
	m_h = cm_h/100;
	bmi = w / pow(m_h,2);
	
	printf("\n++++++++++++++++++++\n\n");
	printf("Body mass Index(BMI) : %.2lf \n\n",bmi);
	
}
