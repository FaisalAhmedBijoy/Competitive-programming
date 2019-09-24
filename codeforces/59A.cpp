#include<bits/stdc++.h>
using namespace std ;

int main()
{
    string s ;
    cin>>s ;
    int lower=0,upper=0;
    for (int i=0;i<s.size();i++)
    {
        if (s[i]>=65 && s[i]<=90)
        {
            upper++ ;

        }
        else
        {
            lower++ ;
        }
    }
    //cout<<lower<<"Lower"<<" "<<"Upper "<<upper<<endl;
    if (upper>lower)
    {
       // cout<<toupper(s);
        for (int i=0 ;i<s.size();i++)
        {
            s[i]=toupper(s[i]) ;
        }
    }
    else
    {
       // cout<<tolower(s);
        for (int i=0 ;i<s.size();i++)
        {
            s[i]=tolower(s[i]) ;

    }
    }
    cout<<s<<endl;
}
