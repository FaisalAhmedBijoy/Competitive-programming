#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,c=0,d=0,p=0,q=0,x=0;
    cin>>n;
    if (n==1)
    {
        string s ;
        cin>>s;
        for (int i=0;i<s.size();i++)
        {
            if( s[i]=='0')
            {
                cout<<"No";
                return 0;
            }
            else
            {
                cout<<"Yes";
                return 0;
            }
        }
    }
    if (n!=2)
    {

        string s ;
        cin>>s ;
        for (int i=0 ; i<s.size() ; i++)
        {


            if (s[i]=='1')
            {
                c++ ;
                d=0 ;
                if (c>=2)
                {
                    cout<<"No";

                    return 0;
                    break ;
                }


            }
            else if (s[i]=='0')
            {
                d++ ;
                c=0 ;
                if (d>=2)
                {

                    cout<<"No";

                    return 0;
                    break ;
                }


            }
        }

        cout<<"Yes" ;
    }

}
