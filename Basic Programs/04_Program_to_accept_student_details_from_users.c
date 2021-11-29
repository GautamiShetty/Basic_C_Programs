#include<stdio.h>
#include<conio.h>
int main()
{
    char student[20];
    int roll_no = 0;
    char course [10] ;
    char city[13] ;
    printf("\n\tEnter Name(Initial name only): ");
    scanf("%s",&student);
    printf("\n\tEnter Roll no: ");
    scanf("%d",&roll_no);
    printf("\n\tEnter course: ");
    scanf("%s",&course);
    printf("\n\tEnter city: ");
    scanf("%s",&city);
    printf("\n\n___----____----____----____----____----____----____\n\n");
    printf("\tName: %s \n\tRoll no: %d \n\tCourse: %s \n\tCity: %s",student, roll_no, course, city);

    getch();
    return 0;
}