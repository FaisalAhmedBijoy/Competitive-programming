#include<iostream>
using namespace std;
int main()
{
    long long m,n,a,i,j,p,q ;
    cin>>m>>n>>a ;
    i=m/a ;
    if (m%a !=0)
    {
        i++ ;

    }
    j=n/a ;
    if (n%a !=0)
    {
        j ++  ;
    }
    cout<<i*j;


}
