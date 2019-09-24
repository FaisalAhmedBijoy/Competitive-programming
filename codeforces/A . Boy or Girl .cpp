#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main()
{
    string s ;
    cin>>s ;
    // cout<<s.size()<<endl;
    long long i,j,c=0,d=0 ;
    sort(s.begin(),s.end());
    for (i=0 ; i<s.size(); i++)
    {


        if (s[i] == s[i+1])
        {

            c++ ;
        }


    }
   d=s.size()-c;
    //cout<<d<<endl;


    if (d%2 == 0)
    {
        cout<<"CHAT WITH HER!" ;
    }
    else
    {
        cout<<"IGNORE HIM!";
    }
}
