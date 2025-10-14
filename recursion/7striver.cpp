// BACKTRACKING
class Solution {
public:
    bool isSafe(int row, int col, vector<string>& board, int n) {
        int i = row, j = col;
        while (i >= 0 && j >= 0) {
            if (board[i][j] == 'Q') return false;
            i--; j--;
        }

        i = row; j = col;
        while (j >= 0) {
            if (board[i][j] == 'Q') return false;
            j--;
        }

        i = row; j = col;
        while (i < n && j >= 0) {
            if (board[i][j] == 'Q') return false;
            i++; j--;
        }

        return true;
    }

    void solve(int col, vector<string>& board, vector<vector<string>>& ans, int n) {
        if (col == n) {
            ans.push_back(board);
            return;
        }

        for (int row = 0; row < n; row++) {
            if (isSafe(row, col, board, n)) {
                board[row][col] = 'Q';
                solve(col + 1, board, ans, n);
                board[row][col] = '.';
            }
        }
    }

    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> ans;
        vector<string> board(n);
        string s(n, '.');
        for (int i = 0; i < n; i++) {
            board[i] = s;
        }

        solve(0, board, ans, n);
        return ans;
    }
};


// /===============================================================================
//SUDUKO SOLVER

class Solution {
public:
bool solve(vector<vector<char>>& board){
int n=board.size();
int m=board[0].size();

for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        if(board[i][j]=='.'){
            for(char ch='1';ch <='9';ch++){
                if(isvalid(board,i,j,ch)){
                    board[i][j]=ch;
                if(solve(board)==true)return true;
                else board[i][j]='.';
                }
            }
            return false;
        }
    }
}
return true;
}


bool isvalid(vector<vector<char>>& board,int row,int col,char ch){

for(int i=0;i<9;i++){
    if(board[i][col]==ch)return false;
    if(board[row][i]==ch)return false;
    if(board[3*(row/3)+i/3][(3*(col/3)+i%3)]==ch)return false;
}
return true;
}



void solveSudoku(vector<vector<char>>& board) {
solve(board);        
    }
};


// ==================================================================================================================
//m coloring problemm

bool isSafe(int node, int color[], bool graph[101][101], int n, int col) {
    for(int k = 0; k < n; k++) {
        if(k != node && graph[k][node] == 1 && color[k] == col) {
            return false;
        }
    }
    return true;
}

bool solve(int node, int color[], int m, int N, bool graph[101][101]) {
    if(node == N)
        return true;

    for(int i = 1; i <= m; i++) {
        if(isSafe(node, color, graph, N, i)) {
            color[node] = i;
            if(solve(node + 1, color, m, N, graph)) return true;
            color[node] = 0;
        }
    }
    return false;
}

// Function to determine if graph can be coloured with at most M colours such
// that no two adjacent vertices of graph are coloured with same colour.
bool graphColoring(bool graph[101][101], int m, int N) {
    int color[N] = {0};
    if(solve(0, color, m, N, graph)) return true;
    return false;
}

