// using extra array for finding prefixsum

// class Solution {
// public:
//     vector<int> runningSum(vector<int>& nums) {
//        int n =nums.size()-1;
//        vector<int> run(n);
//        run[0]=nums[0];
//        for(int i=1;i<=n;i++){
//         run[i]=nums[i]+run[i-1];
//        } 
//        return run;
//     }
// };



//==================================================================================================================================

//writing prefix sum in same array
// class Solution {
// public:
//     vector<int> runningSum(vector<int>& nums) {
//         int n = nums.size();
//         for (int i = 1; i < n; i++) {
//             nums[i] = nums[i] + nums[i - 1];
//         }
//         return nums;
//     }
// };
