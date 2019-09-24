#include<iostream>
using namespace std;
int main()
{
    int n ;
    cin>>n;
    int a,b,x=0,tram=0 ;
    for (int i=0 ;i<n;i++)
    {
        cin>>a>>b;
        x=x-a ;
        x=x+b ;
        if (x>tram)
        {
            tram=x;

        }
    }
    cout<<tram;
}
