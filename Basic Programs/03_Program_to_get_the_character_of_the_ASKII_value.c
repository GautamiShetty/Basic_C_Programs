#include<stdio.h>
#include<conio.h>
int main()
{
    int num_1 = 0;
    printf("Enter the ASKII value to find its character: \n");
    scanf("%d",&num_1);

    printf("Your character for the given ASKII value is %c",num_1);
    getch();
    return 0;
}