#include <bits/stdc++.h>
using namespace std;
bool isdigit(char x)
{
    if(x>='0' && x<='9')
        return true;
    return false;
}
int main()
{
    string s1,s2,s3,tmp;
    double a11=0,a12=0,a13=0,d1=0,a21=0,a22=0,a23=0,d2=0,a31=0,a32=0,a33=0,d3=0;
    cin>>s1>>s2>>s3;
    double x,y=0,z=0;
    for(int i=s1.size(); i>=0; i--)
    {
        if(isdigit(s1[i]))
        {
            int fact=1,num=0;
            while(isdigit(s1[i]))
            {
                num+=(s1[i]-'0')*fact;
                fact*=10;
                i--;
            }
            if(s1[i]=='-')
                num*=-1;
            if(!d1)

    for(int i=s2.size(); i>=0; i--)
                {
                    if(isdigit(s2[i]))
                    {
                        int fact=1,num=0;
                        while(isdigit(s2[i]))
                        {
                            num+=(s2[i]-'0')*fact;
                            fact*=10;
                            i--;
                        }
                        if(s2[i]=='-')
                            num*=-1;
                        if(!d2)
                        {
                            d2=(double)num;
                        }
                        else if(!a23)
                        {
                            a23=(double)num;
                        }
                        else if(!a22)
                        {
                            a22=(double)num;
                        }
                        else if(!a21)
                        {
                            a21=(double)num;
                        }
                    }
                }
            cout<<a21<<" "<<a22<<" "<<a23<<" "<<d2<<endl;

        }
