#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main()
{
    struct info
    {
        char name[25];
        char course[10];
        char city[15];
        int roll_no;
    };

    struct info stud_1, stud_2;

    printf("\n\nInformation of 1st student =>\n");

    printf("\nEnter Name: ");
    gets(stud_1.name);

    printf("\nEnter Roll no: ");
    scanf("%d",&stud_1.roll_no);

    fflush(stdin);

    printf("\nEnter your course:");
    scanf("%s",stud_1.course);

    printf("\nEnter your city:");
    scanf("%s",stud_1.city);

    printf("\nPress any key to enter infomation of next students inforation");
    getch();
    system("cls");
    printf("\nInformation of 2nd student =>\n");

    printf("\nEnter Name: ");
    gets(stud_2.name);

    printf("\nEnter Roll no:");
    scanf("%d",&stud_2.roll_no);

    fflush(stdin);

    printf("\nEnter your course:");
    scanf("%s",&stud_2.course);

    printf("\nEnter your city:");
    scanf("%s",&stud_2.city);

    system("cls");

    printf("\nInformation of both student are as follows =>");

    printf("\nFirst students information:\nName: %s\nRoll no: %d\nCourse: %s\nCity: %s", stud_1.name, stud_1.roll_no, stud_1.course, stud_1.city);
    printf("\nSecond students information:\nName: %s\nRoll no: %d\nCourse: %s\nCity: %s", stud_2.name, stud_2.roll_no, stud_2.course, stud_2.city);

    getch();
    return 0;
}