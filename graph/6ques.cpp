//MINIMUM SPANNING TREE
/* 
a tree having n nodes and n-1 edges and all nodes are reachable from
each other

==> A graph can have multiple MST 
==>From multiple MST the one having least sum is the MST


*/



// Prims algo 

// take a priority queue with{wt,node,parent}
// take a visited array
// take a 2-d ans array

int spanning_tree(vector<vector<int>>adj[]){

priority_queue<pair<int,int>,vector<pair<int,int,>>,greater<pair<int,int>>>pq;    
vector<int>vis(V,0);
// {wt,node}
pq.push({0,0});
int sum=0;

while(!pq.empty()){
    auto it=pq.top();
    pq.pop();
    int weight=it.first;
    int node=it.second;

    if(vis[node]==1)continue;
    else{
        vis[node]=1;
    }
    sum+=weight;

    for(auto it :adj[node]){
        int adjnode=it[0];
        int edw=it[i];
        if(vis[adjnode]==0){
            pq.push({edw,adjnode});
        }

    }
}
return sum;

}

// ======================================================================================
// DISJOINT SET




// KRUSKAL ALGO