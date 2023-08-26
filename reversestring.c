#include<stdio.h>
#include<string.h>
void main(){
    int i,n ;
    char str[100];
    printf("enter string ");
  
   gets(str);
    n=strlen(str);
    for(i=n;i>=0;i--)
    {
   printf("%c",str[i]);
    }
}