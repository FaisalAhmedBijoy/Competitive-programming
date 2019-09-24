
#include <iostream>
#include <fstream>
#include <vector>
#include <queue>

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
        queue<int>p;
        int source;
        cout<<"Enter the source:"<<endl;
        cin>>source;
        p.push(source);
        visited[source]=1;

        ofstream output("output.txt");
        while(!p.empty())
        {
            int u=p.front();
            output<<u<<" ";
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
        output.close();
    }
    else{
        cout<<"Input File not opened"<<endl;
    }
    input.close();
    return 0;
}
