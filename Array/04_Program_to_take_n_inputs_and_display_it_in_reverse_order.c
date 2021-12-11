#include<stdio.h>
#include<conio.h>
int main()
{
    int n = 0, i = 0, num[20]={};
    printf("\nEnter the number of elements to store in array: ");
    scanf("%d",&n);

    printf("\nEnter the numbers:\n");

    for(i = 0; i < n; i++)
    {
        printf("\nNumber %d : ",(i + 1));
        scanf("%d",&num[i]);
    }
    
    printf("\nYour reverse number is ");

    for(i = 1; i <= n; i++)
    {
        printf("Number %d : %d\n",(i + 1),num[n - i]);
    }

    printf("Thanks for visiting");
    getch();
    return 0;
}