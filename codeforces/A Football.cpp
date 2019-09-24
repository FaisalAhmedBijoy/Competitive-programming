#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s[110] ;
    scanf("%s",s) ;
    int    x=strlen(s) ;
    int count=0,count1=0;
    for (int i=0 ; i<x; i++)
    {
        if (s[i] == '0')
        {

            count ++ ;
            if (count >=7)
            {
                cout<<"YES";
                return 0;
            }
            count1=0 ;

        }
        else if (s[i] == '1')
        {
            count1++ ;

            if (count1>=7)
            {
                cout<<"YES" ;
                return 0;
            }
            count =0 ;

        }

    }
    cout<<"NO" ;
    return 0;
}
