#include <iostream>
#include <vector>
#include <fstream>
#include <queue>

using namespace std;

int totalnode,node1,node2,weight;
vector < vector<pair<int,int> > >AdjList (1000) ;
vector <int>visited ;
priority_queue <pair <int,pair< int,int> > >pq ;
int process (int vtx)
{
    visited[vtx]=1 ;
    for (int j=0 ; j<AdjList[vtx].size() ; j++)
    {
        pair <int,int >v =AdjList [vtx][j] ;

        if (!visited[v.first])
        {
            pq.push(make_pair(- v.second,make_pair(-v.first,-vtx))) ;
        }
    }



    return 0 ;
}
int main()
{
    cout<<"\t Prim's Algorithm"<<endl<<endl;

    ifstream input("input.txt") ;
    if (input.is_open())
    {
       // cout<<"File Open "<<endl;
        input>>totalnode ;
        while (input>>node1>>node2>>weight)
        {
            AdjList[node1].push_back(make_pair(node2,weight)) ;
            AdjList[node2].push_back(make_pair(node1,weight)) ;

        }

        int c=0 ;
        int cost=0 ;
        cout<<"Node 1 -> : [Node 2 ,Cost ] "<<endl<<endl;
        for (int i=0;i<totalnode ;i++)
        {
            cout<<c <<" -> : ";
            for (int j=0 ;j<AdjList[i].size() ;j++)
            {
                pair <int,int >v =AdjList[i][j] ;
                cout<<"[ "<<v.first<<" ,"<<v.second<<" ] ->" ;
                cost +=v.second ;
            }
            c++ ;
            cout<<endl;
        }
        cout<<endl<<endl<<"Without Prim's Algorithm Total Cost "<<cost<<endl<<endl;



        visited.assign(totalnode,0) ;
        int source ;
        cout<<"Enter the Source "<<endl;
        cin>>source ;
        process(source) ;

        int mst_cost =0 ;
        cout<<"Node 1->[Node 2,Cost]"<<endl;
        while (!pq.empty())
        {
            pair <int,pair< int,int> > frnt =pq.top() ;
            pq.pop() ;
            int v,w,u;
            v=-frnt.second.first,w=-frnt.first,u=-frnt.second.second ;
            if (!visited[v])
            {
                mst_cost +=w ;
                cout<<u<<" -> [ "<<v<<" , "<<w<<"] " ;
                process(v) ;
            }
            cout<<endl;
        }
        cout<<"MST Cost "<<mst_cost<<endl;

    }
    else
    {
        cout<<"File Not Open "<<endl;
    }

    return 0;
}
