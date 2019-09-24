#include<bits/stdc++.h>
using namespace std;
int main()
{
     vector<pair<int ,int  > >v;
    int s,n,x,y;
    cin>>s>>n;
    for (int i=0;i<n;i++)
    {
        cin>>x>>y;
        v.push_back(make_pair(x,y)) ;
    }

    sort(v.begin(),v.end()) ;
    for (int i=0 ;i<n;i++)
    {
        if (s<v[i].first)
        {
            cout<<"NO"<<endl;
           return 0;
        }
        else
        {
            s=s+v[i].second;

        }

    }
    cout<<"YES"<<endl;
}
