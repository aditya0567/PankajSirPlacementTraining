//1st
#include<iostream>
#include<vector>
using namespace std;
void Generate(string abtak,int open,int close){
    if(open==0 && close==0)
    {
        cout<<abtak<<endl;
        return;
    }
    if(open>0)
    Generate(abtak + "(",open-1,close);
    if(close>0 && open<close)
    Generate(abtak + ")",open,close-1);
}
int main()
{   int n;
    cout<<"enter a number"<<" ";
    cin>>n;
    Generate("",n,n);
    return 0;
}

//2nd
#include<iostream>
#include<vector>
using namespace std;
void Generate(string abtak,int open,int close,vector<string>&v){
    if(open==0 && close==0)
    {
        v.push_back(abtak);
        return;
    }
    if(open>0)
    Generate(abtak + "(",open-1,close,v);
    if(close>0 && open<close)
    Generate(abtak + ")",open,close-1,v);
}
int main()
{   int n;
    vector<string>v;
    cout<<"enter a number"<<" ";
    cin>>n;
    Generate("",n,n,v);
    for(int i=0;i<v.size();i++)
       cout<<v[i]<<endl;
    return 0;
}
