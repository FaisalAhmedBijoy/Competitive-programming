#include<bits/stdc++.h>
using namespace std;
int main()
{
    int ara[5][5] ;
    int i,j,x,y ;
    for (i=0 ;i<5;i++)
    {
        for (j=0 ;j<5;j++)
        {
            cin>>ara[i][j] ;

        }
    }
    for (i=0 ;i<5;i++)
    {
        for (j=0 ;j<5;j++)
        {
            if (ara[i][j] == 1)
            {
                x=i ;
                y=j ;
            }

        }
    }
    cout<<abs(x-2) + abs(y-2) ;

}
