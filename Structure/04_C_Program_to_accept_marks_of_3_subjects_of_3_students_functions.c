#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct subjects
    {
        int math, chem, phy, total;
    };

void accept_student_details();
void display_student_details (struct subjects[]);

int main()
{

    accept_student_details();
    getch();
    return 0;
}

void accept_student_details()
{
    int i = 0;
    struct subjects stud[3];

    for(i = 0; i < 3; i++)
    {

        printf("\nEnter details of Student ID (0000%d) :\n",i +1);
        
        printf("\nEnter physics marks : ");
        scanf("%d",&stud[i].phy);

        printf("\nEnter chemistry marks : ");
        scanf("%d",&stud[i].chem);

        printf("\nEnter maths marks : ");
        scanf("%d",&stud[i].math);    
        stud[i].total = stud[i].phy + stud[i].math + stud[i].chem;
    }
    printf("\nPress any key to move forword....");
    getch();
    system("CLS");

    display_student_details(stud);
}
void display_student_details(struct subjects stud[3])
{
    int i = 0;

    for(i = 0; i < 3; i++)
    {
        printf("\nStudent ID (0000%d) obtained marks : ", i + 1);

        printf("\n      SUBJECT                          MARKS OBTAINED");
        printf("\n    Physics                                  %d       ",stud[i].phy);
        printf("\n    Mathematics                              %d       ",stud[i].math);
        printf("\n    Chemistry                                %d       ",stud[i].chem);
        printf("\n                            TOTAL   =        %d       ",stud[i].total);            
    }
}