// sum of first n numbers

// PARAMETERIZED WAY

/*
 
int summation(int i, int total) {
    if (i == 0) 
        return total;
    return summation(i - 1, total + i);
}

*/


// NON-PARAMEGTERIZED WAY

/*


int summation(int n){
int sum=0;
if(n==0)return 0;
sum=n+summation(n-1);
return sum;


}

*/



// =================================================================================
// RECURSION USING TWO POINTER


// reverse an array using recusrsion
/*
void f(int i,int arr[],int n){
if(i>=n/2) return;
swap(arr[i]arr[n-i-1]);
f(i+1,arr,n);
}

int main(){

f(o,arr,n)
}
*/


// ========================================================================================
// check pallindrome
// after reversing a string they are same

/*
bool f(int i,string &s){
if(i>=s.size()/2) return true;
if(s[i]!=s[s.size()-i-1]) return false;
return f(i+1,s);

}

*/


// ====================================================================================================
// MULTIPAL RECURSION CALL

/*


fibonacii ==0,1,1,2,3,5,8,13.....................
int fibb(int n){
if(n==0)return 0;
if (n==1) return 1;

return fibb(n-1)+fibb(n-2);
}

*/

// ====================================================================================================
// subsequence using powerset ====done in bitwize playlist(its a different question)

// see recursion

// RECURSION ON SUBSEQUENCE

//REMENBER THE STRUCTURE CODE GIVEN BELOW UNDERSTAND CAREFULLY

/*
void printF(int ind, vector<int> &ds, int arr[], int n) {
    if (ind == n) {
        for (auto it : ds) {
            cout << it << " ";
        }
        if (ds.size() == 0) {
            cout << "{}";
        }
        cout << endl;
        return;
    }

// PICK
      ds.push_back(arr[ind]);
     printF(ind+1, ds, arr, n);  

// NOT PICK
    ds.pop_back();
    printF(ind+1, ds, arr, n);
  
 //NOW DRAW RECURSION TREE AND SEE THE LEFTMOST IS ADDED FIRST 
}




// ===================================================================================================
// PRINT SUBSEQUENCE WITH SUM EQUAL TO K

void printf(int ind,vector<int>& d,int inti_sum,int req_sum,int arr[],int n ){
 if(ind==n){
if(inti_sum==req_sum){
    for(auto it:ds){
        cout<<it<<" ";
        cout<<endl;
    }
    return;
}

d.push_back(arr[ind]);
inti_sum+=arr[ind];

printf(ind+1,d,inti_sum,req_sum,arr,n);


inti_sum-=arr[ind];
ds.pop_back;
printf(ind+1,d,inti_sum,req_sum,arr,n);

 }
    
}
// ===========================================================================================================================================

// video 7 is very important telling about the pattern of recursion
// remember it
// very very very very very very important

// Technique to print only 1 answer

void printf(int ind,vector<int>& d,int inti_sum,int req_sum,int arr[],int n ){
 if(ind==n){
if(inti_sum==req_sum){
    for(auto it:ds){
        cout<<it<<" ";
        cout<<endl;
        returrn true;
    }
    return false;
}

d.push_back(arr[ind]);
inti_sum+=arr[ind];

if(printf(ind+1,d,inti_sum,req_sum,arr,n)==true){
return true;}


inti_sum-=arr[ind];
ds.pop_back;
if(printf(ind+1,d,inti_sum,req_sum,arr,n)==true){
return true ;}

 }
    return false;
}


// =====================================================================================================================================
// TECHNIQUE TO PRINT NUMBER OF ANS



int printf(int ind,vector<int>& d,int inti_sum,int req_sum,int arr[],int n ){
 if(ind==n){
if(inti_sum==req_sum){
        returrn 1;
    }
    return 0;
}

d.push_back(arr[ind]);
inti_sum+=arr[ind];

int l=(printf(ind+1,d,inti_sum,req_sum,arr,n);


inti_sum-=arr[ind];
ds.pop_back;
int r=(printf(ind+1,d,inti_sum,req_sum,arr,n);

 }
    return l+r;
}

// ========================================================================================

// combination sum
class Solution {
public:
    void helper(int ind ,  vector<int>& candidates ,int target, vector<vector<int>>&ans, vector<int>result ,int n){
if(target<0 ){
return ;
}


if(target==0){
ans.push_back(result);
return;
}

if(ind>=n){
    return;
}

result.push_back(candidates[ind]);
target-=candidates[ind];
helper(ind,candidates,target,ans,result,n);
target+=candidates[ind];

result.pop_back();
helper(ind+1,candidates,target,ans,result,n);


    }


    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
    vector<vector<int>> ans;
    vector<int>result;
    int n=candidates.size();
    helper(0,candidates,target,ans,result,n) ;       
    return ans;





    }
};



// ==============================================================================================================================

// COMBINATION SUM2




void helper(int ind,vector<int>candidates,vector<vector<int>>& ans,vector<int>result,int target,int n){

if(target==0){
ans.push_back(result);
return;

}

for(int i=ind;i<n;i++){

if (i > ind && candidates[i] == candidates[i - 1]) continue;
 if (candidates[i] > target) break;

result.push_back(candidates[i]);
helper(i+1,candidates,ans,result,target-candidates[i],n);
result.pop_back();


}

}


    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int>result;

        int n=candidates.size();

        sort(candidates.begin(),candidates.end());
        helper(0,candidates,ans,result,target,n);
    return ans;
    }
};

// ==============================================================================================================================
class Solution {
public:
    void func(int ind, int sum, vector<int> &arr, int N, vector<int> &sumSubset) {
        if(ind == N) {
            sumSubset.push_back(sum);
            return;
        }

        // pick the element
        func(ind + 1, sum + arr[ind], arr, N, sumSubset);

        // Do-not pick the element
        func(ind + 1, sum, arr, N, sumSubset);
    }

public:
    vector<int> subsetSums(vector<int> arr, int N) {
        vector<int> sumSubset;
        func(0, 0, arr, N, sumSubset);
        sort(sumSubset.begin(), sumSubset.end());
        return sumSubset;
    }
};

// ====================================================================================================================


// permutaion

class Solution {
private:
    void recurPermute(vector<int> &ds, vector<int> &nums, vector<vector<int>> &ans, int freq[]) {
        if(ds.size() == nums.size()) {
            ans.push_back(ds);
            return;
        }
        for(int i = 0; i<nums.size(); i++) {
            if(!freq[i]) {
                ds.push_back(nums[i]);
                freq[i] = 1;
                recurPermute(ds, nums, ans, freq);
                freq[i] = 0;
                ds.pop_back();
            }
        }
    }
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> ds;
        int freq[nums.size()] = {0};
        for(int i = 0; i<nums.size(); i++) freq[i] = 0;
        recurPermute(ds, nums, ans, freq);
        return ans;
    }
};
// ========================================================================================================================================
class Solution {
public:
 bool isPalindrome(string s, int start, int end) {
        while(start <= end) {
            if(s[start++] != s[end--])
                return false;
        }
        return true;
    }


void func(int index, string s, vector<string> &path,
              vector<vector<string>> &res) {
        if(index == s.size()) {
            res.push_back(path);
            return;
        }
        for(int i = index; i < s.size(); ++i) {
            if(isPalindrome(s, index, i)) {
                path.push_back(s.substr(index, i - index + 1));
                func(i+1, s, path, res);
                path.pop_back();
            }
        }
    }

    vector<vector<string>> partition(string s) {
        vector<vector<string>> res;
        vector<string> path;
        func(0, s, path, res);
        return res;
    }

    
};
