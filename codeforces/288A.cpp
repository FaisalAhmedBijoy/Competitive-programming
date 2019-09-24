#include<bits/stdc++.h>
using namespace std;
int main()
{
    set<int >s;
    int a ;
    for (int i=0;i<4;i++)
    {
        cin>>a ;
        s.insert(a);
    }
    cout<<4-s.size()<<endl;

}
