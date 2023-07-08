#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
   char arr[1001];
   scanf("%s",arr);
   int capital = 0;
   int small = 0;


   for (int i = 0; i <= strlen(arr); i++)
   {
    if (arr[i] >= 65 && arr[i] <= 90  )
    {
        capital++;
    }
    else if(arr[i] >= 97 && arr[i] <= 122 )
    {
        small ++;
    }
   }
   printf("%d %d",capital,small);
    
   
    
    return 0;
}
