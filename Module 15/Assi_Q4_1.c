#include<stdio.h>

int Addition(int n,int m)
{

    int add = n + m;

    return add;
}
int main()
{
    int n,m;
    scanf("%d %d",&n,&m);

    int ans= Addition(n,m);
    printf("%d",ans);

    
    return 0;
}