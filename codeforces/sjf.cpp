#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,num,bt[10],wt[10],tat[10],avwt=0,avtat=0;
    cout<<"Enter The process number"<<endl;
    cin>>num;
    cout<<"Enter burst time"<<endl;
    for (i=0; i<num; i++)
    {
        cin>>bt[i];
    }
    wt[0]=0;
    for (i=1; i<num; i++)
    {
        wt[i]=0;
        for (j=0; j<i; j++)
        {

            wt[i]=wt[i]+bt[j];
            avwt+=wt[i];
        }
    }
    cout<<"process  waiting time "<<endl;
    for (i=0;i<num;i++)
    {
        cout<<"Process : "<<i<<"  "<<wt[i]<<endl;
    }
    cout<<"avg waiting time : "<<avwt/num<<endl;


    for (i=0;i<num;i++)
    {
        tat[i]=wt[i] +bt[i];
        avtat+=tat[i];
    }
     cout<<"process  turn around  time "<<endl;
    for (i=0;i<num;i++)
    {
        cout<<"Process : "<<i<<"  "<<tat[i]<<endl;
    }
    cout<<"avg turn around time : "<<avtat/num<<endl;


}
