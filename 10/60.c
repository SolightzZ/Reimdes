/*
student id: 66040233122
student name: Paniti JAhem
*/

#include <stdio.h>
#include <stdlib.h>

main() {
	
	char ch;
    FILE *fp;  
    
	fp = fopen ("D:\\Code\\10\\data.txt", "r");
    if(fp == NULL) 
	{
        printf("Error!!! File is not exit...\n");
        exit(1); // exit progem
    }
    printf("Data from file...\n\n\n");
    while(!feof(fp)){
    	ch = fgetc(fp);
    	printf("%c", ch);
	}
	printf("\n-----------------------------------\n\n");
}

