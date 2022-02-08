#include<stdio.h>
#include<conio.h>

void round_off (float []);
void bar_chart(int [],float*);

int main()
{
    int i = 0;
    float fnum[4] = {};

    printf("\nEnter 4 floating numbers : ");

    for(i = 0; i <= 3; i++)
    {
        printf("\nNumber %d : ",i+1);
        scanf("%f",&fnum[i]);
    } 
    round_off(fnum);   
    getch();
    return 0;
}

void round_off (float fnum[])
{
    int inum[4] = {0.0}, i = 0;
    //float temp = 0;
    for(i = 0; i < 4; i++)
    {
        inum[i] = fnum [i] + 0.5;
        //inum[i] = (int)temp;
    }
    
   bar_chart(inum,fnum);
}

void bar_chart(int ino[],float *fno)
{
    int i = 0, j = 0, k = 0;

    printf("\nRequired bar chart are : \n\n");
    while(k < 4)
    {
        for(i = 0; i < 3; i++)
        {
            for(j = 1; j <= ino[k]; j++)
            {
                printf(" * ");
                if((i == 1) && (j == ino[k]))
                {
                    printf("\t %.2f",*(fno++));
                    continue;
                }
            }
            printf("\n");
        }
        printf("\n\n");
        k++;
    }
}

