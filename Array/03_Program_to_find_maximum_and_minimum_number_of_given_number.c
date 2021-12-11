#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define size 3
int main()
{
    int i = 0, max = 0, min = 0;
    int num[size] = {};
    printf("\nEnter the number to find maximum and minimum of those numbers: ");
    for(i = 0; i < size; i++)
    {
        printf("\nNumber %d:",i+1);
        scanf("%d",&num[i]); 

        if(0 == i)
        {
            max = num[0];
            min = num[0];
        }
        
        if(num[i] < min)
        {
            min = num[i];
        }

        if(num[i] > max)
        {
            max = num[i];
        }     
    }
     
    printf("Maximum number is %d.\nMinimum number is %d\n",max,min);
    printf("Thanks for visiting");
    getch();
    return 0;
}