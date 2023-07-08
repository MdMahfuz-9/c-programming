#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
   int arr[2];
   
  
   for (int i = 0; i < 2; i++)
   {
     scanf("%d",&arr[i]);
    
   }

    int ar[arr[0]];
    int value = 0;

    for (int i = 0; i <= arr[0]; i++)
    {
        ar[i] = value;
        value++;
    }

    for (int i = 0; i < arr[1]; i++)
    {
         for (int  i = 0; i <= arr[0]; i++)
        {
            printf("%d ",ar[i]);
        }
        printf("\n");
    }
    


  

    return 0;
}
