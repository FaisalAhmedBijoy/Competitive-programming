#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int  main()
{

    string a, b,c ;
    cin>>a>>b>>c ;
    double a[3],b[3],c[3],d[3] ;
    cout<<"Enter The Value "<<endl;


    for (int i=0 ; i<3 ; i++)
    {
        cout<<a[i]<<"x + "<<b[i]<<"y + "<<c[i]<<"z="<<d[i]<<endl;
    }
    double Error =.0001  ;
    double p1,q1,r1 ;
    double p2=0,q2=0,r2=0 ;
    double x,y,z;
    while (1)
    {

        p1= ((d[0] - b[0]*q2 -c[0]*r2)/a[0] ) ;
        q1=(d[1] - p1*a[1] - r2*c[1])/b[1] ;
        r1= (d[2] - p1*a[2] - q1* b[2]) / c[2] ;
        x= abs(p1-p2) ;
        y=abs(q1-q2) ;
        z= abs(r1-r2) ;

        if (Error>x && Error >y && Error >z)
        {
            break ;
        }
        p2= p1 ;
        q2=q1 ;
        r2=r1 ;

    }
    cout<<"x = "<<p1<<endl<<"y = "<<q1<<endl<<"z = "<<r1<<endl;


}
