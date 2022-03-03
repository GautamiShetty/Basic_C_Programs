#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{
    struct marks
    {
        int phy, math, chem, total;        
    };
    struct marks stud1, stud2, stud3;

    printf("\n\nEnter marks of Roll no 101 => ");

    printf("\n\nEnter the physics marks : ");
    scanf("%d",&stud1.phy);

    printf("\nEnter the maths marks : ");
    scanf("%d",&stud1.math);

    printf("\nEnter the chemistry marks : ");
    scanf("%d",&stud1.chem);

    stud1.total = stud1.phy + stud1.chem + stud1.math;

    printf("\n\nEnter marks of Roll no 102 => ");

    printf("\n\nEnter the Physics marks : ");
    scanf("%d",&stud2.phy);

    printf("\nEnter the Maths marks : ");
    scanf("%d",&stud2.math);

    printf("\nEnter the Chemistry marks : ");
    scanf("%d",&stud2.chem);

    stud2.total = stud2.phy + stud2.chem + stud2.math;

    printf("\n\nEnter marks of Roll no 103 => ");

    printf("\n\nEnter the physics marks : ");
    scanf("%d",&stud3.phy);

    printf("\nEnter the maths marks : ");
    scanf("%d",&stud3.math);

    printf("\nEnter the chemistry marks : ");
    scanf("%d",&stud3.chem);

    stud3.total = stud3.phy + stud3.chem + stud3.math;

    printf("\nClick any key to proceed...");

    system("CLS");

    printf("\n\nStudent details are as follows => ");

    printf("\n=====================================================================\n");

    printf("\nRoll no : 101 \n");
    printf("\n    SUBJECT                   MARKS OBTAINED");
    printf("\n    Physics                          %d       ",stud1.phy);
    printf("\n    Mathematics                      %d       ",stud1.math);
    printf("\n    Chemistry                        %d       ",stud1.chem);
    printf("\n                         TOTAL   =   %d       ",stud1.total);

    printf("\n=====================================================================\n");

    printf("\nRoll no : 102 \n");
    printf("\n    SUBJECT                   MARKS OBTAINED");
    printf("\n    Physics                          %d       ",stud2.phy);
    printf("\n    Mathematics                      %d       ",stud2.math);
    printf("\n    Chemistry                        %d       ",stud2.chem);
    printf("\n                         TOTAL   =   %d       ",stud2.total); 

    printf("\n=====================================================================\n");

    printf("\nRoll no : 103 \n");
    printf("\n    SUBJECT                   MARKS OBTAINED");
    printf("\n    Physics                          %d       ",stud3.phy);
    printf("\n    Mathematics                      %d       ",stud3.math);
    printf("\n    Chemistry                        %d       ",stud3.chem);
    printf("\n                         TOTAL   =   %d       ",stud3.total);

    printf("\n=====================================================================");

    getch();
    return 0;
}