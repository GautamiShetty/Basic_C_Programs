#include <stdio.h>
void check_prime(int);

int main()
{
    int inum = 0;
    printf("Enter the number: ");
    scanf("%d", &inum);

    check_prime(inum);
    return 0;
}

void check_prime(int ino)
{
    int i = 0;
    for (i = 2; i <= ino / 2; i++)
    {
        if (ino % i == 0)
        {
            break;
        }
    }

    if (i > (ino / 2))
    {
        printf("\n%d is Prime Number", ino);
    }
    else
    {
        printf("\n%d is not a Prime Number", ino);
    }
    printf("\nThanks for visiting ");
}