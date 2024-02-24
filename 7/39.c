/*
student id: 66040233122
student name: Paniti JAhem
*/

#include <stdio.h>
#include <string.h>

main(){
    char username[15], password[15];

   printf("************ User Authentication system ************\n");

    printf("Enter Username: ");
    scanf("%s", username);
    printf("Enter Password: ");
    scanf("%s", password);

    while ((strcmp(username, "Rewadee") != 0) || (strcmp(password, "12345") != 0)) {
        printf("++++ Access Denied!!! ++++\n");
        printf("---------------------------\n\n");
        printf("Enter Username: ");
        scanf("%s", username);
        printf("Enter Password: ");
        scanf("%s", password);
    }

        printf("\n******************************************\n");
        printf("*                                        *\n");
        printf("*       Welcome to system                *\n");
        printf("*                                        *\n");
        printf("******************************************\n\n\n");
    
    
}
