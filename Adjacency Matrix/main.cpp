#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    int TotalNode,node1,node2,weight ;
    int AdjMatrix[10][10]= {0} ;
    ifstream input("input.txt") ;
    if (input.is_open())
    {
        cout<<"File Open "<<endl;
        input>>TotalNode ;
        while (input>>node1>>node2>>weight)
        {
            AdjMatrix[node1][node2] = weight ;

        }

        ofstream output ;
        output.open("AdjMatrix.txt") ;
        if (output.is_open())
        {
            cout<<"Output File Created "<<endl;

            for (int i=1; i<=TotalNode ; i++)
            {
                for (int j=1 ; j<=TotalNode ; j++)
                {
                    output<<AdjMatrix[i][j]<<"  " ;
                    cout<<AdjMatrix[i][j]<<"  ";
                }
                cout<<endl;
                output<<endl;
            }
        }
        else
        {
            cout<<"Not File Created "<<endl;
        }
    }
    else
    {
        cout<<"Can't Open "<<endl;
    }

}

