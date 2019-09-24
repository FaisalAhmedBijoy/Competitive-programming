#include<iostream>
using namespace std;
int counter1=0 ;
int counter2=0 ;
int fibo (int n)
{
    counter1++ ;
    if (n==0)
    {
        return 0 ;
    }
    else if (n==1)
    {
        return 1 ;
    }
    else
    {

        return fibo(n-1) + fibo(n-2) ;
    }
}
int main()
{

    int n ;
    cin>>n ;
    int f [100] ;
    f[0] =0 ;
    f[1] =1 ;

    for (int i=0 ; i<n; i++)
    {
        counter2++ ;

        int result=fibo (i) ;
        cout<<result<<"  ";
    }
    cout<<endl;
    cout<<"Counter 1 : "<<counter1<<endl;
    cout<<"Counter 2 : "<<counter2<<endl;
    cout<<"Total : "<<counter1+counter2<<endl;

}
