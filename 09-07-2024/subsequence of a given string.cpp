//1st
#include <iostream>
using namespace std;
int subseq(string input,string output[])
{
    //base case 
       if(input.size()==0)
        {
            output[0]="";
            return 1;
        }
        int smallsize=subseq(input.substr(1),output);
        for(int i=0;i<smallsize;i++)
         output[i+smallsize]=input[0] + output[i];
        return 2*smallsize;
    
    
    
    
}
int main()
{
    string input;
    cin>>input;
    string *output=new string[100];
    int count;
    count=subseq(input,output);
    for(int i=0;i<count;i++)
      cout<<output[i]<<endl;
    return 0;
}
