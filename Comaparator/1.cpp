                // DONE VIA CODE WITH MIK
//it is a function or an object that is used to compare elements
//used to decide the order of elements inside a data structure (vector,set,map heap)

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool mycomparator(int a,int b){
    if(a>b)return true;
    else return false;
}

bool comparastor2(pair<int,int>p1,pair<int,int>p2){
   if(p1.first==p2.first){
   return p1.second >p2.second;

   }
    
    return p1.first>p2.first;
}

void print(vector<int>& vec ){
    for(auto it: vec){
        cout<<it<<" ";
    }
}


int main(){
vector<int> vec={1,2,3,2,4,5,2,1,3,6,7};
sort(vec.begin(),vec.end(),mycomparator);
print(vec);



vector<pair<int,int>> v={{2,4},{9,8},{5,6}}
sort(v.begin(),v.end(),comparastor2);

}

// ==========================================================================================
// leetcode 1356 
remember how code doesnot work then we have to write comparator outside class and this workss


  bool helper(int a,int b){
        int count1=__builtin_popcount(a);
        int count2=__builtin_popcount(b);

        if(count1==count2)return a<b;
        else return count1<count2;
    }

class Solution {
public:
   


    vector<int> sortByBits(vector<int>& arr) {
        
        sort(arr.begin(),arr.end(), helper);
        return arr;
    }
};



// ===================================================================================================
                        //lambda epression
                        //very important ===>see again 
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


void print(vector<int>& vec ){
    for(auto it: vec){
        cout<<it<<" ";
    }
}


auto mylambda=[](int a,int b){
    return a>b;
};

int main(){
vector<int> vec={1,2,3,2,4,5,2,1,3,6,7};
sort(vec.begin(),vec.end(),[](int a,int b){
    return a>b;
});
// or

sort(vec.begin(),vec.end(),mylambda);



print(vec);




}



//=======================================================================
LEETCODE 179

class Solution {
public:
    string largestNumber(vector<int>& nums) {
      
        sort(nums.begin(), nums.end(), [](int a, int b) {
            string s1 = to_string(a);
            string s2 = to_string(b);
            return s1 + s2 > s2 + s1;  
        });

   
        if (nums[0] == 0)
            return "0";

        string result = "";
        for (int num : nums)
            result += to_string(num);

        return result;
    }
};

// ========================================================
lc 905

class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        auto mylamda=[](int a,int b){
           return (a%2)<(b%2);
        };
        sort(nums.begin(),nums.end(),mylamda);
        return nums;
    }
};