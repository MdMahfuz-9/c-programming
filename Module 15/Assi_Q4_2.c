#include<stdio.h>

int Multiply()
{   
    int n,m;
    scanf("%d %d",&n,&m);

    int Multiplication = n * m;

    return Multiplication;
}
int main()
{
    

    int ans= Multiply();
    printf("%d",ans);

    
    return 0;
}