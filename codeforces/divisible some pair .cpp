
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,i,j,k,a,count=0;
    cin>>t>>k ;
    vector <int>v;
    for (i=0;i<t;i++)
    {
        cin>>a;
        v.push_back(a);


    }
    for (i=0 ;i<t;i++)
    {
        for(j=i+1;j<t;j++)
        {
            if ((v[i]+v[j]) %k==0)
            {
                //cout<<(v[i]+v[j])<<"%"<<k<<endl;
              //  cout<<"count "<<count<<endl;
                count++;
            }
        }
    }
    cout<<count<<endl;
}
