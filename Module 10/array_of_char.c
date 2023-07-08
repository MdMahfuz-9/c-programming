#include<stdio.h>

int main()
{
    int ar[8];
    int sz;
    sz = sizeof(ar)/sizeof(char) ;

    printf("%d", sz);
    return 0;
}