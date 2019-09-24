#include <iostream>
#include <fstream>
#include <vector>
#include<list>
#include<iterator>

using namespace std;

int main()
{
    int totalnode,node1,node2 ;
    ifstream input ;//("test.txt") ;
    input.open("input.txt") ;
    ofstream output ("LIST.txt") ;

    if (input)
    {
        cout<<"File open"<<endl;
        input>>totalnode ;
        vector < list<int> >AdjList(totalnode) ;
        while (input>>node1>>node2)
        {
            AdjList[node1].push_back(node2) ;

        }
        vector < list<int> > ::iterator it ;
        int c=0 ;
        for (it=AdjList.begin() ; it!=AdjList.end() ; it++)
        {
            cout<<c<<"->" ;
            output<<c<<"->" ;
            list <int >li=*it ;
            list <int >::iterator itr ;
            for (itr=li.begin() ; itr!=li.end() ; itr++)
            {
                cout<<*itr<<" " ;
                output<<*itr<<" ";
            }
            cout<<endl;
            output<<endl;
            c++ ;

        }


    }
    else
    {
        cout<<"File Not Open "<<endl;
    }

    return 0;
}
