#include<stdio.h>
#include<conio.h>
int main()
{
    int s_No = 0, e_No = 0;
    printf("For your range enter the starting number: \n");
    scanf("%d",&s_No);
    printf("Enter the ending number: \n");
    scanf("%d",&e_No);

    while(s_No < e_No)
    {
        printf("%4d = %4d\n", s_No, s_No * s_No);
        s_No++;
    }
    
    while(s_No >= e_No)
    {
        printf("%4d = %4d\n", e_No, e_No * e_No);
        e_No++;
    }

    printf("Thanks for visiting");
 
    getch();
    return 0;
}