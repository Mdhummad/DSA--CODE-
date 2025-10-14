// TOPO SORT (DFS)==>applicable only on DIRECTED ACYCLIC GRAPH

/*
TOPOLOGICAL SORTING IS VALID ONLY UPON DAG ,IT IS LINEAR
ORDERING OF VERTICES SUCH THAT IF THERE IS AN EDGE BETWEEN
U AND V , U APPEAR BEFORE V IN THE ORDERING
*/
class Solution {
public:
    void dfs(int ind, vector<int>& vis, vector<int> adj[], stack<int>& stk) {
        vis[ind] = 1;

        for (auto it : adj[ind]) {
            if (!vis[it]) {
                dfs(it, vis, adj, stk);
            }
        }

        stk.push(ind); 
    }

    vector<int> topoSort(int V, vector<int> adj[]) {
        vector<int> vis(V, 0);
        stack<int> stk;
        for (int i = 0; i < V; i++) {
            if (!vis[i]) {
                dfs(i, vis, adj, stk);
            }
        }


        vector<int> ans;
        while (!stk.empty()) {
            ans.push_back(stk.top());
            stk.pop();
        }

        return ans;
    }
};


// ========================================================================
// TOPO BFS OR KAHN'S ALGO
// INDEGREE==NUMBER OF INCOMING EDGES TO NODE


// STEPS
// 1) insert all node with indegree 0
// 2) take them out and reduce the indegree of adjacent nodes
// 3) insert with indegree 0


vector<int> toposort(int V, vector<int>adj[]){
vector<int>indegree(V,0);
for(int i=0;i<V;i++){
  for(auto it: adj[i]){
    indegree[it]++;}  }

queue<int> q;
for(int i=0;i<V;i++){
    if(indegree[i]==0){
        q.push(i);}
}

vector<int>topo;
while(!q.empty()){
int node=q.front();
q.pop();
topo.push_back(node);

for(auto it: ad[node]){
    indegree[it]--;
    if(indegree[it]==0){
        queue.push(it);
    }
}
}

return topo;
}

// ========================================================================================================================
// we can find cycle in directed graph using topo sort
// ================================================================================================================================
// course schedule 1

class Solution {
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
         int V = numCourses;
        vector<vector<int>> adj(V);

        for (auto it : prerequisites) {
            adj[it[1]].push_back(it[0]);
        }

vector<int>indegree(V,0);
for(int i=0;i<V;i++){
  for(auto it: adj[i]){
    indegree[it]++;}  }

queue<int> q;
for(int i=0;i<V;i++){
    if(indegree[i]==0){
        q.push(i);}
}

vector<int>topo;
while(!q.empty()){
int node=q.front();
q.pop();
topo.push_back(node);

for(auto it: adj[node]){
    indegree[it]--;
    if(indegree[it]==0){
        q.push(it);
    }
}
}

if(topo.size()==V)return true;
 return false;

    }
};

// =========================================================
// see course schedule 2 tooo
// ===========================================================
// find eventual safe states

class Solution {
public:
    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
            int v=graph.size();
            vector<int> adj[v];
            for(int i=0;i<v;i++){
                for(auto u :graph[i]){
                    adj[i].push_back(u);
                }
            }
vector<int>indegree(v,0);            
    vector<int> rev[v];
  
for(int i=0;i<v;i++){
for(auto it :adj[i]){
rev[it].push_back(i);
indegree[i]++;
     }}
queue<int>q;
vector<int>safenodes;

for(int i=0;i<v;i++){
if(indegree[i]==0)
q.push(i);
}

while(!q.empty()){
    int node=q.front();
    q.pop();
    safenodes.push_back(node);

    for(auto it :rev[node]){
        indegree[it]--;
        if(indegree[it]==0)q.push(it);
    }

}
sort(safenodes.begin(),safenodes.end());
return safenodes;

    }
};

//==========================================================
// ALIEN DIC

string findorder(string dict[], int N, int k ){
    // n == no.of words
    // k = starting alphabets of dictionary
    vector<int> adj[k];

    for(int i=0;i<N-1;i++){
        string s1 = dict[i];
        string s2 = dict[i+1];

        int len = min(s1.size(), s2.size());
        for(int itr=0; itr<len; itr++){     // ✅ fixed loop variable name (was i)
            if(s1[itr] != s2[itr]){
                adj[s1[itr]-'a'].push_back(s2[itr]-'a');   // ✅ fixed wrong variable name (ptr → itr)
                break;   // ✅ break after first mismatch
            }
        }
    }

    // Now topo BFS as implemented above
    vector<int> indegree(k, 0);
    for(int i=0; i<k; i++){
        for(auto it : adj[i]){
            indegree[it]++;
        }
    }

    queue<int> q;
    for(int i=0; i<k; i++){
        if(indegree[i] == 0) q.push(i);
    }

    string ans = "";
    while(!q.empty()){
        int node = q.front();
        q.pop();
        ans += (node + 'a');

        for(auto it : adj[node]){
            indegree[it]--;
            if(indegree[it] == 0) q.push(it);
        }
    }

    return ans;
}
