#include<stdio.h>
#include<string.h>

int main()
{
    char S[1001];
    char T[1001];

    scanf("%s",S);
    scanf("%s",T);

    int st = strlen(S);
    int tt = strlen(T);

    printf("%d %d\n",  st,tt );
    printf("%s %s", S , T);




    
    return 0;
}