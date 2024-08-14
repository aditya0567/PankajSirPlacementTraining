#include<stdio.h>
#include<string.h>
#include<conio.h>
void mystrrev(char *src){
    int s,e,l;
    l=strlen(src);
    s=0;
    e=l-1;
    while(s<e)
     {
         char temp;
         temp=src[s];
         src[s]=src[e];
         src[e]=temp;
         s++;e--;
     }
}
int main()
{
    char s[10]="pankaj";
    mystrrev(s+2);
    printf("%s",s);
    
    return 0;
}