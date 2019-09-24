#include<bits/stdc++.h>
using namespace std;
int main()
{
    set<int>s ;
    set<int >::iterator it ;
    int c ,t,x,f;
    cin>>t ;
    while (t--)
    {
        cin>>c ;
        if (c==1)
        {
            cin>>x ;
            s.insert(x);
        }
        else if (c==2)
        {
            cin>>f ;
            it=s.find(f) ;
            if (it!=s.end())
            {
                s.erase(it) ;
            }


        }
        else if (c==3)
        {
            cin>>f ;
            it=s.find(f) ;
            if (it!=s.end())
            {
                cout<<"Yes"<<endl;
            }
            else
            {
                cout<<"No"<<endl;
            }

        }
    }

}
