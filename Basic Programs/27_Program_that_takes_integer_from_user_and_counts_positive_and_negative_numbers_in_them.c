#include<stdio.h>
#include<conio.h>
int main()
{
    int num[5] = {0}, i = 0,p = 0, n = 0;
    printf("\nEnter the numbers : ");
    for(i = 0; i < 5; i++)
    {
        printf("\nNumber %d : ",i+1);
        scanf("%d",&num[i]);

        if(num[i]>0)
        {
            ++p;
        }
        else{
            ++n;
        }
    }
    printf("\n*********************************\n");
    printf("\nNumber of positive numbers are %d\nNumber of negative numbers are %d\n", p, n);
    printf("\n*********************************\n");
    printf("\nThanks for visiting");

    getch();
    return 0;
}
