#include<bits/stdc++.h>
using namespace std;
// Supposing the maximum nodes that can be present in Graph are 10^5 + 1
vector<int> nodeNeighbour[100002];
bool isVisited[100002];

int main()
{
    int nodes;
    cin >> nodes;
    int edges;
    cin >> edges;
    for(int i = 0; i < nodes; i++)
    {
        isVisited[i + 1] = false;
        // minDistance[i] = -1;
    }
    // Our graph is ready by the end of this for loop
    for(int i = 0; i < edges; i++)
    {
        int u, v;
        cin >> u >> v;
        nodeNeighbour[u].push_back(v);
        nodeNeighbour[v].push_back(u);
    }
    int startNode;
    cin >> startNode;
    stack<int> s;
    s.push(startNode);
    while(!s.empty())
    {
    	int popped = s.top();
    	isVisited[popped] = true;
    	s.pop();
    	for(int n: nodeNeighbour[popped])
    	{
    		if(!isVisited[n])
    			s.push(n);
    	}
    }
    int counter = 0;
    for(int i = 1; i <= nodes; i++) {
    	if(!isVisited[i])
    		counter++;
    }
    cout << counter << endl;
    return 0;
}
