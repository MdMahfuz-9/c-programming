#include<stdio.h>

int main()
{
   int n;
   int sum=0;
   scanf("%d", &n);
   int ar[n];

   for(int i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
   for(int f=0;f<n;f++)
    {
        sum = sum+ar[f];
    }
    printf("%d",sum);
    
    return 0;
}