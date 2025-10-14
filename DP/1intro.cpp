// top down code for fibonacci number
/*
class Solution {
public:
   int fibo(int n,vector<int>&dp){
    if(n<=1)return n;
    if(dp[n]!=-1)return dp[n];
    dp[n]=fibo(n-1,dp)+fibo(n-2,dp);
    return dp[n];
   }




    int fib(int n) {
    vector<int> dp(n+1,-1);
    return fibo(n,dp);
        
    }
};
*/

//tabulation
/*
class solution{
public:
int fib(int n){
if(n<=1) return n;
int dp[n+1];
dp[0]=0;
dp[1]=1;
for(int i=2;i<=n;i++){
dp[i]=dp[i-1]+dp[i+2];
}
return dp[n];

}


}
*/


// =======================================================================================================================
//PROBLEM NUMBER 746
//minimum cost of climbing stairs

//below i will write the recursive code but it will give time limit error
/*
class Solution {
public:
int helper(vector<int>& cost,int index,int sum){
if(index>=cost.size()) return sum;
return min(helper(cost,index+1,sum+cost[index]),helper(cost,index+2,sum+cost[index]));
}


    int minCostClimbingStairs(vector<int>& cost) {
       return min(helper(cost,0,0),helper(cost,1,0));
    }
};
*/

//top down method
/*
class Solution {
public:
int helper(vector<int>& cost,int i,vector<int>& dp){
if(i==0 ||i==1) return cost[i];
if(dp[i]!=-1) return dp[i];
return dp[i]=cost[i]+min(helper(cost,i-1,dp),helper(cost,i-2,dp));
}


    int minCostClimbingStairs(vector<int>& cost) {
    int n=cost.size();
    vector<int> dp(n,-1);
    return min(helper(cost,n-1,dp),helper(cost,n-2,dp));
    }
}; 

*/


//TABULATION
/*
class Solution {
public:
int minCostClimbingStairs(vector<int>& cost) {
int n=cost.size();
for(int i=2;i<n;i++){
    cost[i] += min(cost[i-1],cost[i-2]);
}    
return min(cost[n-1],cost[n-2]);
    }
}; 

*/

//===========================================================================

//UNIQUE PATHS


//recursion

/*
class Solution {
public:
   int helper(int sr,int sc,int er,int ec){
   if(sc==ec && sr==er) return 1;
   if(sc>ec || sr>er) return 0;
   int rightways=helper(sr,sc+1,er,ec);
   int downways= helper(sr+1,sc,er,ec);
   return rightways + downways;

   }


    int uniquePaths(int m, int n) {
        return helper(0,0,m-1,n-1);
    }
};
*/
//TOP DOWN
/*
class Solution {
public:
   int helper(int sr,int sc,int er,int ec,vector<vector<int>> &dp){
   if(sc==ec && sr==er) return 1;
   if(sc>ec || sr>er) return 0;
   if(dp[sr][sc]!=-1) return dp[sr][sc];
   return dp[sr][sc]=helper(sr,sc+1,er,ec,dp)+helper(sr+1,sc,er,ec,dp);
  
   }


    int uniquePaths(int m, int n) {
        vector<vector<int>> dp(m,vector<int>(n,-1));
        return helper(0,0,m-1,n-1,dp);
    }
};

*/

//TABULAR
/*
class Solution {
public:
int uniquePaths(int m, int n) {
    int dp[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(i==0 || j==0) dp[i][j]=1;
            else dp[i][j]=dp[i-1][j]+dp[i][j-1];
        }
    }
    return dp[m-1][n-1];
}
};
*/