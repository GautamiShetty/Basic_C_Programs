#include<stdio.h>
#include<conio.h>

void display()
{
    int i = 5;
    printf("\nRequired numbers are : ");
    do
    {
        printf("%d ",i);
        i--;
    } while (i>0);
    
}

int main()
{
    display();
    getch();
    return 0;
}