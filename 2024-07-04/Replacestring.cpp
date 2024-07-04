#include <iostream>
#include<string.h>
using namespace std;
void replace(char input[]){
    int l=strlen(input);
    if(l==0)
      return;
    if(input[0]=='x')   //if first char is the char to be removed
    {
        for(int i=0;i<l;i++)
          input[i]=input[i+1];
        replace(input);
    }
    else      // first char is not 'x'
      replace(input + 1);
}   
int main()
{   char input[100];
    cout<<"enter a string ";
    cin>>input;
    replace(input);
    cout<<input<<endl;
    
    return 0;
}