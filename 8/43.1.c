#include <stdio.h>

main(){
    int score[5] = {75, 80, 55, 60, 64};
    int num[3][4] = {{45,60,75,30}, {55, 63,88,76}, {67,89,70,43}};  //row{}  {{column}} 0 1 2 3
    int i, j;
    	
    for(i=0; i<3; i++){
		for(j=0; j<4; j++){
			printf("%5d [%d,%d]  |", num[i][j],i,j);
		}   	
		printf("\n");
	}
    	
    /*for(i=0; i<5; i++){
        printf("score no.%d : %d\n", i+1, score[i]);
    }*/
    

}
