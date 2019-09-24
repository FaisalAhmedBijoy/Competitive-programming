#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,count=0;
    cin>>a>>b;
    while (1)
    {
        count++;

        a=a*3 ;
        b=b*2 ;
        if (a>b)
        {
            break;
        }
    }
    cout<<count<<endl;
}
