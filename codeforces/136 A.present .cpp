#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int ara[n] ;
    for (int i=1;i<=n;i++)
    {
        cin>>ara[i] ;
    }
    for (int i=1;i<=n;i++)
    {
        for (int j=1 ;j<=n;j++)
        {
            if (i==ara[j])
            {
                cout<<j<<" " ;
            }
        }
        //cout<<endl;
    }
}
