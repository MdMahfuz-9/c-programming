#include<stdio.h>

void Modulo()
{   
    int n,m;
    scanf("%d %d",&n,&m);

    int mod = n % m;

    printf("%d",mod);
}

int main()
{
    Modulo();
    return 0;
}