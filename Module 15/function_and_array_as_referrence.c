#include<stdio.h>
void fun(int *ar,int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ",ar[i]);
    }
    printf("\n");
    
}

int main()
{
    int ar[10]= {1,2,3,4,5,6,7,8,9};
    fun(ar,10);

     for (int i = 0; i < 9; i++)
    {
        printf("%d ",ar[i]);
    }
    


  return 0;
}