#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    vector<int>v1 ;
    vector<int>v2 ;
    int a,b;
    cin>>n;
    for (int i=0 ;i<n;i++)
    {
        cin>>a>>b;
        v1.push_back(a) ;
        v2.push_back(b);


    }
    int count=0;
    for (int i=0 ;i<n;i++)
    {
        for (int j=0 ;j<n;j++)
        {
            if (v1[i] == v2[j])
            {
                count++ ;
            }
        }
    }
    cout<<count<<endl;

}
