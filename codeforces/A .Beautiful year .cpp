#include<bits/stdc++.h>
using namespace std ;
int main()
{
    int  n,a,b,c,d,e,x;
    cin>>n;
    x=n;


    while (true)
    {
        x++;



        n=x;

        a=n%10 ;
        n=n/10;
        b=n%10;
        n=n/10;
        c=n%10;
        d=n/10;

        if (a!=b && a!=c && a!=d && b!=c && b!=d && c!=d)
        {

         break;

        }

      }

    cout<<x<<endl;


}
