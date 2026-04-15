
/*
Feature	Adjacency List	Adjacency Matrix
Code	vector<vector<int>> adj(n);	vector<vector<int>> adj(n, vector<int>(n,0));
Storage	Only neighbors	Full grid
Space	O(n + e)	O(n²)
Edge check	Slower	O(1)
Traversal	Fast	Slower
Best for	Sparse graphs	Dense graphs

*/



/* STORING A MATRIX */

#include<iostream>
using namespace std;
int main(){
    // where n and m are no. of nodes and edges respectively
    // where u and v are nodes representing edges

 int n,m;
 cout<<"enter nodes and edges";
 cin>>n>>m;
 int adj[n+1][n+1];
 for(int i=0;i<m;i++){
    int u,v;
    cout<<"enter nodes with edges";
    cin>>u>>v;
    adj[u][v]=1;
    adj[v][u]=1;
 }   
}
// see directed graph case too
 
// space used ==N*N

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout << "Enter no. of nodes: ";
    cin >> n;

    vector<vector<int>> adj(n, vector<int>(n, 0)); // initialize with 0

    cout << "Enter number of edges: ";
    int o;
    cin >> o;

    for(int i = 0; i < o; i++) {
        cout << "Enter edge (u v): ";
        int x, y;
        cin >> x >> y;

        adj[x][y] = 1;
        adj[y][x] = 1; // remove this line for directed graph
    } 

//=================================================================================
// ADJACENT LIST
#include<iostream>
#include <vector>
using namespace std;
int main(){
    // where n and m are no. of nodes and edges respectively
    // where u and v are nodes representing edges

 int n,m;
 cout<<"enter nodes and edges";
 cin>>n>>m;
 vector<int>adj[n+1];
for(int i=0;i<m;i++){
   int u,v;
   cin>>u,v;
   adj[u].push_back(v);
   adj[v].push_back(u);
}
//if we have a directed graph (( adj[v].push_back(u);)) will not be used

}



// vector<vector<int>> based
int n, m;
cin >> n >> m;

vector<vector<int>> adj(n);

for(int i = 0; i < m; i++) {
    int u, v;
    cin >> u >> v;

    adj[u].push_back(v);
    adj[v].push_back(u); // remove this line for directed graph
}


🔹 2. Weighted Graph
✅ Using pair
vector<vector<pair<int,int>>> adj(n);

// u -> v with weight w
adj[u].push_back({v, w});
adj[v].push_back({u, w}); // for undirected
// =======================================================================================================


// GRAPH CAN BE BROKEN DOWN INTO DIFEERENT COMPONENTS
// SO FOR THIS WE MAINTAIN A VISITED ARRAY WHILE USING ANY TRAVERSAL


class Solution {
private:
    void dfs(int node, vector<vector<int>> &adjls, vector<int> &vis) {
        vis[node] = 1;
        for(auto it : adjls[node]) {
            if(!vis[it]) {
                dfs(it, adjls, vis);
            }
        }
    }

public:
    int numProvinces(vector<vector<int>> adj, int V) {
        vector<vector<int>> adjls(V);

        for(int i = 0; i < V; i++) {
            for(int j = 0; j < V; j++) {
                if(adj[i][j] == 1 && i != j) {
                    adjls[i].push_back(j);
                }
            }
        }

        vector<int> vis(V, 0);
        int cnt = 0;

        for(int i = 0; i < V; i++) {
            if(!vis[i]) {
                cnt++;
                dfs(i, adjls, vis);
            }
        }

        return cnt;
    }
};




// =========================================================================================
// BFS==levelwise traversal
// REMEMBER WE NEED THING WHILE TRAVERSING (queue ),(VISITED ARRAY),  (ANS ARRAY) 



vector<int> bfsofgraph(int v, vector<int> adj[]) {
    vector<int> vis(v, 0);   // visited array
    vector<int> ans;         // answer
    queue<int> q;
    int start=0;

    vis[start] = 1;   // start from node 0
    q.push(0);

    while (!q.empty()) {
        int node = q.front();
        q.pop();

        ans.push_back(node);

        for (auto it : adj[node]) {
            if (vis[it] == 0) {
                vis[it] = 1;
                q.push(it);
            }
        }
    }

    return ans;
}





// sc==O(n)
// tc=o(n)+o(2E)

// ======================================================

// dfs


 class Solution {
private:
    void dfs(int node, vector<int> adj[], vector<int> &vis, vector<int> &ls) {
        vis[node] = 1;                 // mark visited
        ls.push_back(node);            // store in result

        // traverse all its neighbours
        for (auto it : adj[node]) {
            if (vis[it]==0) {
                dfs(it, adj, vis, ls);
            }
        }
    }

public:
    // Function to return a list containing the DFS traversal of the graph
    vector<int> dfsOfGraph(int V, vector<int> adj[],int start) {
        vector<int>vis(V,0)           // visited array
        vector<int> ls;                // result list

        dfs(start, adj, vis, ls);      // call helper function
        return ls;                     // return the traversal
    }
};



// ====================================================================
// changing adjacency matrix two adjacncy list

vector<vector<int>> adjList(V);

for(int i = 0; i < V; i++) {
    for(int j = 0; j < V; j++) {
        if(adj[i][j] == 1 && i != j) {
            adjList[i].push_back(j);
        }
    }
}