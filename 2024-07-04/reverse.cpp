#include <iostream>
using namespace std;
void reverse(int a[],int size){
    int temp;
    if(size==0 || size==1)
        return;
    temp=a[0];
    a[0]=a[size-1];
    a[size-1]=temp;
    reverse(a+1,size-2);
}
int main()
{
    int a[]={10,20,30,40,50,60};
    reverse(a,6);
    for(int i=0;i<6;i++)
        cout<<a[i]<<"   ";
    return 0;
}