#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n ;
    cin>>n ;
    int ara[n] ;
    int  count=0;
    for (int i=0;i<n;i++)
    {
        cin>>ara[i];

    }
    for (int i=0;i<n;i++)
    {
         if (ara[i]!=ara[i+1])
        {
            count++;
        }

    }
    cout<<count;
}
