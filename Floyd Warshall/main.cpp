#include <bits/stdc++.h>
#define INF 10000
using namespace std;

int AdjMatrix[100][100] ;
int Parent [100][100] ;
int pathfind (int source,int destination )
{
    //if (source != destination && AdjMatrix[source][destination] ==INF)
    //{
       // cout<<"Path Not Found "<<endl;
     //   return 0;
   // }

   if (source == destination)
    {
        cout<<"Path : "<<source ;
        return 0 ;
    }


    pathfind(source, Parent[source][destination]) ;
    cout<<" "<<destination;



}
int main()
{
    int totalnode,node1,node2,weight;
    ifstream input ("test.txt");
    if (input.is_open())
    {
        cout<<"File Open " <<endl;

        input>>totalnode ;

        for (int i=1 ; i<=totalnode; i++)
        {
            for (int j=1; j<=totalnode ; j++)
            {
                if (i==j)
                {

                    AdjMatrix[i][j] =0 ;
                }
                else
                {

                    AdjMatrix[i][j] =INF ;
                }

                Parent[i][j] = i;
            }
        }
        while (input >>node1>>node2>>weight)
        {
            AdjMatrix[node1][node2] =weight ;
        }
        cout<<"Distance Matrix "<<endl;
        for (int i=1; i<=totalnode ; i++)
        {
            for (int j=1; j<=totalnode ; j++)
            {
                cout<<AdjMatrix[i][j]<<"  ";
            }
            cout<<endl;
        }


        cout<<endl<<"Parent matrix "<<endl;
        for (int i=1; i<=totalnode ; i++)
        {
            for (int j=1; j<=totalnode ; j++)
            {
                cout<<Parent[i][j]<<"  ";
            }
            cout<<endl;
        }

        for (int k= 1; k<=totalnode ; k++)
        {
            for (int i= 1 ; i<=totalnode ; i++)
            {
                for (int j=1; j<=totalnode ; j++)
                {
                    if (AdjMatrix[i][k] + AdjMatrix[k][j] <AdjMatrix[i][j] )
                    {
                        AdjMatrix[i][j] =AdjMatrix [i][k] + AdjMatrix[k][j] ;
                        Parent [i][j] =AdjMatrix[k][ j] ;
                    }
                }
            }
        }
        int source,destination ;
        cout<<"Enter The Source  "<<endl;
        cin>>source ;
        cout<<"Enter The Destination "<<endl;
        cin>>destination ;
        cout<<"Cost : "<<AdjMatrix[source][destination] <<endl;

        pathfind (source,destination) ;
    }
    else
        cout<<"File Not Open "<<endl;

    return 0;
}
