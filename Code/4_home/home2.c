/*
student id : 66040233122
student name : Paniti Jahem
*/


#include <stdio.h>

main() {
    // แสดงเมนูสภาพอากาศ
    printf("	Select weather.....\n");
    printf("	1 : Rainy\n");
    printf("	2 : Sunny\n");
    printf("	3 : Snowy\n\n");
    printf("	---------------\n\n");

    // รับข้อมูลจากผู้ใช้
    int weather, age;
    printf("	Enter weather number => ");
    scanf("%d", &weather);

    // ตรวจสอบสภาพอากาศและรับข้อมูลอายุ
    switch (weather) {
        case 1:
            printf("	Enter age(yr.) => ");
            scanf("%d", &age);

            // ตรวจสอบอายุและแนะนำกิจกรรม
            if (age >= 20 && age <= 60) {
                printf("	Please take an umbrella when go to work.\n");
            } else {
                printf("	Take care of you.\n");
            }
            break;

        case 2:
            printf("	Enter age(yr.) => ");
            scanf("%d", &age);

            // ตรวจสอบอายุและแนะนำกิจกรรม
            if (age < 18) {
                printf("	Enjoy swimming.\n");
            } else if (age >= 18 && age <= 25) {
                printf("	Let's playing beach volleyball.\n");
            } else {
                printf("	Enjoy laying under the sun.\n");
            }
            break;

        case 3:
            printf("	Enter age(yr.) => ");
            scanf("%d", &age);

            // ตรวจสอบอายุและแนะนำกิจกรรม
            if (age < 16) {
                printf("	Let's make a snowman.\n");
            } else if (age >= 16 && age <= 45) {
                printf("	Let's clean snow on the road.\n");
            } else {
                printf("	Let's watching snow fall beside the window.\n");
            }
            break;

        default:
            printf("	Invalid weather number.\n");
            break;
    }
}

