#include<stdio.h>

int main()
{
    int n;
    int k=0;
    scanf("%d",&n);

    for(int i=1;i<=n;i++)
    {
        for (int j = 0; j <=k ; j++)
        {
             
        printf("*");
      
        }
        printf("\n");
        k++;
       
    }

    return 0;
}