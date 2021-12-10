#include<stdio.h>
#include<conio.h>
#define size 3
int main()
{
    int num[size] = {}, max = 0;
    printf("\nEnter the %d numbers to find the maximum number among them:",size);

    for(int i = 0; i < size; i++)
    {
        printf("\nNumber %d:",i +1);
        scanf("%d",&num[i]);
    }

    for(int i = 0; i < size; i++)
    {
        num[0] = max;
        if(num[i]>max)
        {
            max = num[i];
        }
    }

    printf("\nThe maximum number between these %d numbers is %d",size,max);
    printf("\nThanks for visiting");

    getch();
    return 0;
}