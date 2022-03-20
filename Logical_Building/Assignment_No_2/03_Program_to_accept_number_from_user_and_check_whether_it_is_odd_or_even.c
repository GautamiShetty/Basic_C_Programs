#include<stdio.h>

void check_even_odd (int inum);

int main()
{
    int inum1 = 0;
    printf("\nEnter the number: ");
    scanf("%d",&inum1);

    check_even_odd(inum1);

    printf("\nThanks for visiting.");    
    return 0;
}

void check_even_odd (int ino)
{
    if(ino == 0)
    {
        printf("\n %d is neither even nor odd number.",ino);
    }
    else if((ino % 2 == 1)|| (ino % 2 == -1))
    {
        printf("\n%d is an odd number.",ino);
    }
    else if((ino % 2 == 0))
    {
        printf("\n%d is an even number.",ino);
    }
}