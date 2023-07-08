#include<stdio.h>

void Value(int * y)
{   
    printf("%d",*y);
}

int main()
{
    int x=40;
    Value(&x);

    return 0;
}