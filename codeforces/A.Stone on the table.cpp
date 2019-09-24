#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n ;
    string s ;
    cin>>s ;
    int i,j,k=0 ;
    for (i= 0; i<n ; i++)
    {


        if (s[i] == s[i+1])
        {
            k++ ;
        }

    }
    cout<<k;

}
