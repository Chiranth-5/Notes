// Bfs of the graph

#include <iostream>
    using std::cout;
    using std::endl;
#include <vector>
    using std::vector;
#include <queue>
    using std::queue;



void bfsHelper( int startNode , vector<int>& vis, vector<int>& ans , vector<vector<int>>& adj)
{
    // 1.bfs of each node. Push all neigbours to queue and do bfs on each node in the queuue till its empty.
    

    queue<int> q; 

    vis[startNode] = 1;
    q.push(startNode);

    while( !q.empty())
    {
        int curr = q.front();
        q.pop();
        ans.push_back(curr);

        // add the niegbours to queue
        vector<int> niegbour = adj[curr];

        for( int node : niegbour)
        {
            if(vis[node ] == 0)
            {
                //not visted
                vis[node ] = 1;
                q.push( node);
            }
        }

    }


}


vector<int> bfsOfGraph( int v, vector<vector<int>> adj)
{
    // 1. Bfs of all disconnectd components.

    vector<int> vis(v,0);
    vector<int> ans;

    for( int node : vis)
    {
        if( vis[node] == 0) // not visited
        {
            bfsHelper( node, vis, ans, adj);
        }
    }

    return ans;
}

void dfsHelper( int startNode, vector<int>& vis , vector<int>& ans , vector<vector<int>>& adj )
{
    //1.mark as visited and push to ans.
    //2.depth first search of the start niegbour element
    vis[startNode] = 1;
    ans.push_back(startNode);

    vector<int> neighbour = adj[startNode];
    for( int node : neighbour)
    {
        if( vis[node] == 0) // not visited
        {
            dfsHelper( node, vis, ans, adj);
        }
    }
}


vector<int> dfsOfGraph( int v, vector<vector<int>> adj)
{
    // for each connected componeent run bfs with bfs helper.

    vector<int> vis(v,0);
    vector<int> ans;
    int startNode = 0;

    dfsHelper( startNode, vis, ans, adj);

    return ans;
}




int main()
{
    // graph  adjacency matrix representation
    int v = 5;
    vector<vector<int>> adj(v);

    adj[0] = {1, 2};
    adj[1] = {0, 3};
    adj[2] = {0, 4};
    adj[3] = {1};
    adj[4] = {2};

    vector<int> resultOfBfs = bfsOfGraph(v, adj);

    for( int node : resultOfBfs)
    {
        cout << node << " ";
    }

    cout<<endl<<endl;
    
    vector<int> resultOfDfs = dfsOfGraph(v, adj);

    for( int node : resultOfDfs)
    {
        cout << node << " ";
    }

}

