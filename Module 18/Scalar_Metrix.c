#include<stdio.h>

int main()
{
    int row , col;
    scanf("%d %d",&row,&col);
    int ar[row][col];
 
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {

            scanf("%d",&ar[i][j]);
        }
        
       
    }
    
    int cnt = 1;

    if (row!=col)
    {
        cnt = 0;
    }
    

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (i==j)
            {
                if (ar[i][j] != ar[0][0])
                {
                    cnt =0;
                }
                continue;
                
            }
            

            if(ar[i][j]!=0) cnt = 0;
        }
        
       
    }

    if (cnt ==1)
    {
        printf("Scalar");
    }
    else
    {
        printf("Not Scalar");
    }
    

    
    
    return 0;
}
