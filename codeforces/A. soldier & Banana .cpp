#include<iostream>
using namespace std ;
int main()
{
    long long n,k,w,a,sum=0,i,j ;
    cin>>k>>n>>w ;
    j=k ;
    for ( i=0; i<w; i++)
    {
        sum=sum+j;
        j=j+k;

    }
    if (sum <= n)
    {
        cout<<"0";
    }
    else
    {


    cout<<sum-n;
    }

}
