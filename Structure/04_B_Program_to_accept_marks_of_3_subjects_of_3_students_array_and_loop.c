#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{
    struct subjects
    {
        int math, chem, phy, total;
    };
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

    for(i = 0; i < 3; i++)
    {
        printf("\nStudent ID (0000%d) obtained marks : ", i + 1);

        printf("\n      SUBJECT                          MARKS OBTAINED");
        printf("\n    Physics                                  %d       ",stud[i].phy);
        printf("\n    Mathematics                              %d       ",stud[i].math);
        printf("\n    Chemistry                                %d       ",stud[i].chem);
        printf("\n                            TOTAL   =        %d       ",stud[i].total);  
       
    }

    printf("\nThanks for visiting.");
    
    getch();
    return 0;
}