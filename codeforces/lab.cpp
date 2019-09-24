#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,n ;
    cin>>n ;
    float ara[10][10],x[10] ;
    float temp,big, sum,Err ;

    for (i=1 ; i<=n; i++)
    {
        for (j=1 ; j<=n+1 ; j++ )
        {
            cin>>ara[i][j] ;
        }
    }
    for (i=1; i<=n; i++)
    {
        x[i]=0 ;
    }
    do
    {
        big=0 ;
        for (i=1 ; i<=n; i++)
        {
            sum=0 ;
            for (j=1 ; j<=n; j++)
            {
                if (j!=i)
                {
                    sum =sum + ara[i][j]*x[j] ;
                }
            }
            temp = (ara[i][n+1] ) /ara[i][i] ;
            Err =fabs(x[i] - temp) ;
            big =Err ;
            x[i] =temp ;

        }
    }
    while (big >=.0001) ;
    for (i=1 ; i<=n; i++)
    {
        cout<<x[i]<<endl;
    }
}
