#include <iostream>
#include <fstream>
#include<vector>
#include <queue>
#include <list>


using namespace std;

int totalnode,node1,node2,weight ;
vector < vector<pair<int,int> >  >AdjList(1000) ;
int main()
{
    cout << "Dijkstra Algorithm" << endl;
    ifstream input("test.txt") ;
    if (input.is_open())
    {
        cout<<"File Open "<<endl;
        input >>totalnode ;
        while (input >>node1>>node2>>weight)
        {
            AdjList[node1].push_back(make_pair(node2,weight)) ;
        }
        int c =0 ;
        for (int i=0 ;i<totalnode ;i++)
        {
                cout<<"Node : "<<c<<" -> " ;
            for (int j=0 ;j<AdjList[i].size();j++)
            {
                pair <int ,int> v =AdjList[i][j] ;
                cout<<" [ "<<v.first<<" ,"<<v.second<<" ] ";
            }
            cout<<endl;
            c++;
        }
    }
    else
        cout<<"File Not open "<<endl;

    return 0;
}
