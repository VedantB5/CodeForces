#include <iostream>
using namespace std;
int main()
{
    int a[4];
    int j=0;
    for (int i=0;i<4;i++)
    {cin>>a[i];}

    int max=0;
    for(int i=0;i<4;i++)
    {if(a[i]>max)
    {max=a[i];
    j=i;
    }
    }
    int t=a[3];
    a[3]=max;
    a[j]=t;

    int i=a[3]-a[0];
     j=a[1]-i;
    int k=a[2]-i;

    cout<<i<<" "<<j<<" "<<k;



    
}