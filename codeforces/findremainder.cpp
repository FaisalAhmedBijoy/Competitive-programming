#include<bits/stdc++.h>
using namespace std;
int factorial(int n)
{
    int sum =1;
    for (int i=1;i<=n;i++)
    {
        sum=sum *i;

    }
    cout<<sum<<endl;
}
int main()
{
    int t,n,i,j,k ,a,b;
    cin>>t;
    for (i=0;i<t;i++)
    {
       cin>>n ;
       factorial(n);

    }
}
