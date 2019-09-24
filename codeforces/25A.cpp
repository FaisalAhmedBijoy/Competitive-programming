
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n ,i,j,k,a,odd=0,even=0;
    cin>>n;
    vector<int>v ;
    for (i=0;i<n;i++)
    {

        cin>>a ;
        v.push_back(a);


    }
    for (i=0;i<n;i++)
    {

        if (v[i] %2 ==0)
        {
            even++ ;
            j=i;
        }
        else{
            odd++ ;
            k=i;
        }
    }
    if (odd>even)
    {
        cout<<j+1<<endl;

    }
    else{

        cout<<k+1<<endl;
    }



}
