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
