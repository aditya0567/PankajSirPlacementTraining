//2nd
#include<iostream>
using namespace std;
void sub(int index ,string original,string tillnow){
    if(index==original.size())
     {
         cout<<tillnow<<endl;
         return;
     }
     sub(index+1,original,tillnow + original[index]);
     sub(index +1,original,tillnow);
    }
int main()
{
    string original;
    cin>>original;
    sub(0,original,"");

    return 0;
}