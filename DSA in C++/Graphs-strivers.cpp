// Bfs of the graph

#include <iostream>
    using std::cout;
#include <vector>
    using std::vector;
#include <queue>
    using std::queue;


void bfsHelper( int startNode , vector<int>& vis, vector<int>& ans , vector<vector<int>>& adj)
{
    // compute bsf of connected graph

    queue<int> q; // for bfs. explore the way its visted

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
    // for each connected componeent run bfs with bfs helper.

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

    vector<int> result = bfsOfGraph(v, adj);

    for( int node : result)
    {
        cout << node << " ";
    }


}

