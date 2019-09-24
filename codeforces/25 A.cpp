#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,odd=0,even=0,k=0;
    cin>>n ;
    int ara[n] ;
    for (int i=0 ;i<n;i++)
    {
        cin>>ara[i] ;
        if (ara[i]%2 ==0)
        {
            even++ ;
        }
        else
            odd++ ;
    }
   // cout<<"Even : "<<even<<"   "<<"Odd "<<odd<<endl;
    if (even>odd)
    {
        for (int i=0 ;i<n;i++)
        {
            if (ara[i]%2 !=0)
            {
                k=i ;
            }
        }
    }
    else{
        for (int i=0 ;i<n;i++)
        {
            if (ara[i]%2 == 0)
            {
                k=i ;
            }
        }
    }
    cout<<k+1<<endl;



}
