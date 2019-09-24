#include<bits/stdc++.h>
using namespace std;
int main()
{

        string s1,s2,s ;
        cin>>s1>>s2;
        for (int i=0 ;i<s1.size();i++)
        {
            if (s1[i]==s2[i])
            {
                s1[i]='0';
            }
            else
            {
                s1[i]='1';
            }
        }
        cout<<s1<<endl;

}
