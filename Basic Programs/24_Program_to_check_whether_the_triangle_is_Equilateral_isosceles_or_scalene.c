#include<stdio.h>
#include<conio.h>
int main()
{
    int isides[3] = {};
    int i = 0;
    printf("\nEnter three sides: ");
    for ( i = 0; i < 3; i++)
    {
        printf("\nSide %d : ",(i + 1));
        scanf("%d",&isides[i]);
    }
                      
    if(isides[0] == isides[1] == isides[2])
    {
        printf("Its an equilateral triangle");
    }
    else if((isides[0] == isides[1])||(isides[1] == isides[2])||(isides[0] == isides[2]))
    {
        printf("Its an isosceles triangle");
    }
    else if(isides[0] != isides[1] != isides[2])
    {
        printf("Its an scalene triangle");
    }
    else
    {
        printf("Its not a triangle");
    }

    getch();
    return 0;
}