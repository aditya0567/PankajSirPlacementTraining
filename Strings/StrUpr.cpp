#include <stdio.h>
void mystrupr(char *str){
    int i;
    for(i=0;str[i]!='\0';i++){
        if(str[i]>='a' && str[i]<='z')
           str[i]=str[i] -32;
    }
}
void mystrlwr(char *str){
    int i;
    for(i=0;str[i]!='\0';i++){
        if(str[i]>='A' && str[i]<='Z')
           str[i]=str[i]  + 32;
    }
}
int main()
{
    char str[20]="Pankaj";
    char str1[10]="SharmA";
    puts(str);
    mystrupr(str);
    puts(str);
    mystrlwr(str1);
    puts(str1);

    return 0;
}