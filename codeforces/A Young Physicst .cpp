#include<iostream>
using namespace std;
int main()
{
    int n,count =0 ;
    cin>>n;
    int a[n],b[n],c[n],A=0,B=0,C=0;
    for (int i=0 ;i<n;i++)
    {
        cin>>a[i]>>b[i]>>c[i] ;
    }

    for (int i=0;i<n;i++)
    {
        A =A+a[i] ;
        B=B+b[i] ;
        C=C+c[i] ;
    }
    if (A == 0 && B==0 && C==0)
    {
        cout<<"YES" ;
    }
    else
    {
        cout<<"NO";
    }
}
