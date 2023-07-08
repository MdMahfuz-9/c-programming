#include<stdio.h>
#include<string.h>

int main()
{
    char a[100];
    char b[100];
    scanf("%s %s",a,b);
    int v;
    v = strcmp(a,b);

    if(v<0)
    {
        printf("A small\n");

    }
    else if (v>0)
    {
        printf("B is small\n");
    }
    else
    {
        printf("same\n");
        
    }



  
   
    return 0;
}