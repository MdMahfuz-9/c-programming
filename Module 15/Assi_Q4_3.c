#include<stdio.h>

void Divition(int n, int m)
{   
    
    int divide = n / m;
    printf("%d",divide);
}

int main()
{
    int n,m;
    scanf("%d %d",&n,&m);

    Divition(n,m);
    

    
    return 0;
}