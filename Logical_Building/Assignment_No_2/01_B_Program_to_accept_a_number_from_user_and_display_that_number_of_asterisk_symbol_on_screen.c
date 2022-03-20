#include <stdio.h>
#include <conio.h>

void asterisk(int ino)
{
    int icnt = 0;
    if (ino < 0)
    {
        printf("\nInvalid number!!!");
    }

    putchar('\n');

    while (ino > icnt)
    {
        printf(" * ");
        icnt++;
    }
}

int main()
{
    int inum = 0;

    printf("\nEnter the number : ");
    scanf("%d", &inum);

    asterisk(inum);

    printf("\nThanks for visiting.");
    getch();
    return 0;
}
