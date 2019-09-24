#include <bits/stdc++.h>
using namespace std;
int main()
{
    pair <int,int> p;
    map < pair <int,int > ,string> m;
    int c,t,i,j ,a,b;
    string name ;
    cin>>t ;
    while (t--)
    {
        cin>>a>>b;
        cin>>name ;
        p=make_pair (a,b) ;
        m[p]=name ;

    }
    cin>>c ;
    while (c--)
    {
        cin>>a>>b ;
        p=make_pair(a,b) ;
        cout<<m[p]<<endl;
    }
}
