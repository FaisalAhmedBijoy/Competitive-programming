#include<bits/stdc++.h>
using namespace std;
int  main()
{
    long long n,a=0,b=0 ,i;
    cin>>n;
    int ara[n];
    for (i=0;i<n;i++)
    {
        cin>>ara[i];
    }

    if (ara[n-1]==0)
        {
            for (i=n-1;i>=0;i--)
            {
                if(ara[i] == 1)
                {
                    cout<<i+1 ;
                    break ;
                }

            }
        }

        else
        {
            for (i=n-1 ;i>=0;i--)
            {
                if (ara[i]==0)
                {
                    cout<<i+1 ;
                    break ;
                }
            }
        }


}

