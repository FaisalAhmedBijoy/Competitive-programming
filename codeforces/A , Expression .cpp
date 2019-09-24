#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;

    cin>>a>>b>>c;
    int ara[6] ;
    ara[0]=a+b+c;
    ara[1] =a*b*c;
    ara[2]=a+(b*c) ;
    ara[3] =a* (b+c) ;
    //ara[4]=(a*c)+b;
   // ara[5]=(a+c)*b;
    ara[4]=a*b+c;
    ara[5]=(a+b)*c ;
   /*
    cout<<endl;
    for (int i=0; i<8; i++)
    {
        cout<<ara[i]<<"  ";
    }
    cout<<endl;
    */
    sort(ara,ara+6) ;
     /*cout<<endl;
    for (int i=0; i<8; i++)
    {
        cout<<ara[i]<<"  ";
    }
    cout<<endl;
    */
    cout<<ara[5] ;


}
