#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s ;
    cin>>s ;
    int   l=s.size() ;


    s[0]=toupper(s[0]) ;
    for (int i=1 ; i<l; i++)
    {
        s[i]=tolower(s[i]) ;
    }
    cout<<s;
}
