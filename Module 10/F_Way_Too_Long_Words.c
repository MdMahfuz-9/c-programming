#include<stdio.h>
#include<string.h>

int main()
{
    int n;
    int j;
    scanf("%d",&n);
    char arr[101];

    for(int i=0;i<n;i++)
    {
        scanf("%s",arr);
        j= strlen(arr);

        if(j<=10)
        {
            printf("%s\n",arr);

        }
        else
        {
            printf("%c%d%c\n",arr[0],j-2,arr[j-1]);

        }

        
    }

    
     
    
    return 0;
}