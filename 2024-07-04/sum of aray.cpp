#include <iostream>
using namespace std;
int findsum(int a[],int size){
    if(size==0)
       return 0;
    return a[0] + findsum(a+1,size-1);
}
int main()
{
    int a[]={12,3,45,67,9};
    cout<<"The sum of array elements is  "<<findsum(a,5);

    return 0;
}