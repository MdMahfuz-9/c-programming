#include <stdio.h>

int main()
{
    long int N;
    scanf("%ld", &N);
    
    if( N >= 1500 ) 
    {
        printf("I will buy Punjabi\nI will buy new shoes\nAlisa will buy new shoes");
    }
    else if((N > 1000))
    {
        printf("I will buy Punjabi");
    }
    else 
    {
        printf("Bad luck!");
    }


    return 0;
}