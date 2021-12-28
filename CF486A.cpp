#include <iostream>
using namespace std;

int main()
{
    int n;
    int s=0,p=1;
    cin>>n;
    int i,j;

    for( i=1;i<=n;i++)
     {if(i%2!=0)
     s+=(-1*i);
     else
     s+=i;
     }

     cout<<s;
}
