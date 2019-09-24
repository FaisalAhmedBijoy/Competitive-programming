
#include<bits/stdc++.h>

using namespace std;

vector<int>adj[100];
int visited[100];



int main()
{
    ifstream input("input.txt");
    int a,b,n;
    if(input.is_open())
    {
        input>>n;
        for(int i=0; i<n; i++)
        {
            input>>a>>b;
            adj[a].push_back(b);
        }

        for (int i=0 ;i<adj.size();i++)
        {
            for (int j=0 ;j<adj[i].size();j++)
            {
                cout<<" "<<adj[i][j] ;
            }
            cout<<endl;
        }

        queue<int>p;
        int source;
        cout<<"Enter the source:"<<endl;
        cin>>source;
        p.push(source);
        visited[source]=1;


        while(!p.empty())
        {
            int u=p.front();

            p.pop();

            for(int i=0; i<adj[u].size(); i++)
            {
                if(visited[adj[u][i]]==0)
                {
                    int v=adj[u][i];
                    visited[v]=1;
                    p.push(v);
                }
            }
        }
        cout<<"Destination "<<endl;
        for (int j=0 ;j<10;j++)
        {
            cout<<adj[j]<<endl;
        }


    }
    else{
        cout<<"Input File not opened"<<endl;
    }

    return 0;
}
