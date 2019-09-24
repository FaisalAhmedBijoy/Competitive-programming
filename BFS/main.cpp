#include <iostream>
#include <fstream>
#include <vector>
#include <list>
#include <iterator>

using namespace std;

class nodeproperty
{
public :
    int nodeid ;
    char colour ;
    int distance ;
    int parent ;
    nodeproperty (int id,char c,int d,int p)
    {
        nodeid =id ;
        colour =c ;
        distance =d ;
        parent =p ;
    }
};

vector <nodeproperty> node ;
vector <int >path ;
int setnodeproperty (int nid,char c, int d,int p)
{
    vector <nodeproperty> ::iterator it ;
    for (it=node.begin() ; it!= node.end() ; it++)
    {
        advance(it,nid) ;
        (*it).colour=c ;
        (*it).distance= d;
        (*it).parent=p ;
        break ;
    }
    return 0 ;
}
int  isvisited (int v)
{

    vector <nodeproperty>::iterator i;
    for (i=node.begin() ; i!=node.end(); i++)
    {
        advance(i,v) ;
        if ((*i).colour !='W')
        {
            return true ;
        }
        else
        {
            return false ;
        }

    }
    return 0 ;
}

int  distanceofU(int u)
{
    vector <nodeproperty>::iterator i;
    for (i=node.begin() ; i!=node.end(); i++)
    {
        advance(i,u) ;
        return (*i).distance ;

    }
    return 0 ;
}

int  colourchanceofU(int u)
{
    vector <nodeproperty>::iterator i;
    for (i=node.begin() ; i!=node.end(); i++)
    {
        advance(i,u) ;
        (*i).colour='B' ;
        break ;

    }
    return 0 ;
}
int despath(int nid)
{
    vector <nodeproperty>::iterator i ;
    for (i=node.begin() ;i!=node.end();i++)
    {
        advance( i,nid) ;
        return (*i).parent ;
    }
}
int searchpath(int des)
{
    vector <nodeproperty>::iterator i;
    for (i=node.begin() ; i!=node.end(); i++)
    {
        advance(i,des) ;
        cout<<"Destination "<<(*i).distance <<endl;;
       int parent=(*i).parent ;
       path.push_back(des) ;
       path.push_back(parent) ;
       while (1)
       {
           parent =despath(parent);
           if (parent == -1)
            break ;
           path.push_back(parent) ;
       }
       cout<<"Path "<<endl;
       for (int m=path.size();m>=0;m--)
       {
           cout<<path[m] ;
           if (m!=0)
           {
               cout<<" -> " ;
           }
       }
       break ;
    }
    return 0 ;
}


int BFS (vector <list <int> > AdjList,int  source  )
{
    setnodeproperty (source,'G',0,-1) ;
    int queuesize =AdjList.size() ;
    //cout<<queuesize;
    int nodequeue [queuesize] ;
    int insertpoint=0,deletepoint=0 ;
    nodequeue [insertpoint++]=source ;
    while (deletepoint !=queuesize)
    {
        int u =nodequeue [deletepoint++] ;
        vector <list<int> >::iterator i ;
        for (i=AdjList.begin(); i!= AdjList.end(); i++)
        {
            advance(i,u) ;
            list <int >li =*i ;
            list <int> ::iterator itr ;
            for (itr=li.begin(); itr!=li.end(); itr++)
            {
                bool visit=isvisited (*itr) ;
                if (!visit)
                {
                    //property Change
                    int d=distanceofU(*itr) ;
                    setnodeproperty(*itr,'G',d+1,u) ;
                    nodequeue[insertpoint++]=*itr ;
                }

            }
            colourchanceofU (u) ;
            break ;
        }
    }
    return 0 ;
}

int main()
{
    int totalnode,node1,node2 ;

    ifstream input("test.txt");
    if (input.is_open())
    {
        cout<<"File Open "<<endl;

        input >>totalnode ;
        vector <list <int> >AdjList (totalnode) ;

        while (input >>node1 >>node2)
        {
            AdjList[node1].push_back(node2) ;
        }
        input.close() ;

        for (int m=0 ; m<totalnode ; m++)
        {
            node.push_back(nodeproperty(m,'W',1000,-1)) ;
        }
        /*
        vector <nodeproperty> :: iterator it ;
        cout<<"Node Colour Distance Parent "<<endl<<endl;
        for (it=node.begin() ; it!=node.end() ; it++)
        {
            cout<<"[ "<<(*it).nodeid<<" , "<<(*it).colour<<" , "<<(*it).distance<<" , "<<(*it).parent<<" ]" ;
            cout<<endl;
        }
        */
        int source ;
        cout<<"Enter Source "<<endl;
        cin>>source ;
        BFS(AdjList,source) ;
        /*
           vector <nodeproperty> :: iterator it ;
           cout<<"Node Colour Distance Parent "<<endl<<endl;
           for (it=node.begin() ; it!=node.end() ; it++)
           {
               cout<<"[ "<<(*it).nodeid<<" , "<<(*it).colour<<" , "<<(*it).distance<<" , "<<(*it).parent<<" ]" ;
               cout<<endl;
           }

           */
        int destination ;
        cout<<"Enter The Destination "<<endl;
        cin>>destination ;
        searchpath(destination) ;





    }
    else
    {
        cout<<"File Not Open "<<endl;
    }


    return 0;
}
