

// SHORTEST DISTANCE IN UNDIRECTED GRAPH with unit edges



vector<int>shortest_path(vector<vector<int>>& edges,int N,int M,int src){
vector<int>adj[N];

for(auto it:edges){
 adj[it[0]].push_back(it[1]);
 adj[it[1]].push_back(it[0]);
}

vector<int>distance(N,1e9)
distance[src]=0;

queue<int> q;

q.push(src);

while(!q.empty()){
int node=q.front();
q.pop();

for(auto it :adj[node]){
    if(dist[node]+1 < dist[it]){
        dist[it]=1+dist[node];
        q.push(it);
    }
}
vector<int>ans(N,-1)
for(int i=0;i<N;i++){
    if(dist[i]!=1e9){
        ans[i]=dist[i];
    }
}
return ans;
}}



// with modified adjacency list
vector<int> shortest_path(vector<vector<int>>& edges, int N, int M, int src) {
    
    vector<vector<int>> adj(N);

    for (auto it : edges) {
        adj[it[0]].push_back(it[1]);
        adj[it[1]].push_back(it[0]);
    }

    vector<int> dist(N, 1e9);
    dist[src] = 0;

    queue<int> q;
    q.push(src);

    while (!q.empty()) {
        int node = q.front();
        q.pop();

        for (auto it : adj[node]) {
            if (dist[node] + 1 < dist[it]) {
                dist[it] = dist[node] + 1;
                q.push(it);
            }
        }
    }

    vector<int> ans(N, -1);

    for (int i = 0; i < N; i++) {
        if (dist[i] != 1e9) {
            ans[i] = dist[i];
        }
    }

    return ans;
}  



// =======================================================================================
// SHORTEST PATH IN DIRECTED ACYCLIC GRAPH
class Solution {
  private:
    void topoSort(int node, vector < pair < int, int >> adj[],
      int vis[], stack < int > & st) {
      //This is the function to implement Topological sort. 
      vis[node] = 1;
      for (auto it: adj[node]) {
        int v = it.first;
        if (!vis[v]) {
          topoSort(v, adj, vis, st);
        }
      }
      st.push(node);
    }
  public:
    vector < int > shortestPath(int N, int M, vector < vector < int >> & edges) {

      //We create a graph first in the form of an adjacency list.
      vector < pair < int, int >> adj[N];
      for (int i = 0; i < M; i++) {
        int u = edges[i][0];
        int v = edges[i][1];
        int wt = edges[i][2];
        adj[u].push_back({v, wt}); 
      }
      // A visited array is created with initially 
      // all the nodes marked as unvisited (0).
      int vis[N] = {
        0
      };
      //Now, we perform topo sort using DFS technique 
      //and store the result in the stack st.
      stack < int > st;
      for (int i = 0; i < N; i++) {
        if (!vis[i]) {
          topoSort(i, adj, vis, st);
        }
      }
      //Further, we declare a vector ‘dist’ in which we update the value of the nodes’
      //distance from the source vertex after relaxation of a particular node.

      vector < int > dist(N);
      for (int i = 0; i < N; i++) {
        dist[i] = 1e9;
      }

      dist[0] = 0;
      while (!st.empty()) {
        int node = st.top();
        st.pop();

        for (auto it: adj[node]) {
          int v = it.first;
          int wt = it.second;

          if (dist[node] + wt < dist[v]) {
            dist[v] = wt + dist[node];
          }
        }
      }

      for (int i = 0; i < N; i++) {
        if (dist[i] == 1e9) dist[i] = -1;
      }
      return dist;
    }
};


// ===============================================================================
// ===============================================================================
// ===============================================================================
// ===============================================================================
// ===============================================================================
// ===============================================================================
//dijkstra algo
// shortest distance in weighted undirected graph
// so from a source node ,find the distance to every node
// dijkstra do not work if we have negative weighted edge
// it can be implemented using priority queue ,queue and set but set is the best


// using set

vector<int>dijkstra(int v,vector<vector<int>>adj[],int s){
  // s==>source
  set<pair<int,int>>st;
  vector<int>dist(v,1e9);
  st.insert({0,s});
  dist[s]=0;
  while(!st.empty()){
    auto it=*(st.begin())//9:50 seee
    int node=it.second;
    int dis=it.first;
    st.erase(it);
    for(auto it: adj[node]){
      int edgenode=it[0];
      int edgew=it[1];

      if(dis+edgew<dist[adjnode]){
        if(dis[adjnode]!=1e9){
          st.erase({dist[adjnode],adjnode});

          dis[adjnode]=dis+edgew;
          st.insert({dist[adjnode],adjnode});
        }
      }
    }
    return dist;
  }

}



//using priority queeu

#include <bits/stdc++.h>
using namespace std;

vector<int> dijkstra(int V, vector<vector<pair<int,int>>>& adj, int src) {
    
    priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;
    
    vector<int> dist(V, INT_MAX);
    
    dist[src] = 0;
    pq.push({0, src});
    
    while(!pq.empty()) {
        int d = pq.top().first;
        int node = pq.top().second;
        pq.pop();
        
        for(auto &it : adj[node]) {
            int adjNode = it.first;
            int weight = it.second;
            
            if(dist[node] + weight < dist[adjNode]) {
                dist[adjNode] = dist[node] + weight;
                pq.push({dist[adjNode], adjNode});
            }
        }
    }
    
    return dist;
}


// see why we use priority queue and not queue

// ================================================================================
// printing node for shortest path in weighted undirected graph where source and destination are given


// a little memorzation to remember where i am coming from


vector<int>shortestpath(int n,int m,vector<vector<int>>& edges){
  vector<pair<int,int>>& adj[n-1];
  for(auto it :edges){
    adj[it[0]].push_back({it[1],it[2]});
    adj[it[1]].push_back({it[0],it[2]});
  }
// or(better version)
// vector<vector<pair<int,int>>>adj(n);
// for(auto it:edges){
//   adj[it[0]].push_back({it[1],it[2]});
//   adj[it[1]].push_back({it[0],it[2]});
// }



  priority_queue<pair<int ,int>,vector<pair<int,int>,greater<pair<int,int>>>;
  vector<int>dist(n-1,1e9),parent(n+1);
  dist[1]=0;
  while(!pq.empty()){
    auto it =pq.top();
    int node=it.second;
    int dis=it.first;
    pq.pop();
    for(auto it :adj[node]){
      int adjnode=it.first;
      int edw=it.second;
      if(dis+edw<dist[adjnode]){
        dist[adjnode]=dis+edw;
        pq.push({dist+edw,adjnode});
        parent[adjnode]=node;
      }
    }
  }
  if(dist[n]==1e9)return -1;
  vector<int>path;
  int node=n;
  while(parent[node]!=node){
    path.push_back(node);
    node=parent[node];
  }
  path.push_back(1);
  reverse(path.begin(),path.end());
  return path;

}

// =============================================================================================
// shortest path in binary matrix

class Solution {
public:
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
        int n = grid.size();
        if (grid[0][0] == 1 || grid[n-1][n-1] == 1) return -1;

        pair<int,int> source = {0, 0};
        pair<int,int> destination = {n-1, n-1};

        queue<pair<int,pair<int,int>>> q;
        vector<vector<int>> dist(n, vector<int>(n, 1e9));

        dist[0][0] = 1;
        q.push({1, {0, 0}});

        int dr[] = {-1,-1,-1,0,0,1,1,1};
        int dc[] = {-1,0,1,-1,1,-1,0,1};

        while (!q.empty()) {
            auto it = q.front();
            q.pop();

            int d = it.first;
            int r = it.second.first;
            int c = it.second.second;

            if (r == destination.first && c == destination.second)
                return d;

            for (int i = 0; i < 8; i++) {
                int newr = r + dr[i];
                int newc = c + dc[i];

                if (newr >= 0 && newc >= 0 && newr < n && newc < n &&
                    grid[newr][newc] == 0 &&
                    d + 1 < dist[newr][newc]) {

                    dist[newr][newc] = d + 1;
                    q.push({d + 1, {newr, newc}});
                }
            }
        }

        return -1;
    }
};

// =============================================================================
// min effort

class Solution {
public:
    int minimumEffortPath(vector<vector<int>>& heights) {

        priority_queue<
            pair<int, pair<int,int>>,
            vector<pair<int, pair<int,int>>>,
            greater<pair<int, pair<int,int>>>
        > pq;

        int n = heights.size();
        int m = heights[0].size();

        vector<vector<int>> dist(n, vector<int>(m, 1e9));
        dist[0][0] = 0;

        pq.push({0, {0, 0}});

        int dr[4] = {-1, 0, 1, 0};
        int dc[4] = {0, 1, 0, -1};

        while (!pq.empty()) {
            auto it = pq.top();
            pq.pop();

            int diff = it.first;
            int row = it.second.first;
            int col = it.second.second;

            if (row == n - 1 && col == m - 1)
                return diff;

            for (int i = 0; i < 4; i++) {
                int nrow = row + dr[i];
                int ncol = col + dc[i];

                if (nrow >= 0 && nrow < n && ncol >= 0 && ncol < m) {
                    int neweffort = max(
                        abs(heights[row][col] - heights[nrow][ncol]),
                        diff
                    );

                    if (neweffort < dist[nrow][ncol]) {
                        dist[nrow][ncol] = neweffort;
                        pq.push({neweffort, {nrow, ncol}});
                    }
                }
            }
        }

        return 0;
    }
};

// ================================================================

// cheapest flight with k stops

class Solution {
public:
    int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst, int k) {
        
        vector<vector<pair<int,int>>> adj(n);

        for(auto it : flights){
            adj[it[0]].push_back({it[1], it[2]});
        }

        queue<pair<int,pair<int,int>>> q;
        q.push({0,{src,0}}); // {stops, {node, cost}}

        vector<int> dist(n, 1e9);
        dist[src] = 0;

        while(!q.empty()){
            auto it = q.front();
            q.pop();

            int stop = it.first;
            int node = it.second.first;
            int cost = it.second.second;

            if(stop > k) continue;

            for(auto neighbour : adj[node]){
                int adjNode = neighbour.first;
                int wt = neighbour.second;

                if(cost + wt < dist[adjNode]){
                    dist[adjNode] = cost + wt;
                    q.push({stop+1, {adjNode, cost+wt}});
                }
            }
        }

        if(dist[dst] == 1e9) return -1;

        return dist[dst];
    }
};

// =========================================================================
class Solution {
public:
    int countPaths(int n, vector<vector<int>>& roads) {

        const int MOD = 1e9 + 7;

        vector<vector<pair<int,int>>> adj(n);

        for(auto &it : roads){
            adj[it[0]].push_back({it[1], it[2]});
            adj[it[1]].push_back({it[0], it[2]});
        }

        priority_queue<
            pair<long long,int>,
            vector<pair<long long,int>>,
            greater<pair<long long,int>>
        > pq;

        vector<long long> dist(n, 1e18);
        vector<int> ways(n, 0);

        dist[0] = 0;
        ways[0] = 1;
        pq.push({0, 0});

        while(!pq.empty()){

            long long dis = pq.top().first;
            int node = pq.top().second;
            pq.pop();

            if(dis > dist[node]) continue;

            for(auto &it : adj[node]){
                int adjnode = it.first;
                long long adw = it.second;

                // Found shorter path
                if(dis + adw < dist[adjnode]){
                    dist[adjnode] = dis + adw;
                    pq.push({dist[adjnode], adjnode});
                    ways[adjnode] = ways[node];
                }

                // Found another shortest path
                else if(dis + adw == dist[adjnode]){
                    ways[adjnode] = (ways[adjnode] + ways[node]) % MOD;
                }
            }
        }

        return ways[n-1];
    }
};



// ==============================================================================
// bellman ford
// similar to dijkstra it is used to find shortest path between source to all other nodes but dijkstra fail in case of negative weights so we have bellman ford
// works on directed graph so if we are given undirected change to directed
// it help in detecting neagtive cycle
//we need edge list for this

// does dijkstra works on directed and undirected??????????


vector<int> bellman_ford(int V, vector<vector<int>>& edges, int S) {
    
    vector<int> dist(V, 1e8);
    dist[S] = 0;

    // Relax all edges V-1 times
    for(int i = 0; i < V - 1; i++) {
        for(auto it : edges) {
            int u = it[0];
            int v = it[1];
            int wt = it[2];

            if(dist[u] != 1e8 && dist[u] + wt < dist[v]) {
                dist[v] = dist[u] + wt;
            }
        }
    }

    // Step to detect negative cycle
    for(auto it : edges) {
        int u = it[0];
        int v = it[1];
        int wt = it[2];

        if(dist[u] != 1e8 && dist[u] + wt < dist[v]) {
            return {-1};   // Negative cycle detected
        }
    }

    return dist;
}

// ===================================================================================================================
// floyd warshal 
// shortest path from every node to evvery other node
// helps detect negativbve cycle as well



class Solution {
public:
    void shortest_distance(vector<vector<int>>& matrix) {
        
        int n = matrix.size();
        
        // Step 1: Replace -1 with INF (1e9)
        // because -1 means no path
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) {
                
                if(matrix[i][j] == -1) {
                    matrix[i][j] = 1e9;   // Treat as infinity
                }
                
                if(i == j) {
                    matrix[i][j] = 0;    // Distance to itself = 0
                }
            }
        }
        
        
        // Step 2: Floyd–Warshall Algorithm
        // k = intermediate node
        for(int k = 0; k < n; k++) {
            
            // i = source node
            for(int i = 0; i < n; i++) {
                
                // j = destination node
                for(int j = 0; j < n; j++) {
                    
                    // Check to avoid overflow
                    if(matrix[i][k] != 1e9 && matrix[k][j] != 1e9) {
                        
                        matrix[i][j] = min(matrix[i][j],
                                           matrix[i][k] + matrix[k][j]);
                    }
                }
            }
        }
        
        
        // Step 3: Detect Negative Cycle
        for(int i = 0; i < n; i++) {
            if(matrix[i][i] < 0) {
                // Negative cycle exists
                return;
            }
        }
        
        
        // Step 4: Convert back INF to -1
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) {
                
                if(matrix[i][j] == 1e9) {
                    matrix[i][j] = -1;
                }
            }
        }
    }
};


// ====================================================================
