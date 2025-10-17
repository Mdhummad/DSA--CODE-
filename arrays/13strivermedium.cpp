// 2 sum problem
/*
// BETTER SOLUTION USING HASHING


string 2sum(vector<int>& arr,int target){
map<int,int> map;


for(int i=0;i<n;i++){
int a=arr[i];
int m=target-a;
if(map.find(m)!=map.end()){
int x=map[m];
return "yes"
}
map[a]=i;
}
return "no"

}

timecomplexityO(N^2 OR O(NLOGN))DEPENDINGG UPON TYPE OF MAP USED


MOST OPTIMAL SOLUTION
// USING TWO POINTER


string read(int n, vector<int> book, int target) {
   

    sort(book.begin(), book.end());  // Ensure the array is sorted
 int left = 0, right = n - 1;
    while (left <= right) {
        int sum = book[left] + book[right];

        if (sum == target) {
            return "YES";
        } else if (sum < target) {
            left++;
        } else {
            right--;
        }
    }

    return "NO";  // No such pair found
}
*/


// SORT 0'S 1;'S AND 2'S

// DONE PREVIOSLY

// ===============================================================================================
//MAJORITY ELEMENT

// BRUTE FORCE SOLUTION
/*
void find_majority(vector<int>& arr){
for(int i=0;i<n;i++){
int count=0;
for(int j=0;j<n;j++){
if(arr[i]==arr[j]){
count++;
}
if(count>n/2)retrun arr[i];

}
}

//TIME COMPLEXITY=O(N^2)

}
//BETTER SOLUTION

void find_majority(vector<int>& arr){
map<int,int>mp;
for(int i=0;i<n;i++){
mp[arr[i]]++;

}
for(auto i:mp){
if(i.second>arr.size()/2){
return i.first;}
}
return -1
}


time complexity=O(n)






// OPTIMAL SOLUTION
MOORE VOTING ALGO

int majority_ele(vector<int>& nums) {
    int count = 0;
    int ele = 0;

    for (int i = 0; i < nums.size(); i++) {
        if (count == 0) {
            ele = nums[i];   
            count = 1;
        }
        else if (nums[i] == ele) {
            count++;         
        }
        else {
            count--;         
        }
    }

    return ele; 
}

count = 0;
    for (int num : arr) {
        if (num == candidate)
            count++;
    }

    if (count > arr.size() / 2)
        cout << "Majority element is: " << candidate << endl;
    else
        cout << "No majority element found." << endl;

}
*/



// ================================================================================================
// kadane's algo(maximum subarray sum)
/*




*/
// #include <iostream>
// using namespace std;

// int main() {
//     int n = 10;
//     int arr[n] = {1,2,3,4,5,6,7,8,9,10};
//     int maxi=-1;

//     for (int i = 0; i < n; i++) {
//         for (int j = i; j < n; j++) {
//             int sum = 0; // Reset sum for each subarray

//             for (int k = i; k <= j; k++) {
//                 cout << arr[k] << " ";
//                 sum += arr[k];
//                 maxi=max(sum,maxi);
//             }

//             cout << "\nSum: " << sum << endl << endl;
//         }
//     }
//     cout<<endl;
// cout<<"max is "<<maxi;
//     return 0;
// }


// BETTER SOLUTION 

/*
2 loops
 
*/


// OPTIMAL SOLUTION
//KADANES ALGO
/*

long long maxsubarraym(int arr[],int n){

int maxSubArray(vector<int>& nums) {
    long long sum=0;
    int maxi=INT_MIN;
    for(int i=0;i<nums.size();i++){
        sum+=nums[i];

            maxi = max(maxi, (int)sum); 

        if(sum<0){
            sum=0;
        }
    }
    return maxi;
    }
};



// IF WE HAVE TO PRINT TE SUBARRAY

ong long maxsubarraym(int arr[],int n){

  int maxSubArray(vector<int>& nums) {
        long long sum = 0;
        int maxi = INT_MIN;

        int start = 0, end = 0, tempStart = 0;

        for (int i = 0; i < nums.size(); i++) {
            sum += nums[i];

            if (sum > maxi) {
                maxi = sum;
                start = tempStart;  // update best start
                end = i;            // update best end
            }

            if (sum < 0) {
                sum = 0;
                tempStart = i + 1;  // next subarray starts here
            }
        }

        cout << "Max Subarray found from index " << start 
             << " to " << end << endl;

        return maxi;
    }


*/

//=========================================================================================================================
// STOCK BUY AND SELL
/*
int maxprofit(vector<int> prices){
int mini=prices[0];
int maxprofit=0;
for(int i=0;i<prices.size();i++){
int cost=prices[i]-mini;
maxprofit=max(maxprofit,cost);
mini=min(mini,prices[i]);

}
return maxprofit;



}

*/
// ==================================================================================
// REARRANGE ELEMENT BY SIGN


/*

void rearrange_element_by_sign(vector<int>& arr) {
INT N=ARR.SIZE();
vector<int> ans;
int pos=0;
int neg=1;
for(int i=0;i<n;i++){
if(arr[i]>0){
ans[pos]=muns[i];
pos+=2;
}
else{
ans[neg]=nums[i];
neg+=2;
}

}
return ans;
}

*/


// IF THE POSITIVE AND NEGATIVE ARE NOT EQUAL
/*

vector<int> rearrange element(vector<int>& a){
vector<int> pos,neg;
int n = a.size();
for(int i=0;i<n;i++){
if(a[i]>0){
pos.push_back(a[i]);
}
else{
neg.push_back(a[i])}

}
if (pos.size() > neg.size()) {
    for (int i = 0; i < neg.size(); i++) {
        a[2 * i] = pos[i];
        a[2 * i + 1] = neg[i];
    }

    int index = neg.size() * 2;
    for (int i = neg.size(); i < pos.size(); i++) {
        a[index] = pos[i];
        index++;
    }
}
else {
    for (int i = 0; i < pos.size(); i++) {
        a[2 * i] = pos[i];
        a[2 * i + 1] = neg[i];
    }

    int index = pos.size() * 2;
    for (int i = pos.size(); i < neg.size(); i++) {
        a[index] = neg[i];
        index++;
    }
}


}
*/

// ==============================================================================================================================================
// see brute force onced



// NEXT PERMUTATION

// BETTER SOLUTION WILL BE TO USE NEXT PERMUTATION STL THAT IS AVAILABLE IN CPP 
/*
vector<int> nextgreatest_permutation(vector<int>& arr){


    next_permutation(arr.begin(),arr.end());
    return arr;
}


//OPTIMAL SOLUTION

class Solution {
public:
    void nextPermutation(vector<int>& nums) {
    int n=nums.size();
    int ind=-1;
    for(int i=n-2;i>=0;i--){
        if(nums[i+1]>nums[i]){
             ind=i;
            break;
        }
    }

    if(ind ==-1){
        reverse(nums.begin(),nums.end());
        return;
    }

    for(int i=n-1;i>ind;i++){
        if(nums[i]>nums[ind])
        swap(nums[i],nums[ind]);
            break;
    }
    reverse(nums.begin()+ind+1,nums.end());

    }
};
*/


// ======================================================================================================

//LEADERS IN A ARRAY
// everything on the right is samller


/**
vector<int> leader(vector<int>& a){
bool leader=true;
for(int i=0;i<n;i++){
for(int j=i+1;j<n;j++){
if(arr[j]>arr[i]){
leader=false;
break;
}
else{
a.push_back(arr[i])
}
}

}
}
// TIME COMPLEXITY =O(N^2)

//OPTIMAL SOLUTION

vector<int> leader(vector<int>& a){
int maxi= INT_MIn;
for(int i=n-1;i>0;i++){
if(arr[i]>maxi){
maxi=arr[i];
a.pus_back(arr[i]);}

}

sort(a.begin(),a.end());
return a;


}


*/


// =======================================================================================
//LONGEST CONSECUTIVE SEQUENCE


// BRUTE FORCE SOLUTION

/*
 bool linear_search(vector<int>& nums,int target){
        for(int i=0;i<nums.size();i++){
            if(nums[i]==target)return true;
        }
        return false;
    }



    int longestConsecutive(vector<int>& nums) {
        int max_count;
        for(int i=0;i<nums.size();i++){
        int x=nums[i];      
        int count=1 ; 

        while(linear_search(nums,x+1)==true){
            count++;
            x=x+1;
         
            
        }
      max_count=max(max_count,count);
        }
        return max_count;
    }
};

// BETTER SOLUTION

vector<int> longest_sequence(vector<int>& ans){
int largest=1;
int last_smallest=INT_MIN;
int count=0;
sort(ans.begin(),ans.end())

for(int i=0;i<ni++){
if(arr[i]-1==last_smallest){
count+=1;
last_smallest=arr[i];
}
else if(arr[i]!=last_smallest){
count=1;
last_samllest=arr[i];
}
largest=max(largest,count)
}

}



// OPTIMAL SOLUTION

 int longestConsecutive(vector<int>& nums) {
        int n=nums.size();
        int max_count=1;
        if(n==0)return 0;
        unordered_set<int> st;
        
        for(int i=0;i<n;i++){
            st.insert(nums[i]);
        }
        
        for(auto it: st){
            if(st.find(it-1)==st.end()){
                int x=it;
                int count=0;
                while(st.find(x)!=st.end()){
                        count++;
                        x=x+1;
                }
                max_count=max(max_count,count);
            }


        }

return max_count;
    }

*/
// =====================================================================================================
// SET MATIRX EUAL TO 0;

//  void setZeroes(vector<vector<int>>& matrix) {
//         int n=matrix.size();
//         int m=matrix[0].size();
//         vector<int> rows(n,0);
//         vector<int> col(m,0);

//         for(int i =0;i<n;i++){
//             for(int j=0;j<m;j++){
//                 if(matrix[i][j]==0){
//                         rows[i]=1;
//                         col[j]=1;

//                 }
//             }
//         }

//         for(int i =0;i<n;i++){
//             for(int j=0;j<m;j++){
//                 if(rows[i]==1 ||col[j]==1){
//                     matrix[i][j]=0;
//                 }
//             }
//         }

        
//         return;
//     }

// ==================================================================================
// spiral matrix



// class Solution {
// public:
//     vector<int> spiralOrder(vector<vector<int>>& matrix) {
//         int n=matrix.size();
//         int m=matrix[0].size();
//         int left=0;
//         int right=m-1;
//         int top=0;
//         int bottom=n-1;

//         vector<int> ans;

// while (left <= right && top <= bottom) {
//     for (int i = left; i <= right; i++)
//         ans.push_back(matrix[top][i]);
//     top++;

//     if (top > bottom) break;   

//     for (int i = top; i <= bottom; i++)
//         ans.push_back(matrix[i][right]);
//     right--;

//     if (left > right) break;   

//     for (int i = right; i >= left; i--)
//         ans.push_back(matrix[bottom][i]);
//     bottom--;

//     if (top > bottom) break;   

//     for (int i = bottom; i >= top; i--)
//         ans.push_back(matrix[i][left]);
//     left++;
// }

//     return ans;
//     }

// };



class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> matrix(n, vector<int>(n, 0));
        int top = 0, bottom = n - 1;
        int left = 0, right = n - 1;
        int num = 1;

        while(top <= bottom && left <= right) {
            for(int i = left; i <= right; i++)
                matrix[top][i] = num++;
            top++;

            for(int i = top; i <= bottom; i++)
                matrix[i][right] = num++;
            right--;

            if(top <= bottom) {
                for(int i = right; i >= left; i--)
                    matrix[bottom][i] = num++;
                bottom--;
            }

            if(left <= right) {
                for(int i = bottom; i >= top; i--)
                    matrix[i][left] = num++;
                left++;
            }
        }

        return matrix;
    }
};


// ========================================================================================
// NUMBER OF SUBARRAY WITH SUM K

// BRUTE FORCE IS O(N^3)

class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        map<int, int> mp;
        mp[0] = 1;
        int presum = 0, cnt = 0;

        for (int i = 0; i < nums.size(); i++) {
            presum += nums[i];
            int remove = presum - k;
            if(mp.find(remove)!=mp.end()){
              cnt += mp[remove];
            }
           
            mp[presum]++;
        }

        return cnt;
    }
};





}

*/

// =======================================================================================================
