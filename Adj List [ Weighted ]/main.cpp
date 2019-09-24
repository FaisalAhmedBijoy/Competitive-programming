#include <iostream>
#include <fstream>
#include <vector>
#include <list>
#include <iterator>

using namespace std;
class edge
{
    int nodeid ;
    int weight ;
public :
    edge(int id ,int wt)
    {
        nodeid =id ;
        weight =wt ;
    }
    int getnodeid()
    {
        return nodeid ;
    }
    int getweight()
    {
        return weight ;
    }
};
int main()
{
    int totalnode,node1,node2,weight ;
    ifstream input("input.txt") ;
    ofstream output ("AdjListWt.txt") ;
    if (input.is_open())
    {
        cout<<"File open"<<endl;
        input>>totalnode ;
        vector <list<edge> >AdjList (totalnode) ;
        while (input>>node1>>node2>>weight )
        {
            AdjList[node1-1].push_back(edge(node2,weight)) ; //Scan Complete all The Values

        }
        //Now print all The values in list by using list of object with Vector

        vector <list <edge> >::iterator it ;
        int c=1 ;
        for (it=AdjList.begin() ; it!= AdjList.end() ;it++)
        {
            cout<<"Node "<<c<<" -> " ;
            output<<"Node "<<c<<" - > ";
            list <edge>li =*it ;
            list <edge> ::iterator itr;
            for (itr=li.begin() ; itr!=li .end() ;itr++)
            {
                cout<<"[ "<<(*itr).getnodeid()<<", "<<(*itr). getweight()<<"] -> " ;
                 output<<"[ "<<(*itr).getnodeid()<<", "<<(*itr). getweight()<<"] -> " ;
            }
            cout<<endl;
            output<<endl;
            c++ ;
        }
    }
    else
    {
        cout<<"File Not Open"<<endl;
    }
    return 0;
}
