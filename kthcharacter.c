#include<stdio.h>
#include<string.h>
int main()
{
    char ch[100];
    char i;
     printf("enter character");
    gets(ch);     
    printf("enter kth  character");
    scanf("%c",&i);
   for(int j=0;j<strlen(ch);j++)
   {
    if(i==ch[j])
    {
        //printf("%c",ch[j]);
        ch[j]= ch[j]-32;
    }
   }
   printf("%s",ch);
   return 0;
}