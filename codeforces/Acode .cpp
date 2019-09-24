#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,i ,pos;
    cin>>n;
    long long int ara[n] ;
    for ( i=0 ;i<n;i++)
    {
        cin>>ara[i];
    }
    sort(ara,ara+n) ;
    pos=(n/2) ;
    if (n %2 ==0)

    {
        cout<<ara[pos-1];
    }
    else
    {
        cout<<ara[pos] ;
    }
}

