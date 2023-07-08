#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    char arr[1000];
    scanf("%s",arr);

    int ar[1000];
    int count = 0;

    for(int i = 0;i <= strlen(arr);i++)
    {
 ar[i] = arr[i];
        if (ar[i] == 'a' )
        {
            count++;
        }
        else if(ar[i] == 'e')
        {
            count++;
        }
        else if(ar[i] == 'i')
        {
            count++;
        }
        else if(ar[i] == 'o')
        {
            count++;
        }
        else if(ar[i] == 'u')
        {
            count++;

        }

    }
    printf("%d",count);


    
    return 0;
}
