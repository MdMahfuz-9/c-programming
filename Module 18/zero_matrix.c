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
            if ((i+j)==(row-1))
            {
                continue;
            }
            

            if(ar[i][j]!=0) cnt = 0;
        }
        
       
    }

    if (cnt ==1)
    {
        printf("DIagonal");
    }
    else
    {
        printf("Not Diagonal");
    }
    

    
    
    return 0;
}
