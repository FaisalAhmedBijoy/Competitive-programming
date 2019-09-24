#include<bits/stdc++.h>
#include<string>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int i,j,k,l;
    l= s.size() ;
    for (i=0 ; i<l; i+=2)
    {
        for (j=i+2; j<l ; j+=2 )
        {
            if (s[i]>s[j])
            {
                swap(s[i],s[j]) ;
            }
        }
    }

    cout<<s<<endl;
}
