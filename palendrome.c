#include<stdio.h>
#include <string.h>
void main()
{
    int i,n,c=0;
    char s[100];
    printf("enter a string ");
    gets(s);      
    n=strlen(s);
    for(i=0;i<n/2;i++)
    {
     if(s[i]==s[n-i-1])
     {
        c++;   
     }
    }
     if(c==i)
     {
      printf("String is Pallendrome");      
     }
     else
     {
     printf("String is not  Pallendrome");     
     } 
    
}