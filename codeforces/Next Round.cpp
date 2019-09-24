#include<iostream>
using namespace std;
int main()
{
    int n,k,count=0;
    cin>>n>>k;
    int ara[n] ;
    for (int i=0 ; i<n; i++)

    {
        cin>>ara[i] ;
    }

    for (int i=0 ; i<n; i++)
    {

        if (ara[k-1]>=ara[i])
        {
            count++ ;
        }
    }
    cout<<count+1;
}
