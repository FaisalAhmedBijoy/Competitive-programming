#include<iostream>
using namespace std;
int DP[100]= {-1} ;


int counter1=0 ;
int counter2=0 ;
int F( int n )
{
    if( n == 0 )
        return 0;
    if( n == 1 )
        return 1;
    if( DP[n]!=-1 )
        return DP[n];
    else
    {
        DP[n] = F( n-1 ) + F( n-2 );
        return DP[n];
    }
}
int main()
{

    int n ;
    cin>>n ;
    DP[0]=0 ;
    DP[1] =1 ;
    for (int i=0 ; i<n; i++)
    {
        counter2++ ;

        int result=F (i) ;
        cout<<result<<"  ";
    }
    for (int i=0 ;i<n;i++)
    {
        cout<<DP[i]<<"  ";
    }
    cout<<endl;
    cout<<"Counter 1 : "<<counter1<<endl;
    cout<<"Counter 2 : "<<counter2<<endl;
    cout<<"Total : "<<counter1+counter2<<endl;

}
