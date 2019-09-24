#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n ;
   cin>>n;
   for (int i=0 ;i<n;i++)
   {


    char s[100] ;
    scanf("%s",s);
    int x=strlen(s) ;
    if (x<=10)
    {
        cout<<s<<endl; ;
    }
    else
    {


    cout<<s[0]<<x-2<<s[x-1] <<endl;
    }
   }
}
