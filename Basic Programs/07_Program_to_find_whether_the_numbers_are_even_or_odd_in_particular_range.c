//In this program you can find even and odd number in a given range
//It works for both ascending to decending and decending to ascending ways
#include<stdio.h>
#include<conio.h>
int main()
{
    int st_num = 0, st_num1 = 0, end_num = 0,end_num1=0, i = 0;
    up:
    printf("\nEnter the starting number: ");
    scanf("%d",&st_num1);

    printf("\nEnter the ending number: ");
    scanf("%d",&end_num1);
    if( st_num1== 0 || end_num1== 0)
    {
        printf("\nZero is neither even nor odd, its unique number");
        goto up;
    } 
    
    if (st_num1<=end_num1)
    {   
        st_num = st_num1, end_num = end_num1;
        printf("\nThe range of even numbers are as follows: "); 
        for(i = st_num1; st_num1<= end_num1; ++st_num1)
        {
            if(st_num1 % 2 == 0)
            {
                printf(" %d,",st_num1);
            }
        }
        printf(".\n");
        printf("\nThe range of odd numbers are as follows: ");

        for(i = st_num; st_num<= end_num; ++st_num)
        {
            if(st_num % 2 == 1)
            {
                printf(" %d,",st_num);
            }
        }
        printf(".\n");
    }
    else
    {   
        st_num = st_num1, end_num = end_num1;
        printf("\nThe range of even numbers are as follows: "); 
        for(i = st_num1; st_num1>= end_num; --st_num1)
        {
            if(st_num1 % 2 == 0)
            {
                printf(" %d,",st_num1);
            }
        }
        printf(".\n");
        printf("\nThe range of odd numbers are as follows: ");
        
        for(i = st_num; st_num>= end_num; --st_num)
        {
            if(st_num % 2 == 1)
            {
                printf(" %d,",st_num);
            }
        }
        printf(".\n"); 
    }

    
    printf("\nThanks for visiting");
    getch();
    return 0;
}