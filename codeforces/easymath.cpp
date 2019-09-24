#include<bits/stdc++.h>
using namespace std ;
int main()
{

    int t,i,j,k,n,a ;
    cin>>t;
    for (i=0;i<t;i++)
    {
        cin>>n ;


        map<int,int>m ;
        map<int,int>::iterator it;
        int value =0;
        int maxcount=0 ;
        for (j=0 ;j<n;j++)
        {
            cin>>a;
            m[a]++ ;


        }
        for (it=m.begin();it!=m.end();it++)
        {

           // cout <<it->first<<" : "<<it->second<<endl;
            if (it->second>maxcount)
            {
                value=it->first ;
                maxcount=it->second ;
            }

        }
       // cout<<"Value : "<<value<<"Max count "<<maxcount<<endl;
       cout<<value<<" "<<maxcount<<endl;


    }
}
