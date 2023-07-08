#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int k=(2*n)-1;
    int b=0;
    for(int i=1;i<=n;i++)
    {
        for (int j = 0;j<=b; j++)
        {
            printf(" ");
            
        }
        for (int j = 0; j < k; j++)
        {
           printf("*");
        }

        k=k-2;
        b++;
        printf("\n");
    }

    return 0;
}