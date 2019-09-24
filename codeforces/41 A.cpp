#include<bits/stdc++.h>
#include<string.h>
#include<string>
#include<algorithm>
using namespace std;
int main()
{

    string s1,s3;
    cin>>s1 ;
    string s2 ;
    cin>>s2;
   reverse(s2.begin(),s2.end()) ;
  // cout<<s2 ;
   if ( s1 == s2)
   {
       cout<<"YES" ;
   }
   else
   {
       cout<<"NO" ;
   }

}
