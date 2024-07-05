#include<iostream>
#include<cstring>
using namespace std;
void Remove(char input[]){
    int l;
    l=strlen(input);
    if(l==0||l==1)
      return;
    else if(input[0]==input[1])
    {
        for(int i=1;i<=l;i++)
           input[i-1]=input[i];
        Remove(input);
    }
    else 
        Remove(input +1);
}
int main()
{
    char input[100];
    cout<<"Enter the string ";
    cin>>input;
    Remove(input);
    cout<<input<<endl;
    return 0;
}