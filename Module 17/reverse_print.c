#include<stdio.h>

void Fun(int i)
{   
    if (i==6)return;
    Fun(i+1);
    printf("%d \n",i);
   
}
int main()
{
    Fun(0);

    return 0;
}