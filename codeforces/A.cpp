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
   int temp=ara[k-1];

    for (int i=0 ; i<n; i++)
    {
        if (temp<=ara[i]   && ara[i] !=0)
        {
            count++ ;
        }
    }
    cout<<count;
}

