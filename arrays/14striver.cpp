
// pascal trianle
/*
 type of question that can be asked are:
1)given row and colums ,tell the element at that place 
2) print the Nth  row of pascal triangle
3)print the entire pascal triangle



ANSWERS
1)CAN BE EASILY FOUND USING NcR
2)Nth row will have n numbers

*/

/*
HERE WE HAVE FOUND ONLY THE NCR NOT THE PASCAL ELEMENT



int NcR(int rows,int column){
int res=1; 
for(int i=0;i<column;i++){
res=res*(rows-i);
res=res/(i+1);
}
return res;
}

int pascal_element(int row,int column){
int ele=ncr(row-1,column-1);
cout<<ele;
}




2 solution for 2 question
vector<int> elements_in_row(int row,int column){
vector<int> ans;
for(int i=0;i<column;i++){
int ele=int NcR(rows,column);
ans.push_back(ele);
}


TIME COMPLEXITY WILL BE HIGH FOR ABOVE CODE 

SO BETTER APPROACH WILL BE
vector<int> elements_in_row(int row,int column){
vector<int> ans;
int sol=1;
for(int i=1;<icolumn;i++){
sol=sol*(rows-i);
sol=sol/i;
ans.push_back(sol);
}

TIME COMPLEXITY=O(N)


3 SOLUTION

vector<vector<int>> generate(int numRows) {
        int m=numRows;
vector<vector<int> > v;
for(int i=0;i<m;i++){
    vector<int> a(i+1);
    v.push_back(a);
    for(int j=0;j<=i;j++){
        if(j==0 || j==i)
        v[i][j]=1;  
        else 
        v[i][j]=v[i-1][j] +v[i-1][j-1];
        
            }
       }
   return v;
        
    }
}



*/


// ========================================================================================================================================================================
// MAJORITY element n/3

// BETTER SOLUTION
// HASHING
/*
vector<int> majorityele(vector<int>& arr){
vector<int> list;
map<int,int> hashmap;
int min=(int)(n/3) +1;

for(int i=0;i<arr.size();i++){
hashmap[arr[i]]++;
}

dor(auto it: hashmap ){
if(hashmap[arr[it]]>min){
list .push_back(hashmap[it])
}
}


if(list.size()==2)break;
}
sort(list.begin(),list.end());
return list;

}


*/

// =========================================================================================
// 3SUM
// SEE VIDEO ONCE MORE AND UNDERSTAND THE QUESTION


// BRUTE FORCE SOLUTION
/*
#include <vector>
using namespace std;

vector<vector<int>> solution(vector<int>& arr1, int sum) {
;
set<vector<int>> st;

int n = arr1.size();
for (int i = 0; i < n; i++) {
 for (int j = i + 1; j < n; j++) {
 for (int k = j + 1; k < n; k++) {
 if (arr1[i] + arr1[j] + arr1[k] == sum) {
 vector<int> temp={arr[i],arr[j],arr[k]};
 sort(temp.begin(),temp.end());
 st.insert(temp);
                }
            }
        }
    }
vector<vector<int>> sol(st.begin,st.end());
    return sol;
}


time complexity=O(n^3 )

*/

// OPTIMAL APPROACH
// 3 POINTERS
/*
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
sort(nums.begin(),nums.end());

vector<vector<int>> ans;
int n=nums.size();
for(int i=0;i<n;i++){
    if(i > 0 && nums[i]==nums[i-1])continue;
    int j=i+1;
    int k=n-1;

while(j<k){
    int sum=nums[i]+nums[j]+nums[k];
    if(nums[i]+nums[j]+nums[k]==0){
        vector<int>temp;
        temp.push_back(nums[i]);
        temp.push_back(nums[j]);
        temp.push_back(nums[k]);
          ans.push_back(temp);
        j++;
        k--;
        while(j < k && nums[j]==nums[j-1])j++;
        while(j < k && nums[k]==nums[k+1])k--;
    }
    else if(sum<0){
        j++;
    }
    else{
        k--;
    }
}
}
return ans;
    }
};



*/

// =========================================================================================
//4 SUM


/*
WHAT WE HAVE LEARNED IN 3 SUM AND 4 SUM
--USE OF CONTINUE 
--HOW TO PUSH ELEMNET IN 2-D VECTOR

*/


/*
vector<vector<int>> fourSum(vector<int>& nums, int target) {
    int n = nums.size();
    set<vector<int>> st;
    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            for(int k = j + 1; k < n; k++) {
                for(int l = k + 1; l < n; l++) {
                    long long sum = nums[i] + nums[j];
                    sum += nums[k];
                    sum += nums[l];
                    if(sum == target) {
                        vector<int> temp = {nums[i], nums[j], nums[k], nums[l]};
                        sort(temp.begin(), temp.end());
                        st.insert(temp);
                    }
                }
            }
        }
    }
    vector<vector<int>> ans(st.begin(), st.end());
    return ans;
}
    TIME COMPLEXITY=O(N^4)
    SPACE COMPLEXITY=O(NLOGN)
*/
  
//OPTIMAL SOLUTION

/*
 vector<vector<int>> fourSum(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        vector<vector<int>> ans;
        for(int i=0;i<n;i++){
            if(i>0 && nums[i]==nums[i-1]) continue;

            for(int j=i+1;j<n;j++){

                if(j!=i+1 && nums[j]==nums[j-1]) continue;
                int k=j+1;
                int l=n-1;

        while(k<l){
            long long sum=nums[i];
            sum+=nums[j];
            sum+=nums[k];
            sum+=nums[l];
                if(sum==target){
                    vector<int> temp={nums[i],nums[j],nums[k],nums[l]};
                    ans.push_back(temp);
                    l--;
                    k++;
                
                while(k<l && nums[k]==nums[k-1])k++;
                while(k<l && nums[l]==nums[l+1])l--;
                 }
                
                
                else if(sum<target)k++;
                else l--;
        }

            }
           

        
        }
        return ans;
    }


TIME COMPLEXITY:O(N^3)


*/


// ===============================================================================
// LARGEST SUBARRAY WITH SUM IS EQUAL TO ZERO
// BRUTE FORCE SOLUTION 


// OPTIMAL SOLuTION USING HASHMAP
/*
#include <bits/stdc++.h>
using namespace std;

int largestSubarrayWithSumZero(vector<int>& nums) {
    unordered_map<int, int> helper; // sum -> first index
    int sum = 0;
    int maxLen = 0;

    for (int i = 0; i < nums.size(); i++) {
        sum += nums[i];

        if (sum == 0) {
            maxLen = i + 1;
        }

        if (helper.find(sum) != helper.end()) {
            maxLen = max(maxLen, i - helper[sum]);
        } else {
            helper[sum] = i; // store the first occurrence of the sum
        }
    }

    return maxLen;
}










*/
// THIS IS THE CODE THAT WE HAVE USED TO FIND SUBARRAY OF SUM K ,IT WORKS ALSO WHEN K===0
int longest_subarray_with_sum_k(vector<int>& arr, long long k) {

    map<long long, int> presummap;
    int maxlen = 0;
    long long sum = 0;

    for (int i = 0; i < arr.size(); i++) {

        sum += arr[i];

        if (sum == k) {
            maxlen = max(maxlen, i + 1);
        }

        long long rem = sum - k;

        if (presummap.find(rem) != presummap.end()) {
            int len = i - presummap[rem];
            maxlen = max(maxlen, len);
        }

        // store first occurrence of this prefix sum
        if (presummap.find(sum) == presummap.end()) {
            presummap[sum] = i;
        }
    }

    return maxlen;
}





// ============================================================================================================
// NUMBER OF SUBARRAY WITH XOR K 
// ===================================================================================
// MERGE OVERLAPPING INTERVAL

/*
vector<vector<int>> mergeOverlappingIntervals(vector<vector<int>> &arr) {
class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
       vector<vector<int>> ans;
       int n=intervals.size();
       sort(intervals.begin(),intervals.end());
       
        ans.push_back(intervals[0]);
       for(int i=1;i<n;i++){

        if(intervals[i][0]<=ans.back()[1]){
            ans.back()[1]=max(ans.back()[1],intervals[i][1]);
        }
        else{
            ans.push_back(intervals[i]);
        }
       }
       return ans;
    }
};


*/

// =============================================================================================================
// MERGE SORTED ARRAY

// BRUTE FORCE SOLUTION
 /*
 void merge(long long arr1[],long long arr2[],int n,int m){
 long long arr3[n+m];
 int left;
 int  right;

 while(left<n && right<m){
 if(arr1[left]<=arr2[right]){
 arr3[index]=arr1[left];
 left++; 
 right++;
}
 else {arr3[index]=arr2[right];
 right++;
 index++;
 }

while(left<n){
arr3[index++]=arr1[left++];
}
while(right<m){
arr3[index++]=arr2[right++]
}

 
index=0;
for(int i=0;i<n+m;i++){
if(i<n) arr1[i]=arr3[i];
else arr2[i-n]=arr3[i];
}
 }

//  optimal solution


void merge(long long arr1[],long long arr2[],int n, int m){
int left =n-1;
int right =0 ; 
while(left>=0 && right<m){
if(arr1[left]>arr2[right]){
swap(arr1[left],arr2[right]);
left--;
right++;
}
else{
break;}
}
sort(arr1,arr1+n);
sort(arr2,arr2+m);

}

// ===============================================================================================
// FIND THE REPEATING AND MISSING NUMBERS
 

vector<int> find_missing_and_repeating(vector<int> a){
int n=a.size();

int hash_arr[n+1]={0};

for(int i=0;i<n;i++){
hash_arr[a[i]]++;
}

int repeating=-1;
int missing=-1;


for(int i=1;i<n+1;i++){
if(hash[i]==0)missing=i;
else if(hash[i]==2)repeating=i;
if(repeating!=-1 && missing!=-1){
break;
}

return {repeating,missing};
}


// SEE MATHEMATICAL SOLUTION


}


//=========================================================================================================
count inversion in a array
// pick a pair such tha {a[i]>a[j]]}where i<j 



//brute force solution 

vector<vector<int>> count_inversion(vector<int>& arr) {
    int n = arr.size();
    vector<vector<int>> sol;

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] > arr[j]) {
                sol.push_back({arr[i], arr[j]});
            }
        }
    }

    return sol;
}





OPTIMAL APPROACH

USE MERGE SORT THEOREM SO DO IT ONCE AFTER REVISING MERGE SORT
// =======================================================================================================
REVERSE PAIR

SIMILAR TO ABOVE QUESTION

// ==============================================================================================

// MAXIMUM PRODUCT SUBARRAY
/*
//BRUTE FORCE
class Solution {
public:
    int maxProduct(vector<int>& nums) {
     int n=nums.size();
     if(n==1)return nums[0];
     int maxi=-1;       
     int product;
     for(int i=0;i<n;i++){
         product=1;
    for(int j=i;j<n;j++){
        product=product*nums[j];
        maxi=max(product,maxi);
    }
     }
     return maxi;
    }
};



// OPTIMAL SOLUTION


class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int prefix=1;
        int suffix=1;
        int maxi=INT_MIN;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(prefix==0)prefix=1;
            if(suffix==0)suffix=1;

            prefix=prefix*nums[i];
            suffix=suffix*nums[n-i-1];
            maxi=max(maxi,max(prefix,suffix)); 


        }
    return maxi;
    }

};

 




*/















 
 
 */


  