#include <iostream>
using namespace std;
int main()
{
    int m,n;//to store number of rows and columns
    cout<<"Enter number of rows and columns(to be lesser than 16)";
    cin>>m;
    cin>>n;
    int j=m*n;
    if((j%2)==0)
    cout<<"No. of dominos="<<(j/2)<<endl;
    else
    cout<<"No. of dominos=5"<<((j-1)/2)<<endl;

    return 0;

}