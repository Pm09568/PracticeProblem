#include<stdio.h>
#include<string.h>
void main(){
    int i,n,c=0 ;
    char ch;
    char str[100];
    printf("enter string ");
   gets(str);
   printf("enter character which you want to find in the string ");
   scanf("%c",&ch);
    n=strlen(str);
    for(i=0;i<n;i++)
    {
            if(str[i]==ch)
            {
              c++;
            }      
    }
    printf("%d",c);
}