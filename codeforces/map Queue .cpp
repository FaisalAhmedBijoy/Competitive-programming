#include<bits/stdc++.h>
using namespace std;
int main()
{
    map <string,int> m;
    map <string,int> ::iterator it ;
    int t,c,i,j,x ;
    string name ;
    int mark,temp ;
    cin>>t ;
    //  while (t--)
    for (i=0; i<t; i++)
    {
        cin>>c ;
        if (c==1)
        {
            cin>>name>>mark ;

            m[name]=m[name]+mark ;
        }
        else if (c==2)
        {
            cin>>name ;
            it=m.find(name) ;
            if (it!=m.end())
            {
                m.erase(it) ;
            }

        }
        else if (c==3)
        {
            cin>>name ;
            it=m.find(name) ;
            if (it!=m.end())
            {
                cout<<m[name]<<endl ;
            }
            else
            {
                cout<<0<<endl;
            }


        }

    }
}
