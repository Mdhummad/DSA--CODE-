// NUMBER OF PROVINCES
class Solution {
public:
    void dfs(int node, vector<int> adj[], vector<int>& vis) {
        vis[node] = 1;
        for (auto it : adj[node]) {
            if (!vis[it]) {
                dfs(it, adj, vis);
            }
        }
    }

    int findCircleNum(vector<vector<int>>& isConnected) {
        int v = isConnected.size();              // number of nodes
        vector<int> adj[v];                      // adjacency list

        // Convert adjacency matrix to adjacency list
        for (int i = 0; i < v; i++) {
            for (int j = 0; j < v; j++) {
                if (isConnected[i][j] == 1 && i != j) {
                    adj[i].push_back(j);
                    adj[j].push_back(i);
                }
            }
        }

        vector<int> vis(v, 0);
        int count = 0;

        for (int i = 0; i < v; i++) {
            if (!vis[i]) {
                count++;
                dfs(i, adj, vis);
            }
        }

        return count;
    }
};
// ================================================================================================

// ROTTEN ORANGES
class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {    
    int rows=grid.size();
    int cols=grid[0].size();
// queue<pair<pair<i index,j index>,time>>
    queue<pair<pair<int,int>,int>> q;
    vector<vector<int>> vis(rows, vector<int>(cols, 0));

    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            if(grid[i][j]==2){
                q.push({{i,j},0});
                vis[i][j]=2;
            }
            else{
                vis[i][j]=0;
            }
        }
    }


    int tm=0;
    int drows[]={-1,0,+1,0};
    int dcol[]={0,+1,0,-1};
    while(!q.empty()){
    int r=q.front().first.first;
    int c=q.front().first.second;
    int t=q.front().second;
    q.pop();   
    tm=max(tm,t);
    for(int i=0;i<4;i++){
        int nrow= r+drows[i];
        int ncols= c+dcol[i];

        if(nrow>=0 && nrow<rows && ncols>=0 && ncols<cols && grid[nrow][ncols]==1 && vis[nrow][ncols]!=2 ){
            q.push({{nrow,ncols},t+1});
            vis[nrow][ncols]=2;
        }
         }
        }
        for(int i = 0; i < rows; i++){
            for(int j = 0; j < cols; j++){
                if(grid[i][j] == 1 && vis[i][j] != 2){
                    return -1;
                }
            }
        }

return tm;
    }
};


// =========================================================================================================================
// flood fill algorithm

class Solution {
public:
void dfs(vector<vector<int>> image,vector<vector<int>>& ans,int sr,int sc,int color,int drows[],int dcols[],int inti_color){
    ans[sr][sc]=color;
int n=ans.size();
int m=ans[0].size();

for(int i=0;i<4;i++){
    int nrow=sr+drows[i];
    int ncol=sc + dcols[i];
    if(nrow>=0 && nrow<n && ncol>=0 && ncol<m && ans[nrow][ncol]!=color && image[nrow][ncol]==inti_color){
       dfs(image,ans, nrow, ncol, color, drows, dcols, inti_color);
    }
}

}




    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
int inti_color=image[sr][sc];
vector<vector<int>> ans=image;
int drows[]={-1,0,+1,0};
int dcols[]={0,+1,0,-1};
dfs(image,ans,sr,sc,color,drows,dcols,inti_color);
return ans;


        
    }
};




// flood fill using BFS

void floodFillBFS(vector<vector<int>>& image, int sr, int sc, int newColor) {
    int n = image.size();
    int m = image[0].size();
    int originalColor = image[sr][sc];

    if (originalColor == newColor) return; // nothing to change

    // Direction vectors for up, right, down, left
    int delRow[] = {-1, 0, 1, 0};
    int delCol[] = {0, 1, 0, -1};

    queue<pair<int, int>> q;
    q.push({sr, sc});
    image[sr][sc] = newColor;

    while (!q.empty()) {
        int row = q.front().first;
        int col = q.front().second;
        q.pop();

        for (int i = 0; i < 4; i++) {
            int nRow = row + delRow[i];
            int nCol = col + delCol[i];

            // Check boundaries and if the color matches the original
            if (nRow >= 0 && nRow < n && nCol >= 0 && nCol < m && image[nRow][nCol] == originalColor) {
                q.push({nRow, nCol});
                image[nRow][nCol] = newColor; // fill color
            }
        }
    }
}

// =============================================================================================================================
// DETECT A CYCLE IN A UNDIRECTED GRAPH

  bool checkCycle(int src, vector<int> adj[], vector<int>& vis) {
        queue<pair<int,int>> q;   // {node, parent}
        vis[src] = 1;
        q.push({src, -1});

        while(!q.empty()) {
            int node = q.front().first;
            int parent = q.front().second;
            q.pop();

            for(auto it : adj[node]) {
                if(!vis[it]) {
                    vis[it] = 1;
                    q.push({it, node});
                }
                else if(it != parent) {
                    // visited neighbor which is not the parent -> cycle
                    return true;
                }
            }
        }
        return false;
    }

    bool isCycle(int V, vector<int> adj[]) {
        vector<int> vis(V, 0);
        for(int i = 0; i < V; i++) {
            if(!vis[i]) {
                if(checkCycle(i, adj, vis)) return true;
            }
        }
        return false;
    }

// =======================================================================================================================================
// 0/1 matrix distance


class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        int n=mat.size();
        int m=mat[0].size();

        vector<vector<int>> vis(n,vector<int>(m,0));
        vector<vector<int>> dist(n,vector<int>(m,0));
        queue<pair<pair<int,int>,int>> q;

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(mat[i][j]==0){
                q.push({{i,j},0});
                vis[i][j]=1;
            }
            else{
                vis[i][j]=0;
            }
        }
    }

int delrows[]={-1,0,+1,0};
int delcols[]={0,+1,0,-1};

while(!q.empty()){
int rows=q.front().first.first;
int cols=q.front().first.second;
int steps=q.front().second;

q.pop();
dist[rows][cols]=steps;

for(int i=0;i<4;i++){
    int nrows=rows+delrows[i];
    int ncol=cols+delcols[i];
    if(nrows>=0 && nrows<n && ncol>=0 && ncol<m && vis[nrows][ncol]==0){
        q.push({{nrows,ncol},steps+1});
        vis[nrows][ncol]=1;
    }
}
}

return dist;
    }
};



// =============================================================================================================================
// SURROUNDED REGIOR=NS

class Solution {
public:
    void dfs(int row, int col, vector<vector<int>>& vis, vector<vector<char>>& board, int delrow[], int delcol[], int n, int m) {
        vis[row][col] = 1;

        for (int k = 0; k < 4; k++) {
            int nrow = row + delrow[k];
            int ncol = col + delcol[k];

            if (nrow >= 0 && nrow < n && ncol >= 0 && ncol < m &&
                !vis[nrow][ncol] && board[nrow][ncol] == 'O') {
                dfs(nrow, ncol, vis, board, delrow, delcol, n, m);
            }
        }
    }

    void solve(vector<vector<char>>& board) {
        int n = board.size();
        int m = board[0].size();
        vector<vector<int>> vis(n, vector<int>(m, 0));

        int delrow[] = {-1, 0, +1, 0};
        int delcol[] = {0, +1, 0, -1};

        for (int j = 0; j < m; j++) {
            if (!vis[0][j] && board[0][j] == 'O')
                dfs(0, j, vis, board, delrow, delcol, n, m);

            if (!vis[n - 1][j] && board[n - 1][j] == 'O')
                dfs(n - 1, j, vis, board, delrow, delcol, n, m);
        }

   
        for (int i = 0; i < n; i++) {
            if (!vis[i][0] && board[i][0] == 'O')
                dfs(i, 0, vis, board, delrow, delcol, n, m);

            if (!vis[i][m - 1] && board[i][m - 1] == 'O')
                dfs(i, m - 1, vis, board, delrow, delcol, n, m);
        }

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (!vis[i][j] && board[i][j] == 'O')
                    board[i][j] = 'X';
            }
        }
    }
};



// =======================================================================================================================================
// NUMBER OF ENCLAVE

   int numEnclaves(vector<vector<int>>& grid) {
     queue<pair<int,int>> q;
     int n=grid.size();
     int m=grid[0].size();

    vector<vector<int>> vis(n,vector<int>(m,0));

for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        if(i==0 || j==0 || i==n-1 || j==m-1){
            if(grid[i][j]==1){
                q.push({i,j});
                vis[i][j]=1;
            }
        }
    }
}
int delrow[]={-1,0,+1,0};
int delcol[]={0,+1,0,-1};


while(!q.empty()){
int row =q.front().first;
int col=q.front().second;
q.pop();

for(int i=0;i<4;i++){
int nrows=row+delrow[i];
int ncol=col+delcol[i];
if(nrows>=0 && nrows<n && ncol>=0 && ncol<m && vis[nrows][ncol]==0 && grid[nrows][ncol]==1){
    q.push({nrows,ncol});
    vis[nrows][ncol]=1;
}
}
}

int count=0;
for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        if(grid[i][j]==1 && vis[i][j]==0){
            count++;
        }
        
    }
}

return count;

    } 
// =========================================================================================================================
// WORD LADDER 1
class Solution {
public:
    int ladderLength(string beginWord, string endWord, vector<string>& wordList) {
       queue<pair<string,int>> q;
       set<string> s(wordList.begin(),wordList.end());
       q.push({beginWord,1});

        int n=beginWord.length();
       while(!q.empty()){
        string word=q.front().first;
        int time=q.front().second;
        q.pop();
if(word==endWord)return time;
          for(int i=0;i<n;i++){
            char orignal=word[i];
                for(char ch='a';ch<='z';ch++){
                    word[i]=ch;

                    if(s.find(word)!=s.end()){
                        q.push({word,time+1});
                        s.erase(word);

                    }
                }
                word[i]=orignal;
       }

       }
       
       return 0;

     
    }
}; 
// ==============================================================================================
//NO.OF ISLAND 2
 

// == ===============================================================================
// number of island
 
void bfs(int rows,int cols,vector<vectro<int>>grid,vector<vector<int>>& vis){
vis[rows][col]=1;

queue<pair<int,int>> q;
q.push({rows,col});

while(!q.empty()){
int rows=q.front().first;
int cols=q.front().second;

for(int delrow=-1;delrow<1;delrow++){
    for(int delcol=-1;delcol<1;delcol++){
        int nrow=row + delrow;
        int ncol=row + delcol;
if(nrow>=0 && nrow<n && ncol>=0 && ncol<m && grid[delrow][delcol]=='1' !vis[nrow][ncol]){
    vis[nrow][ncol]=1;
    q.push({nrow,ncol});
}   }
}
}
}

int nums_of_island(vector<vector<int>>& grid){
    int n= grid.size();
    int m=grid[0].size();
    int cnt=0;
    vector<vector<int>> vis(n,vector<int>(m,0));
    for(int rows=0;rows<n;i++){
        for(int cols=0;i<cols;i++){
            if(!vis[rows][cols] && grid[rows][col]==1){
                cnt++;
                bfs(row,col,vis,grid);
            }

        }
    }



return cnt;
}

// ========================================================================================
// BIPARTITE GRAPH
// IF ANY GRAPH CONTAIN ODD LENGTH CYCLE THEN IT CANNOT BE BIPARTITE
class Solution {
public:
bool dfs(int node,int col,vector<int>vistited,vector<vector<int>>& graph){
visited[node]=col;

for(auto it: graph[node]){
    if(visited[it]==-1){
        if(dfs(it,!col,visited,graph)==false)return false;
    }
    else if(color[it]==col){
        return false;
    }
}

}



    bool isBipartite(vector<vector<int>>& graph) {

 int v =graph.size();
vector<int>visited(v,-1);

for(int i=0;i<n;i++){
    if(visited[i]==-1){
        if(dfs(i,0,visited,graph)==false)return false;
    }
}
return true;
    }
};


