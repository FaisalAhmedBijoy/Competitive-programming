#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    for (int i=0;i<n;i++)
    {
        s[i]=tolower(s[i]) ;
    }

    //cout<<s<<endl;
    set<char>a;
    for(int i=0;i<s.size();i++)
    {
        a.insert(s[i]) ;
    }
   // cout<<n<<a.size()<<endl;
    if(26==a.size())
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
}
