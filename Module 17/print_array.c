#include<stdio.h>

void Multi(int arr[],int n, int i)
{   
    if (i==n) return;
    printf("%d \n",arr[i]);
    Multi(arr,n,i+1);
   
}
int main()
{
    
    int arr[3]={10,20,30};
    
    Multi(arr,3,0);

     

    
    return 0;
}