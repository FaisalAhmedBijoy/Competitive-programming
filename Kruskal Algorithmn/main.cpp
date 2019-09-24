#include <iostream>
#include <vector>
#include <utility>
#include <fstream>
#include <algorithm>
#include <list>
#include <stdlib.h>
#include <iterator>


using namespace std;

int parent[100] ;
int find_set(int x)
{
    if (parent [x]==x)
        return x ;
    else
        return find_set( parent[x] ) ;
}
int unite (int x,int y)
{
    int fx=find_set(x) ;
    int fy=find_set(y) ;
    parent[fy] = fx ;
    return 0 ;
}

int main()
{
    int totalnode,totaledge,node1,node2,weight ;
    ifstream input("input.txt") ;
    if (input.is_open())
    {
        cout<<"File Open "<<endl;
        input>>totalnode >>totaledge ;
        vector < pair <int, pair<int,int> > >edges ;
        for (int i=1 ; i<=totalnode ; i++)
        {
            parent[i] =i ;
        }

              for (int i=1; i<=totaledge ; i++)
  {
            input >>node1>>node2 >>weight ;
            edges.push_back(make_pair(weight,make_pair(node1,node2)) ) ;
        }

        sort(edges.begin(),edges.end()) ;

        int mst_edge =0,mst_weight=0,edge_count=0 ;
        while (mst_edge<totaledge -1  || edge_count<totaledge )
        {

            node1 =edges[edge_count].second.first ;
            node2 =edges [edge_count].second.second ;
            weight =edges[edge_count].first ;
            if (find_set(node1) != find_set(node2))
            {
                mst_weight += weight;
                cout<<node1<<" "<<node2 <<" "<<weight<<endl;
                unite(node1,node2 );
                mst_edge ++ ;

            }
            edge_count ++ ;


        }
        cout<<"Minimum Weight "<<mst_weight<<endl;

    }
    else
    {
        cout<<"File Not Open "<<endl;
    }


    return 0;
}
