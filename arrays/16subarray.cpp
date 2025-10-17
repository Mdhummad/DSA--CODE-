//CONTINOUS SUBARRAY SUM

class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
         int n=nums.size();
        for(int i=0;i<n;i++){
            int sum=0;
            for(int j=i;j<n;j++){
                sum+=nums[j];
                if( j- i + 1 >= 2 && sum%k==0)return true;
             
            }
        }
        return false;
    }
};


//ABOVE CODE IS GIVING TLE

//OPTIMIZED CODE (BY MIK)
class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
         unordered_map<int,int>modulo_tracker;
         modulo_tracker[0]=-1;
         int n=nums.size();
         int sum=0;

         for(int i=0;i<n;i++){
            sum+=nums[i];
            if(k!=0){
                sum%=k;
            if(modulo_tracker.find(sum)!=modulo_tracker.end()){
                if(i-modulo_tracker(sum)>1)return true;
            } 
            else{
                modulo_tracker[sum]=i;
            }  
            }
         }
         return false;
    }
};