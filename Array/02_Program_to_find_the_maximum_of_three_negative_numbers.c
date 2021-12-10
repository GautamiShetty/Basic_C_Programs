#include<stdio.h>
#include<conio.h>
#define size 3
int main()
{
    
    int num[size] ={},i = 0, max = 0,flag = 0;
    printf("\nEnter %d negative values to find maximum among them: ",size);
    
    for( i = 0; i < size; i++)
    {
        up:
        printf("\nEnter number %d: ",i+1);
        scanf("%d",&num[i]);
        if(num[i]>0)
        {
            Up:
            printf("\nThe given number is not negative number");
            printf("\nPlease re-enter a negative number or exit the application");
            printf("\nTo re-enter press %d \nto exit press %d\n",0,1);
            scanf("%d",&flag);
            switch(flag)
            {
                case 0:
                i--;
                goto Up;
                break;

                case 1:
                goto down;
                break;

                default:
                printf("\nInvalid symbol");
                break;
            }    
        }
        
    }
    num[0] = max;
    for(i = 0; i < size; i++)
    {
        
        if(num[i]> max)
        {
            max = num[i];
        }
    }
    printf("\nThe maximum among %d numbers are %d",size,max);

    down:
    printf("\nThanks for visiting");

    getch();
    return 0;
}