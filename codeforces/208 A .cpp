#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s,p;
    cin>>s ;
    for (int i=0 ; i<s.size () ; i++)
    {

        if (s[i] == 'W' && s[i+1] == 'U' && s[i+2]== 'B')
        {
            cout<<" " ;
            i=i+2 ;

        }
        else
        {
            cout<<s[i];

            //cout<<" ";
        }
    }
    //  cout<<s ;
}
