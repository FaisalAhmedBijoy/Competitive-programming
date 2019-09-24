#include <iostream>
#include <fstream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int totalnode,node1,node2 ;
    int AdjMatrix[10][10] = {0} ;

    ifstream input("TEXT.txt") ;
    if (!input.eof())
    {
        cout<<"File Open"<<endl;
        input>>totalnode ;
        while(input>>node1>>node2)
        {
            AdjMatrix [node1][node2] =1 ;
        }

        ofstream output("AdjacencyMatrix.txt") ;
        if (output.is_open())
        {
            cout<<"Created "<<endl;
            for (int i=1 ; i<=totalnode ; i++)
            {
                for (int j=1 ; j<=totalnode ; j++)
                {
                    output<<AdjMatrix[i][j]<<" ";
                }
                output<<endl;
            }
        }
        else
        {
            cout<<"File Not Created"<<endl;
        }
        output.close() ;
    }
    else
    {
        cout<<"Can't Open "<<endl;
    }
}
