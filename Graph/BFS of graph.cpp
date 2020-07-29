//https://practice.geeksforgeeks.org/problems/bfs-traversal-of-graph/1
//Using queue Time complexity : O(n)

#include <bits/stdc++.h>

using namespace std;

void bfs(int s, vector<int> g[], vector<bool> &vis, int N);

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N, E;
        cin >> N >> E;
        vector<int> adj[N];
        vector<bool> vis(N, false);
        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
        }
        bfs(0, adj, vis, N);
        cout << endl;
    }
}// } Driver Code Ends


/* You have to complete this function*/

/* Function to do BFS of graph
*  adj[]: array of vectors
*  vis[]: array to keep track of visited nodes
*/
void bfs(int s, vector<int> g[], vector<bool> &vis, int N) {

    // Your code here
    queue<int>q;
    //pushing the starting node to queue and making it as visited node
    q.push(s);
    vis[s] = true;
    
    while(!q.empty())
    {
        //popping the first element out of queue and printing it 
        int k = q.front();
        q.pop();
        cout<<k<<" ";
        
        /*loop through the adj list of the current element from vector
            and push elements into queue if they are not already visited*/
        for(auto i = g[k].begin();i!=g[k].end();i++)
        {
            if(!vis[*i]){
                q.push(*i);
                vis[*i] = true;
            }
        }
    }
}