#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,l;
    cin>>n;
    for (int i=1;i<n;i++)
    {
        a=powl(2,i) ;
        if (a>n)
            break ;

    }
    l=n-a;

    cout<<2*l+1 ;

}
