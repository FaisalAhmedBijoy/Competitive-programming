#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s ;
    getline(cin,s);
    set<char>a ;
    for (int i=0;i<s.size();i++)
    {
        if (s[i]>=65 && s[i]<=122)
        {
            a.insert(s[i]) ;
        }
    }
    cout<<a.size()<<endl;
}
