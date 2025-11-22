

// =============================================================================
// Monotonic stack
// where we store element in stack in a certain order
// ===========================================================================
//  NEXT GREATER ELEMENT CONCEPT
// CONCEPT

// arr[i] ke immediatly greater and on right

// HOW WE DO IT 
// 1) we traverse via back of array and make a new array called nextgreater
// 2) at last element we would write -1
// 3) after that we would put last element inside stack
// 4) now we would move toward index 0 on our initial array
// 5) now if the element on the top of array is greater than element at index then we would write that element(from stack) in nextgreater array
// 6) if the element inside the stack is smaller than element at index we we would just pop element at index


#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> arr = {4, 5, 2, 25}; 
    int n = arr.size();
    stack<int> st;

    for (int i = n - 1; i >= 0; i--) {
        while (!st.empty() && st.top() <= arr[i]) {
            st.pop();
        }
        if (!st.empty()) {
            next_greater[i] = st.top();
        }
        else{
            next_greater[i]=-1;
        }
        st.push(arr[i]);
    }

}


space complexity :O(n)


// =============================================
// leetcode  :nextgreater ele
// upar wala is just concept


class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
         int n=nums2.size();   
        unordered_map<int,int>m;
        stack<int>st;
        for(int i=n-1;i>=0;i--){
            while(!st.empty() && st.top() <= nums2[i] ){
                st.pop();
            }
        if (!st.empty()) {
                    m[nums2[i]]=st.top();
        }
        else{
            m[nums2[i]]=-1;
        }
        st.push(nums2[i]);
    }

vector<int>ans;
for(int i=0;i<nums1.size();i++){
    ans.push_back(m[nums1[i]]);
}

return ans;
    }
};

// ===================================================
// leeetode 
//next greater 2
// just double the array in mind

class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int n=nums.size();
        vector<int>ans(n,-1);
        stack<int>st;
        for(int i=2*n-1;i>=0;i--){
            while(!st.empty() && st.top()<=nums[i%n]){
                st.pop();
            }
            if(i<n){
                if(st.empty()){
                    ans[i]=-1;
                }
                else{
                    ans[i]=st.top();
                }
            }
            st.push(nums[i%n]);
        }
        return ans;
    }
};

// ==================================================
// next smaller element to right


#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> arr = {4, 5, 2, 25}; 
    int n = arr.size();
    stack<int> st;
    vector<int>near_samller;

    for (int i = 0; i <n; i++) {
        while (!st.empty() && st.top() >= arr[i]) {
            st.pop();
        }
        if (!st.empty()) {
            near_smaller[i] = st.top();
        }
        else{
            near_smaller[i]=-1;
        }
        st.push(arr[i]);
    }

}

// ================================================
// next smaller element to left


#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> arr = {4, 5, 2, 25}; 
    int n = arr.size();
    stack<int> st;
    vector<int>near_samller;

    for (int i = n-1; i >=0; i++) {
        while (!st.empty() && st.top() >= arr[i]) {
            st.pop();
        }
        if (!st.empty()) {
            near_smaller[i] = st.top();
        }
        else{
            near_smaller[i]=-1;
        }
        st.push(arr[i]);
    }

}

// ===============================================================
// TRAPPING RAIN WATER

// APPROACH 1

// Brute force 
/*
1)find leftmax and right max array
2)then for each index apply(summation of ,im(leftmax,rightmax)-1)
*/
class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        if (n <= 2) return 0;

        vector<int> leftMax(n), rightMax(n);

        leftMax[0] = height[0];
        for (int i = 1; i < n; i++) {
            leftMax[i] = max(leftMax[i - 1], height[i]);
        }

        rightMax[n - 1] = height[n - 1];
        for (int i = n - 2; i >= 0; i--) {
            rightMax[i] = max(rightMax[i + 1], height[i]);
        }

        int totalWater = 0;
        for (int i = 0; i < n; i++) {
            totalWater += min(leftMax[i], rightMax[i]) - height[i];
        }

        return totalWater;
    }
};
////////////////////////////////////////////////////
// APPROACH 2

class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();
        int l_max=0;
        int r_max=0;
        int l=0;
        int r=n-1;
        int total=0;
        while(l<r){
            if(height[l]<=height[r]){
                if(l_max > height[l]){
                    total+=l_max-height[l];
                    l=l+1;
                }
                else{
                    l_max=height[l];
                    l=l+1;
                }
            }
            else{
                if(r_max >height[r]){
                    total+=r_max-height[r];
                    r=r-1;
                }
                else{
                    r_max=height[r];
                    r=r-1;

                }
            }

        }
        return total;
    }
};
//===============================================================
// leetcode 907
// sum of subarray minimum

// OPTIMAL SOLUTION 
//MOST HARD STACK QUESTION

class Solution {
public:
    vector<int> nse(vector<int>& arr) {
        int n = arr.size();
        vector<int> ans(n);
        stack<int> st;

        for (int i = n - 1; i >= 0; i--) {
            while (!st.empty() && arr[st.top()] >= arr[i]) {
                st.pop();
            }
            ans[i] = st.empty() ? n : st.top();
            st.push(i);
        }
        return ans;
    }

    vector<int> pse(vector<int>& arr) {
        int n = arr.size();
        vector<int> ans(n);
        stack<int> st;

        for (int i = 0; i < n; i++) {
            while (!st.empty() && arr[st.top()] > arr[i]) {
                st.pop();
            }
            ans[i] = st.empty() ? -1 : st.top();
            st.push(i);
        }
        return ans;
    }

    int sumSubarrayMins(vector<int>& arr) {
        int mod = 1e9 + 7;
        int n = arr.size();

        vector<int> next = nse(arr);
        vector<int> prev = pse(arr);

        long long ans = 0;

        for (int i = 0; i < n; i++) {
            long long left = i - prev[i];
            long long right = next[i] - i;
            ans = (ans + (long long)arr[i] * left * right) % mod;
        }

        return ans;
    }
};

// =====================================================================
// leetcode 735
// asteroids

class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int> st;
        int n = asteroids.size();

        for (int i = 0; i < n; i++) {
            int a = asteroids[i];

            while (!st.empty() && st.top() > 0 && a < 0 && st.top() < abs(a)) {
                st.pop();
            }

            if (!st.empty() && st.top() > 0 && a < 0) {
                if (st.top() == abs(a)) {
                    st.pop();
                }
            } else {
                st.push(a);
            }
        }

        vector<int> result(st.size());
        for (int i = st.size() - 1; i >= 0; i--) {
            result[i] = st.top();
            st.pop();
        }

        return result;
    }
};

// ==========================================================