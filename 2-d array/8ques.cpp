/* QUES*/
/* GIVEN AN INTEGER 'numRows',generate pascal's triangle*/

// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
// int m=5;
// vector<vector<int> > v;
// for(int i=1;i<=m;i++){
//     vector<int> a(i);
//     v.push_back(a);
// }

// // generate
// for(int i=0;i<m;i++){
//     for(int j=0;j<=i;j++){
//         if(j==0 || j==i)
//         v[i][j]=1;
//         else{ v[i][j]=v[i-1][j] +v[i-1][j-1];}

//             }
// }

// // print
// for(int i=0;i<5;i++){
//     for(int j=0;j<=i;j++){
// cout<<v[i][j]<<" ";
// }
// cout<<endl;
// }
//  return 0;
// }

// ==========================================================================
// ===========================================================================
// #include<iostream>
// #include<vector>
// using namespace std;
// vector< vector<int> > pascal(int numRows){
// int m=numRows;
// vector<vector<int> > v;
// for(int i=0;i<m;i++){
//     vector<int> a(i+1);
//     v.push_back(a);
//     for(int j=0;j<=i;j++){
//         if(j==0 || j==i)
//         v[i][j]=1;
//         else
//         v[i][j]=v[i-1][j] +v[i-1][j-1];

//             }
//    }
//    return v;
// }
// int main(){
// vector< vector<int> > v=pascal(10);

// // print
// for(int i=0;i<5;i++){
//     for(int j=0;j<=i;j++){
// cout<<v[i][j]<<" ";
// }
// cout<<endl;
// }
//  return 0;
// }

//  ==========================================================================
// ===========================================================================

/*
leetcode ques number 861

SCIRE AFTER FLIPPING THE MATRIX
*/

/*
class Solution {
public:
    int matrixScore(vector<vector<int>>& grid) {
        int rows=grid.size();
        int cols=grid[0].size();


// making the first row 1
        for(int i=0;i<rows;i++){
            if(grid[i][0]==0){
                  for(int j=0;j<cols;j++){
                    if(grid[i][j]==0){
                        grid[i][j]=1;
                    }
                    else{grid[i][j]=0};
                  }
            }
        }

//flipping the cols where no. of zero are greater than no. of 1

for(int j=0;j<cols;j++){
    int noz=0;
    int noo=0;
    for(int i=0;i<rows;i++){
        if(grid[i][j]==0)noz++;
        else noo++;
    }
if(noz>noo){
    for(int i=0;i<rows;i++){
         if(grid[i][j]==0) grid[i][j]=1;
         else grid[i][j]=0;
        }
    }
}
int sum=0;
for(int i=0;i<rows;i++){
    int x=1;
for(int j=cols-1;j>0;j--){
    sum+=grid[i][j]*x;
    x*=2;
}

}

return sum;


    }
};



*/
