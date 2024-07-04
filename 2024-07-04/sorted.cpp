#include <iostream>
using namespace std;
bool Issorted(int a[],int size){
    if(size==0 || size==1)
       return true;
    if(a[0]>a[1])
       return false;
    return Issorted(a+1,size-1);
}
int main()
{
    int a[]={12,30,45,67,90};
    if(Issorted(a,5))
      cout<<"sorted"<<endl;
    else
      cout<<"Not sorted"<<endl;

    return 0;
}