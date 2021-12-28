#include<iostream>
using namespace std;

int main()
{
    int k,n,w;//k-cost of banana,n-number of dollars, w-number of bananas
    cin>>k>>n>>w;
    int tc=0;//total cost
    for(int i=1;i<=w;i++)
    {tc=tc+(i*k);}
   
    if(n<tc)
    {int m=tc-n;
    cout<<m<<endl;
    }
    else
    cout<<"0"<<endl;
    return 0;
}
