#include<stdio.h>
#include<string.h>
int main()
{
   char arr[100];
   scanf("%s",arr);
   int cnt[26]={0};
   for(int i=0;i<strlen(arr);i++)
   {
       int value = arr[i]-'a';
       cnt[value]++;
   }


   for (int i = 0; i <= 26; i++)
   {
       
       printf("%c - %d\n",i+'a', cnt[i]);
       
   }


   return 0;
}
