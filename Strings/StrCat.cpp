#include <stdio.h>
#include<string.h>
void mystrcat(char *dest,const char *src){
    int l;
    l=strlen(dest);
    dest=dest + l;
    while(*src!='\0'){
        *dest=*src;
        dest++;
        src++;
    }
    *dest='\0';
}
int main()
{
    char s1[20]="pankaj";
    char s2[20]="sharma";
    mystrcat(s1,s2);
    puts(s1);

    return 0;
}