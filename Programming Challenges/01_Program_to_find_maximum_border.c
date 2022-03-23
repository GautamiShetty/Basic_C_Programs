/* You are given a table with 'n' rows and 'm' columns. Each cell is colored with white or black. 
Considering the shapes created by black cells, what is the maximum border of these shapes? 
Border of a shape means the maximum number of consecutive black cells in any row or column 
without any white cell in between.

A shape is a set of connected cells. Two cells are connected if they share an edge. 
Note that no shape has a hole in it.

Input format

The first line contains 't' denoting the number of test cases.
The first line of each test case contains integers 'n','m' denoting the number of rows and columns 
of the matrix. Here, '#' represents a black cell and '.' represents a white cell. 
Each of the next 'n' lines contains 'm' integers. */

//Input : 2 15
// .....####......
// .....#.........

//Output : 4

#include<stdio.h>

int maxborder(int irow, int icolumn);

int main()
{
    int iresult = 0, icases = 0, i = 0;
    printf("\nEnter the cases : ");
    scanf("%d",&icases);

    for(i = 0; i < icases; i++)
    {
        int irow = 0, icolumn = 0;
        printf("\nFor case no %d: ", i + 1);

        printf("\n\nEnter the row : ");
        scanf("%d",&irow);  
        
        printf("\nEnter the column : ");
        scanf("%d",&icolumn);

        iresult = maxborder(irow, icolumn);

        printf("\n%d",iresult);
    }

    return 0;
}

int maxborder(int row, int column)
{
    int count[30] = {}, i = 0, j = 0, max = 0;
    char border[40][40];

    for(i = 0; i < row; i++)
    {
        for(j = 0; j < column ; j++)
        {
            fflush(stdin);
            scanf("%c",&border[i][j]);
            
            if((j > 0))
            {
                if( (border[i][j - 1] == '#' && border[i][j] == '#'))
                {
                    count[i]++;
                    printf("%d is i and %d is its count[%d]\n\n", i, count[i], i);                   
                                       
                }

            }  
        }
       
        
    }

    max = count[0];
    
    for(i = 0; i < row; i++)
    {
       if(max < count[i])
       {
           max = count[i];
       }
    }
    max++;
    return max;
}
