#include<stdio.h>
int main()
{
    int tk;
    scanf("%d" , &tk);

    if(tk >= 100)
    {
        printf("Burgur khabo");
    }
    else if (tk >= 50)
    {
        printf("Fuchka khabo");
    }
    else
    {
      printf("Kichu e khabona");
    }
    return 0;
}