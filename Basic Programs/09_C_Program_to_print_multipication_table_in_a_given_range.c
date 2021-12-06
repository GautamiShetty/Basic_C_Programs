#include<stdio.h>
#include<conio.h>
int main()
{
    int row = 0, column = 0, s_num = 0, e_num = 0;
    
    printf("Enter the range's starting number: \n");
    scanf("%d",&s_num);
    
    printf("Enter the range's ending number: \n");
    scanf("%d",&e_num);
    
    if(s_num< e_num)
    {
        for(row = 1; row <= 10; row++)
        {
            for(column = s_num; column<= e_num; column++)
            {
                printf("%2d ",row*column);
            }
            printf("\n");
        }
    }
    else if(e_num<s_num)
    {
      for(row = 1; row <= 10; row++)
        {
            for(column = s_num; column>= e_num; column--)
            {
                printf("%2d ",row*column);
            }
            printf("\n");
        }  
    }
    

    getch();
    return 0;
}
