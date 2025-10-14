/*
RUNTIME ERROR


CODE:
class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
       int n=nums.size();
       for(int i=0;i<n;i++){
        nums[i]=nums[i]+nums[i-1];
       } 
     return nums;
    }

ERROR:
//Line 1122: Char 34: runtime error: addition of unsigned offset to 0x502000000090 overflowed to 0x50200000008c (stl_vector.h)
SUMMARY: UndefinedBehaviorSanitizer: undefined-behavior /usr/lib/gcc/x86_64-linux-gnu/14/../../../../include/c++/14/bits/stl_vector.h:1131:34

SOLUTION:
class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int n = nums.size();
        for (int i = 1; i < n; i++) {
            nums[i] = nums[i] + nums[i - 1];
        }
        return nums;
    }
};



*/