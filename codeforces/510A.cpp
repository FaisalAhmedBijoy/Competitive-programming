#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,i,j,k=1 ;
    bool p=true;
    cin>>n>>m ;
    for (i=1;i<=n;i++)
    {

        for (j=1 ;j<=m;j++)
        {


            if (i%2 !=0){
                cout<<"#";
            }
            else
            {
                if(p == true)
                {
                            if (j==m){
                            p=false ;
                            cout<<"#" ;


                            }
                            else
                            {
                                cout<<"." ;
                            }
                }

                else{


                            if (j==1){
                                    p=true ;
                                cout<<"#" ;

                            }
                            else
                            {
                                cout<<"." ;
                            }
                }
          }

        }
             cout<<endl;
    }
}


