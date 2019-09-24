#include <iostream>
#include <vector>
#include <fstream>
#include <queue>
#define INF 100000000

using namespace std;

int totalnode,node1,node2,weight ;
vector <vector<pair<int,int> > >AdjList (100) ;
vector <int> parent ;
vector <int> distance ;
priority_queue <int>pq ;

int main()
{
    cout << "Dijkstra" << endl;
    ifstream input("Test.txt") ;
    if (input.is_open())
    {
        cout<<"File Open "<<endl;
        input>>totalnode ;
        while (input>>node1>>node2>>weight)
        {
            AdjList[node1].push_back(make_pair(node2, weight )) ;

        }
        int c= 0 ;
        for (int i=0 ; i<totalnode ; i++)
        {
            cout<<c<<"  -> ";
            for (int j=0 ; j<AdjList[i].size() ; j++)
            {
                pair <int,int > v =AdjList[i][j] ;
                cout <<" [ "<<v.first<<","<<v.second<<" ] " ;
            }
            c++ ;
            cout<<endl;
        }
        parent.assign(totalnode,-1) ;
        distance.assign(totalnode,INF) ;
        int source ;
        cout <<"Enter Source node "<<endl;
        cin>>source ;
        distance[source] =0 ;
        pq.push(make_pair(-0,-source)) ;

        while (pq.empty())
        {
            pair <int,int > frnt ;
            frnt=pq.top() ;
            pq.pop() ;

            int d,v ;
            d=-frnt.first, v=-frnt.second ;
            if (d>distance[v])
            {
                continue ;
            }
            for (int i=0 ; i<AdjList[u].size(); i++)
            {
                pair <int,int > v= AdjList [u][i] ;
                if (distance[u] +v.second < distance [v.first])
                {
                    distance [v.first] = distance [u] + v.second ;
                    parent [v.first] =u ;
                    pq.push( make_pair(  -distance[v.first], -v.first )) ;
                }
            }

        }
        int des ;
        cout<<"Enter the Destination "<<des ;
        cin>>des ;
        cout<<"Cost : "<<distance[des] <<endl;
        //  pathfind (des) ;
        return 0 ;



    }
    else
    {
        cout<<"File Not Open "<<endl;
    }


    return 0;
}
