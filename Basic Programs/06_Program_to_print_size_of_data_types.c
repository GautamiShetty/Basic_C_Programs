//Program to find size of data types and variable
#include <stdio.h>
#include <conio.h>
int main()
{
    char name[] = "Namya";
    printf("The size of char is %d\n", sizeof(char));
    printf("The size of int is %d\n", sizeof(int));
    printf("The size of float is %d\n", sizeof(float));
    printf("The size of double is %d\n", sizeof(double));
    printf("The size of Namya is %d\n", sizeof(name));

    getch();
    return 0;
}