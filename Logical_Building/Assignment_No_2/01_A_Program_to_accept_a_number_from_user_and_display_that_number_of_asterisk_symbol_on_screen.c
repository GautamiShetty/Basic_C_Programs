#include <stdio.h>
#include <conio.h>

void asterisk(int ino)
{
    if (ino < 0)
    {
        printf("\nInvalid number!!!");
    }

    putchar('\n');

    while (ino > 0)
    {
        printf(" * ");
        ino--;
    }
}

int main()
{

    int inum = 0;

    printf("\nEnter the number : ");
    scanf("%d", &inum);
    asterisk(inum);
    getch();
    return 0;
}
