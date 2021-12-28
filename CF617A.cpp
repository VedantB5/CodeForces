#include<iostream>
using namespace std;

int main()
{
    int x;//number to store the distance
    cin>>x;
    int m=0;//to store number of steps
    if(x%5==0)
    m=x/5;
    
    
    else if (x%4==0)
    m=x/4;
    

    else if(x%3==0)
    m=x/3;
    

    else if (x%2==0)
    m=x/2;
    

    else if (x==1)
    { m=1;}
     
    
    
    else
    {int i,j;
    for(i=5;i>=1;i--)
    {if (x>0)
    {
    j=x%i;
    m=m+((x-j)/i);
    x=x-(i*m);}
       }}

cout<<m<<endl;
return 0;
}
