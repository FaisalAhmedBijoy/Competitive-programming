#include<bits/stdc++.h>
using namespace std;

int allocation[10][10],available[10],maxmat[10][10],need[10][10],work[10],finish[10],process[10] ;

int main()
{
    int n,m,i,j;
    cout<<"Banker's algorithm"<<endl;
    cout<<"Enter The process number"<<endl;
    cin>>n;
    cout<<"Enter The resource number"<<endl;
    cin>>m;

    //Allocation matrix
    cout<<"Enter the allocation matrix"<<endl;
    for (i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            cin>>allocation[i][j];

        }
    }
    cout<<"Allocation matrix"<<endl;
    for (i=0; i<n; i++)
    {
        for (j=0; j<m; j++)
        {
            cout<<allocation[i][j]<<" ";
        }
        cout<<endl;

    }

    //Max matrix
    cout<<"Enter the Max matrix"<<endl;
    for (i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            cin>>maxmat[i][j];

        }
    }
    cout<<"Max  matrix"<<endl;
    for (i=0; i<n; i++)
    {
        for (j=0; j<m; j++)
        {
            cout<<maxmat[i][j]<<" ";
        }
        cout<<endl;

    }
    //Need Matrix calculation
    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            //Need=Max-allocation
            need[i][j]= maxmat[i][j]-allocation[i][j];
        }
    }
    cout<<"Need  matrix"<<endl;
    for (i=0; i<n; i++)
    {
        for (j=0; j<m; j++)
        {
            cout<<need[i][j]<<" ";
        }
        cout<<endl;

    }
    //Available Matrix
    cout<<"Enter the available matrix "<<endl;
    for (i=0; i<m; i++)
    {
        cin>>available[i];

    }
    cout<<"Available matrix "<<endl;
    for(i=0; i<m; i++)
    {
        cout<<available[i]<<endl;

    }
    //work matrix calculation
    for(i=0; i<m; i++)
    {
        work[i]=available[i];
    }
    int k=0;
    int sum=0;
    for (i=0; sum<n; i++)
    {

        i=i%n;
        if(finish[i] == 0)
        {
            bool nibo=1;

            for(j=0; j<m; j++)
            {

                if(need[i][j]>work[j])
                {
                    nibo=0;
                    break;
                }
            }
            if(nibo)
            {
                process[k]=i;
                k++;
                sum++;
                for(j=0; j<m; j++)
                {
                    work[j]=work[j]+allocation[i][j];


                }
                finish[i]=1;
            }

        }
    }

    cout<<"Final work matrix"<<endl;
    for (i=0; i<m; i++)
    {
        cout<<work[i]<<" ";
    }
    cout<<endl;

    cout<<"Sequence process matrix "<<endl;
    for(i=0; i<n; i++)
    {
        cout<<"P"<<process[i]<<" -> ";

    }
    cout<<endl;




}
/*
5
4
0 0 1 2
1 0 0 0
1 3 5 4
0 5 3 2
0 0 1 4
0 0 1 2
1 7 5 0
2 3 5 6
0 6 5 2
0 6 5 6
1 5 2 0
*/
