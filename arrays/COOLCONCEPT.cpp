//lc= 1423

class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int n=cardPoints.size();
        int sum=0;
    int max_sum;
    int l_sum=0;
        if(n==k){
            for(auto it: cardPoints){
                sum+=it;
                
            }
            return sum;
        }

for(int i=0;i<k;i++){
    l_sum+=cardPoints[i];
   
}  
max_sum=l_sum;      
int r_pointr=n-1;

for(int i=k-1;i>=0;i--){
   
    l_sum-=cardPoints[i];
    l_sum+=cardPoints[r_pointr];
    max_sum=max(max_sum,l_sum);
    r_pointr--;
    // if(r_pointr<0)break;
}
 
return max_sum;

    }
};

// =======================================
LC-27
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int index = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != val) {
                nums[index] = nums[i];
                index++;
            }
        }
        return index; 
    }
};
