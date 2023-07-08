#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int n;
    scanf("%d",&n);
    int arr[n];

    for(int i=0; i<n;i++)
    {
        scanf("%d",&arr[i]);

    }

    int ar;
    scanf("%d",&ar);

    int total = 0;
    for(int i=0; i <= n ; i++)
    {
        if (ar == arr[i])
        {
            total++;           
        }

    }
    printf("%d",total);
    
    return 0;
}
