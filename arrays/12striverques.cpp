/*
1-D ARRAY QUES
STRIVER SDE SHEET

1)largest element in an array
*/

/*
maximum size of array that can be defined in c++ is 10^6
globally we can define 10^7

*/

//================================================================================================
// QUESTIONS

// 1) largest element in an array
/*
BRUTE FORCE SOLUTION 
1)SORT THE ARRAY AND THEN PRINT LAST ELEMENT
TIME COMPLEXITY:O(NLOGN)


OPTIMAL SOLUTION
1)MAKE A MAX
2)ITERATE THROUGH THE ARRAY AND UPDATE MAX IF CURRENT ELEMENT IS GREATER THAN MAX
TIME COMPLEXITY :O(N)
*/
// =================================================================================================

// 2) SECOND LARGEST ELEMENT IN AN ARRAY
/*  
BRUTE FORCE SOLUTION
1)SORT THE ARRAY AND 
2)ITERATE THORIGH THE END AND FIND THE FIRST ELEMENT WHIHCH IS NOT EQUAL TO LARGEST ELEMENT
 TIME COMPLEXITY :O(NLOGN) +O(N)=O(NLOGN)

BETTER SOLUTION 
1)FIND LARGEST ELEMENT IN FIRST PASS
2)ITERATE THROUGH THE ARRAY AND UPDATE SECOND LARGEST ELEMENT IF CURRENT ELEMENT IS GREATER THAN SECOND LARGEST ELEMENT AND NOT EQUAL TO LARGEST ELEMENT
 TIME COMPLEXITY :O(N)+O(N)=O(2N)=O(N)


 OPTIMAL SOLUTION
 3)SOLUTIONN CODED
TIME COMPLEXITY:O(N) 

int solution(vector<int>& arr){
int max1=INT_MIN;
int max2=INT_MIN;
for(int i=0;i<n;i++){
if(arr[i]>max1){
max2=max1;
max1=arr[i];

}
else(arr[i]!=max1 && arr[i]>max2){
max2=arr[i];
}
}


}



*/

// =================================================================================================

// CHECK IF THE ARRAY IS SORTED OR NOT
/*
void checksorted(int arr[], int n) {
    bool sorted = true;
    for (int i = 1; i < n ; i++) {
        if (arr[i] < arr[i -1]) {
            sorted = false;
            break;
        }
    }
    if (sorted)
        cout << "Array is sorted" << endl;
    else
        cout << "Array is not sorted" << endl;
}

//=======================================================================================

// check if array is sorted and  rotated

class Solution {
public:
    bool check(vector<int>& nums) {
        int count = 0;
        int n = nums.size();
        
        for (int i = 0; i < n; ++i) {
            if (nums[i] > nums[(i + 1) % n]) {
                count++;
                if (count > 1) return false; // More than one break in order
            }
        }
        return true;
    }
};











TIME COMPLEXITY:O(N)
*/
//=================================================================================================


// REMOVE DUPLICATE IN SORTED ARRAY
/*
BRUTE FORCE SOLUTION
using a set

void remove_duplicate(vector<int>& arr){
 set<int> s;
 for(int 1=0;i<arr.size();i++){
 s.insert(arr[i]);
 }
 int idx=0;
 for(auto it:s){
 cout<<it<<"";
 arr[idx]==it;
    idx++;
 }
}

TIME COMPLEXITY: O(NLOGN)//DUER TO SET
SPACE COMPLEXITY: O(N)


OPTIMAL SOLUTION
// USING TWO POINTERS

void remove_duplicate(vector<int>& arr){
 int i=0;
 for(int j=1;j<arr.size();j++){
 if(arr[i]!=arr[j]){
 arr[i+1]=arr[j];
 i++;
 }
 return i+1; // return the new size of the array
SEEE WHY ARE WE RETURNING THE SIZE OF THE ARRAY (ASK GPT)
 }
/*
ANS

C++ arrays (or vectors) don't automatically shrink in size. So even after removing duplicates, the vector still physically has the same number of elements.
That’s why we return the new logical size (i + 1), which tells us:
Only the first i + 1 elements are now valid/unique.
Rest can be ignored.

*/


/*

time complexity : O(N)
SPACE COMPLEXITY: O(1)

*/

// =================================================================================================

// LEFT ROATATE BY ONE PLACE
// ROTATE THE ARRAY BY K PLACES


// see brute force solution once 
// TC=o(2N) and SC=O(1)


// arr = {1, 2, 3, 4, 5}, d = 2
// ➡ Left Rotation by 2:
// Output: {3, 4, 5, 1, 2}
// ⬅ Right Rotation by 2:
// Output: {4, 5, 1, 2, 3}


// ==================================================================================================

// MOVE ZERO TO END OF THE ARRAY

// BRUTE FORCE SOLUTION
// MAKE A TEMP ARRAY AND STORE ALL THE NON-ZERO ELEMNET IN IT
// THEN COPY THESE ELEMENET IN

/*
d

void move_zeroi_to_end(vector<int>& arr){
int temp[arr.size()];
int idx=0;
for(int i=0;i<arr.size();i++){
    if(arr[i]!=0){
    temp[idx]=arr[i];
    idx++;
    
    }

    for(int i=0;i<idx;i++){
        arr[i]=temp[i];
    }
        for(int i=idx;i<arr.size();i++){
        arr[i]=0;}

}

time complexity: O(N)
SPACE COMPLEXITY: O(N)

*/

// optimal solution
/*
void move_allzero_to_emd(vector<int>& arr){
int j=-1;
for(int i=0;i<n;i++){
if(arr[i]==0)
j=i;
break;
}
for(int i=j+1;i<n;i++){
if(arr[i]!=0){
swap(arr[i],arr[j]);
j++;}}

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        int j = 0; // pointer for placing non-zero elements

        for (int i = 0; i < n; i++) {
            if (nums[i] != 0) {
                swap(nums[i], nums[j]);
                j++;
            }
        }
    }
};




}
TIME COMPLEXITY: O(N)
SPACE COMPLEXITY: O(1)  NO EXTRA SPACE USED


*/

// =================================================================================================

// linear search
/*
void linear_search(int arr[], int n, int key) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            cout << "Element found at index: " << i << endl;
            return;
        }
    }
    cout << "Element not found" << endl;
}

*/

//================================================================================================
// union of two sorted array

// BRUTE FORCE SOLUTION
/*
vector<int> union(vector<int>& arr1, vector<int>& arr2) {
    set<int> s;
    vector<int> result;
    for (int i = 0; i < arr1.size(); i++) {
        s.insert(arr1[i]);
    }
    for (int i = 0; i < arr2.size(); i++) {
        s.insert(arr2[i]);
    }
    for (auto it : s) {
        vector<int> result.push_back(it);
    }
        return result;
}
        TIME COMPLEXITY:O(NLOGN) //DUE TO SET
        SPACE COMPLEXITY: O(N) //DUE TO SET

*/

// OPTIMAL SOLUTION
/*
#include <iostream>
#include <vector>
using namespace std;

vector<int> union_sorted(const vector<int>& arr1, const vector<int>& arr2) {
    vector<int> result;
    int i = 0, j = 0;

    while (i < arr1.size() && j < arr2.size()) {
        if (arr1[i] < arr2[j]) {
            if (result.empty() || result.back() != arr1[i])
                result.push_back(arr1[i]);
            i++;
        } else if (arr1[i] > arr2[j]) {
            if (result.empty() || result.back() != arr2[j])
                result.push_back(arr2[j]);
            j++;
        } else {
            // Both are equal
            if (result.empty() || result.back() != arr1[i])
                result.push_back(arr1[i]);
            i++;
            i++;
        }
    }

    // Remaining elements from arr1
    while (i < arr1.size()) {
        if (result.empty() || result.back() != arr1[i])
            result.push_back(arr1[i]);
        i++;
    }

    // Remaining elements from arr2
    while (j < arr2.size()) {
        if (result.empty() || result.back() != arr2[j])
            result.push_back(arr2[j]);
        j++;
    }

    return result;
}


}

TIME COMPLEXITY: O(N+M) //N AND M ARE THE SIZE OF THE TWO ARRAYS
SPACE COMPLEXITY: O(N+M) //DUE TO RESULT VECTOR
*/

// =====================================================================================================================

// vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
    // unordered_map<int, int> freq;
    // vector<int> result;

    // // Count frequency of elements in nums1
    // for (int num : nums1) {
    //     freq[num]++;
    // }
 
//     // Check for intersection
//     for (int num : nums2) {
//         if (freq[num] > 0) {
//             result.push_back(num);
//             freq[num]--;  // Decrease frequency for multiset intersection
//         }
//     }

//     return result;
// }


// =================================================================================================

// intersection of two sorted array


// BRUTE FORCE SOLUTION

// vector<int> intersection(vector<int>& arr1,vetctor<int>& arr2) {
//     int n=arr1.size();
//     int m=arr2.size();
//     int vis[m]={0};
//     vector<int> result;
//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < m; j++) {
//             if (arr1[i] == arr2[j] && vis[j] == 0) {
//                 result.push_back(arr1[i]);
//                 vis[j] = 1; // Mark this element as visited
//                 break;
//             }
//             if(arr1[i] < arr2[j]) {
//                 break; // Since both arrays are sorted, we can break early
//             }
//         }
//     }
// }




// OPTIMAL SOLUTION
/*
vector<int> intersection(vector<int>& arr1,vetctor<int>& arr2) {
    int n=arr1.size();
    int m=arr2.size();
    vector<int> result;
    int i = 0, j = 0;
    while(i<n && j<m){
    if(arr1[i]<arr[j]){
    i++;
    }
    
    else if(arr1[i]>arr2[j]){
    j++;
}
    else{
        result.push_back(arr1[i]);
        i++;
        j++;}
    }
        return result;
  
}
*/
// time complexity: O(N+M) //N AND M ARE THE SIZE OF THE TWO ARRAYS
// space complexity: O(N+M) //DUE TO RESULT VECTOR

// =================================================================================================
// FIND THE MISSING NUMBER IN AN ARRAY

//better solution
/*
void find_missing(vector<int>& arr, int n) {
    vector<int> hash_arr(n + 1, 0);  // Initialize hash array with size n+1 and all 0s

    // Count each number's occurrence
    for (int i = 0; i < arr.size(); i++) {
        hash_arr[arr[i]]++;
    }

    // Find the number that is missing
    for (int i = 1; i <= n; i++) {
        if (hash_arr[i] == 0) {
            cout << "The missing number is: " << i << endl;
            return;
        }
    }
}

// time complexity: O(N)
// space complexity: O(N) //due to hash array
*/ 


// OPTIMALSOLUTION

/*
//SUMMATION METHOD

void fin_missing(vector<int>& arr,int n){
int sum=(n*(n+1))/2;
int mis_element=sum;
for(int i=0;i<arr.size();i++){
mis_element-=arr[i];
}
return mis_element;
}

// time complexity: O(N)
// space complexity: O(1) // no extra space used



// XOR METHOD
void find_missing_xor(vector<int>& arr, int n) {
    int xor1 = 0;
    int xor2=0;
    for (int i = 1; i <= n; i++) {
        xor1 ^= i; 
    }
    for (int i = 0; i < arr.size(); i++) {
        xor2 ^= arr[i]; 
    }
    int missing_number = xor1 ^ xor2;
    cout << "The missing number is: " << missing_number << endl;


}
// time complexity:O(n)+O(n)=O(2n)=O(n)
// space complexity: O(1) // no extra space used

 
*/

// ================================================================================================
// find the max consecutive one
// most optimal solution

/*
void findmax1(vector<int>& arr) {
    int max_count = 0;
    int current_count = 0;

    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] == 1) {
            current_count++;
            max_count = max(max_count, current_count);
        } else {
            current_count = 0; // Reset count when a zero is encountered
        }
    }

    cout << "Maximum consecutive ones: " << max_count << endl;
}

// time complexity: O(N)
// space complexity: O(1) // no extra space used
*/


//=================================================================================================

// FIND THE NUMBER OF PAIRS IN AN ARRAY THAT SUMS TO A GIVEN VALUE
/*
void numop(vector<int>& arr,){
for (int i = 0; i < n - 1; i++) {
    for (int j = i + 1; j < n; j++) {
        if (arr[i] + arr[j] == x) count++;
    }
}

}

#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

void count_pairs_with_sum(const vector<int>& arr, int x) {
    unordered_map<int, int> freq;
    int count = 0;

    for (int i = 0; i < arr.size(); i++) {
        freq[arr[i]]++;
    }

    for (int i = 0; i < arr.size(); i++) {
        int complement = x - arr[i];
        count += freq[complement];

        // If complement and current element are the same, subtract one
        if (complement == arr[i]) {
            count--;
        }
    }

    // Each pair is counted twice, so halve the result
    count /= 2;

    cout << "Number of pairs with sum " << x << " is: " << count << endl;
}

*/


// ==================================================================================================
// FIND THE NUMBER THAT APPEARS ONCE IN AN ARRAY WHERE EVERY OTHER ELEMENT APPEARS TWICE

// BRUTE FORCE SOLUTION
/*void find_unique(vector<int>& arr) {
    for (int i = 0; i < arr.size(); i++) {
        int count = 0;
        for (int j = 0; j < arr.size(); j++) {
            if (arr[i] == arr[j]) {
                count++;
            }
        }
        if (count == 1) {
            cout << "The unique element is: " << arr[i] << endl;
            return;
        }
    }
}

// time complexity: O(N^2)
// space complexity: O(1) // no extra space used




// BETTER SOLUTION USING HASHING


// IF ARRAY HAVE BIG NUMBER 10^9 OR MORE THAN 10^9
// SO WE CAN USE UNORDERED MAP

void find_unique (vector<int>& arr){
map<long long, int> hash; // using map for large numbers
for (int i = 0; i < arr.size(); i++) {
    hash[arr[i]]++;
}
for (auto it : hash) {
    if (it.second == 1) {
        cout << "The unique element is: " << it.first << endl;
        return;
    }
}





// OPTIMAL SOLUTION USING XOR
void find_unique_xor(vector<int>& arr) {
    int unique = 0;
    for (int i = 0; i < arr.size(); i++) {
        unique ^= arr[i]; // XOR operation
    }
    cout << "The unique element is: " << unique << endl;
}

// time complexity: O(N)
// space complexity: O(1) // no extra space used

*/



// =================================================================================================
// FIND THE FIRST REPEATING ELEMENT IN AN ARRAY USING XOR

/*
void find_first_repeating(vector<int>& arr) {
    int n = arr.size();
    int xor_result = 0;

    // Step 1: XOR all elements
    for (int i = 0; i < n; i++) {
        xor_result ^= arr[i];
    }

    // Step 2: Find the first repeating element
    for (int i = 0; i < n; i++) {
        if ((xor_result ^ arr[i]) == 0) {
            cout << "The first repeating element is: " << arr[i] << endl;
            return;
        }
    }
}

// ==============================================================================================================

//FIND THE LONGEST SUBARRAY WITH SUM k

/*
PRINTING ALLL SUBARRAYS


// brute force solution

#include <iostream>
using namespace std;

int main() {
    int n = 10;
    int arr[n] = {1,2,3,4,5,6,7,8,9,10};

    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            int sum = 0; // Reset sum for each subarray

            for (int k = i; k <= j; k++) {
                cout << arr[k] << " ";
                sum += arr[k];
            }

            cout << "\nSum: " << sum << endl << endl;
        }
    }

    return 0;
}
// TIME COMPLEXITY=O(N^3)


}

*/
 
/*

// BETTER SOLUTION

void longest_subarray_sum(vector<int>& arr, int x) {
    int n = arr.size();
    int len = 0;
    for (int i = 0; i < n; i++) {
        int sum = 0;  // reset sum for each i
        for (int j = i; j < n; j++) {
            sum += arr[j];
            if (sum == x) {
                len = max(len, j - i + 1);
            }
        }
    }

    cout << len << endl;
}

//TIME COMPLEXITY=O(N^2)
// SPACE COMPLEXITY=O(N)




//IF THE ARRAY HAS POSITIVE ,NEGATIVE AND ZERO  THE MOST OPTIMIZED SOLUTION 


 
int longest_subarray_with_sum_k(vactor<int>& arr,long long k){

    map<long long, int>presummapl;
    int maxlen=0;
    long long sum=0;

    for(int i=0i<arr.size();i++){

    sum+=arr[i];
    if(sum==k){
    maxlen=max(maxlen,i+1);}

    int rem=sum-k;

    if(presummap.find(rem)!= presummap.end()){
    int len=i-presummap[rem];
    maxlen=max(maxlen,len);}


// REMEMBER WHY HAVE WE DONE BELOW THING AND NOT JUST presumamp[sum]=i



    if(presummap.find(sum)==presummap.end()){
    presummap[sum]=i;}
    }
    return maxlen;
    }






IF ARRY CONTAIN ONLY POSITIVE AND ZERO
#include<bits/stdc++.h>
int longestSubarrayWithSumK(vector<int> a, long long k) {
    int left = 0, right = 0;
    long long sum = a[0];
    int maxLen = 0;
    int n = a.size();

    while (right < n) {
        while (left <= right && sum > k) {
            sum -= a[left];
            left++;
        }

        if (sum == k) {
            maxLen = max(maxLen, right - left + 1);
        }

        right++;
        if (right < n) sum += a[right];
    }

    return maxLen;

    TIME COMLEXITY :O(N)
}





*/

