/*
student id: 66040233122
student name: Paniti JAhem
*/

#include <stdio.h>

main() {
	
	char ch;
    FILE *fp;  
    
	fp = fopen ("D:\\Code\\10\\data.txt", " w");
    if(fp == NULL) 
	{
        printf("Error!!! File is not exit......\n");
        exit(1);
    }
 	do {
        printf("Enter character (enter X to stop) => ");
        scanf(" %c", &ch);

        if (ch != 'X') {
            fputc(ch, fp);
        }
    } while (ch != 'X');
	fclose(fp);
}

