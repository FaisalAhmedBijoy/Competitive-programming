#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,X=0,j ;
    cin>>n ;
    char s[3] ,p[3];
    for (i=0;i<n;i++)
    {

      for (j=0;j<3;j++)
      {
         cin>> s[j] ;
      }

        if ( s[0] == '+')
        {
            ++X ;
        }
        else if (s[0] == '-')
        {
            --X ;
        }
        else if (s[2]=='+')
        {
            X++ ;
        }
        else if (s[2] == '-')
        {
            --X ;
        }
    }
    cout<<X;
}
