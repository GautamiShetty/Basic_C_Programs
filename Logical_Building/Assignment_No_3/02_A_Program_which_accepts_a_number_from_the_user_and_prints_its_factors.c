 #include<stdio.h>
 #include<conio.h>

int main()
{
    int inum = 0, i = 0;

    printf("\nEnter the number :");
    scanf("%d",&inum);

    printf("\nFactors of %d : ",inum);

    for(i = 1; i < inum/2 ; i++)
    {
        if(inum % i == 0)
        {
            printf("%d ",i);
        }
    }

    printf("\nThanks for visiting.");

    getch();
    return 0;
}