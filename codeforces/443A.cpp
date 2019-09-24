
#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s[1000] ;


    gets(s);
    int lenth=strlen(s);
    sort(s,s+lenth);
   // cout<<s<<endl;
    int count=0;

    for (int i=0 ;i<lenth-1;i++)
    {
        if (s[i]>=65 && s[i]<=122)
        {
            count++ ;
            if (s[i]==s[i+1])
            {
                count--;
            }
        }

    }
    cout<<count<<endl;








}
