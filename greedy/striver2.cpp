//n-meeting room

#include <bits/stdc++.h>
using namespace std;

// Class to hold solution logic
class Solution {
public:
    // Function to get all meetings that can be scheduled
    vector<int> maxMeetings(vector<int>& start, vector<int>& end) {
        // Store meetings as (end_time, start_time, original_index)
        vector<tuple<int, int, int>> meetings;
        for (int i = 0; i < start.size(); i++) {
            // i+1 for 1-based indexing
            meetings.push_back({end[i], start[i], i + 1}); 
           
        }

        // Sort by end time
        sort(meetings.begin(), meetings.end());

        vector<int> result; // To store meeting indices
        int lastEnd = -1;

        // Traverse sorted meetings
        for (auto& m : meetings) {
            int e = get<0>(m);
            int s = get<1>(m);
            int idx = get<2>(m);

            // If meeting starts after last one ends
            if (s > lastEnd) {
                // Store index
                result.push_back(idx); 
                // Update last end time
                lastEnd = e; 
            }
        }
        return result;
    }
};

// Main driver code
int main() {
    vector<int> start = {1, 3, 0, 5, 8, 5};
    vector<int> end   = {2, 4, 6, 7, 9, 9};

    Solution sol;
    vector<int> res = sol.maxMeetings(start, end);

    for (int idx : res) cout << idx << " ";
}

//=================================================================================
//jump game
class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n=nums.size();
        int maxindex=nums[1];
        for(int i=1;i<n;i++){
         if(i>maxindex)return false;
         maxindex=max(maxindex,i+nums[i]);
        }
        return true;
    }
};

// =========================================================
// jump game 2
class Solution {
public:
    int helper(int index, vector<int>& nums, vector<int>& dp) {
        if (index == 0) return 0;

        if (dp[index] != -1) return dp[index];

        dp[index] = 1e9;  
        for (int i = 0; i < index; i++) {
            if (i + nums[i] >= index) {
                dp[index] = min(dp[index], 1 + helper(i, nums, dp));
            }
        }

        return dp[index];
    }

    int jump(vector<int>& nums) {
        int n = nums.size();
        vector<int> dp(n, -1);
        return helper(n - 1, nums, dp);
    }
};
