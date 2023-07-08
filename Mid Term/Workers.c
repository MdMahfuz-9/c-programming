#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int arr[3];

    for (int i = 0; i < 3; i++)
    {
        scanf("%d",&arr[i]);

    }

    int ans=0;
    

    ans = ((arr[2]* arr[0])/arr[1]);
    printf("%d",ans);
    
    return 0;
}
