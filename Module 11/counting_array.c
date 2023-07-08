#include<stdio.h>
#include<string.h>
 int main()
 {
    int n;
    scanf("%d",&n);
    int arr[n];
    for (int  i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    int cunt[9]={0};

    for (int i = 0; i < n; i++)
    {
        int val = arr[i];
        cunt[val]++;
    }
    

    for (int i = 0; i < 10; i++)
    {
        printf("%d - %d \n",i , cunt[i]);
    }
    
    return 0;
 }