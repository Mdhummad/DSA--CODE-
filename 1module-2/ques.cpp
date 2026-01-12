1 leetcode 3623

class Solution {
public:
int M =1e9+7;
    int countTrapezoids(vector<vector<int>>& points) {
        unordered_map<int,int>mp;
        for(auto &point:points){
            int y=point[1];
            mp[y]++;
        }
        long long result=0;
        long long prev_horizontal_line=0;

        for(auto & it :mp){
            int count=it.second;
            long long horizontal_lines=(long long)count* (count-1)/2;
            result+=horizontal_lines *prev_horizontal_line;
            prev_horizontal_line+=horizontal_lines;
        }
        return result % M;
        
    }
};

// ==========================================================================================
