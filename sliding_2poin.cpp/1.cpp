// TYPE OF PROBLEM IN 2 POINTER AND SLIDING WINDOW PROBLEM
// 1)CONSTANT WINDOW
// 2)LONGEST SUBARRAY
// 3)NUMBER OF SUBARRAY
// 4)SHORTEST MINIMUM WINDOW WITH SOME CONDITION

// ============================================================================
// 1)constant windoe
#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> arr = {2, 1, 5, 1, 3, 2};
    int n = arr.size();
    int k = 3;

    int l = 0, r = k - 1;
    int sum = 0;

    // compute sum of first window
    for (int i = 0; i < k; i++)
        sum += arr[i];

    int maxSum = sum;

    while (r < n - 1) {
        sum = sum - arr[l];  // remove old left
        l++;                 // move left
        r++;                 // move right
        sum = sum + arr[r];  // add new right
        maxSum = max(maxSum, sum);
    }

    cout << "Maximum sum of subarray of size " << k << " = " << maxSum << endl;
}
// ===============================================================================================
// LONGEST SUBARRAY (WITH SOME CONDITION)
// BRUTE FORCE APPROACH WILL BE N^2 ==>USING 2 LOOPS

// BETTER APPROACH WOULD BE USING 2 POINTERS
/*
r(right)--> that will expand
l(left)--> that will 
*/ 

// PSUEDO CODE
// below code is to find max length subarray with sum =k
int max_len_subarray(vector<int> nums, int k) {
    int l = 0, r = 0;
    int sum = 0;
    int maxlength = 0;
    int n = nums.size();

    while (r < n) {
        sum += nums[r];   // add current element

        if (sum <= k) {   // valid window
            maxlength = max(maxlength, r - l + 1);
        }
        else if (sum > k) {  // shrink window
            sum -= nums[l];
            l++;
        }

        r++;  // expand right pointer
    }

    return maxlength;
}


// OR USE WHILE LOOP INSTAD OF IF STATEMENT



int max_len_subarray(vector<int> nums, int k) {
    int l = 0, r = 0;
    int sum = 0;
    int maxlength = 0;
    int n = nums.size();

    while (r < n) {
        sum += nums[r];

        // Shrink window until sum <= k
        while (sum > k && l <= r) {
            sum -= nums[l];
            l++;
        }

        // Now sum <= k, update maximum length
        if (sum <= k) {
            maxlength = max(maxlength, r - l + 1);
        }

        r++;
    }

    return maxlength;
}


// TIME COMPLEXITY==O(2N)
// ===================================================================
// SEE VIDEO ONCE
//OPTIMAL SOLUTION==> APPROACH IS TO KEEP WINDOW SIZE TO THE VALUE THAT IS ALLOTED TO MAXLENGTH
// SO TO ABOVE CODE WE JUST ADD A IF STATEMENT INSTEAD OF WHILE STATEMENT

int max_len_subarray(vector<int> nums, int k) {
    int l = 0, r = 0;
    int sum = 0;
    int maxlength = 0;
    int n = nums.size();

    while (r < n) {
        sum += nums[r];   // add current element
       if (sum > k) {  // shrink window
            sum -= nums[l];
            l++;
        }
      
       else  if (sum <= k) {   // valid window
            maxlength = max(maxlength, r - l + 1);
        }
      

        r++;  // expand right pointer
    }

    return maxlength;
}


// TC=O(N)



// ===================================================================================================
// NUMBER OF SUBARRAY WITH SOME CONDITION\

// WILL BE SOLVED USING PATTER 2

// =====================================================================
// SHORTEST MINIMUM WINDOW WITH SOME CONDITION7

// WILL BE SOLVED BY PATTERN 2

// ==================================================================================================================

// MAXIMUM POINT YOU CAN OBTAIN FROM CARDS


/*
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

*/
// ============================================================================================
// leetcode 3 

//BRUTE FORCE
int lengthOfLongestSubstring(string s) {
    int n = s.size();
    int maxLen = 0;

    for (int i = 0; i < n; i++) {
        vector<int> hash(256, 0); // frequency map for each character

        for (int j = i; j < n; j++) {
            int x = s[j];
            if (hash[x] == 1)  // duplicate found
                break;

            hash[x] = 1; // mark as seen
            maxLen = max(maxLen, j - i + 1);
        }
    }
    return maxLen;
}


// OPTIMAL

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        int l = 0, r = 0;
        int max_length = 0;
        map<char, int> freq;

        while (r < n) {
            if (freq.find(s[r]) != freq.end() && freq[s[r]] >= l) {
                l = freq[s[r]] + 1;
            }

            freq[s[r]] = r;
            max_length = max(max_length, r - l + 1);
            r++;
        }

        return max_length;
    }
};

// =====================================================================================
// maximum number of ones

// Brute force
  int longestOnes(vector<int>& nums, int k) {
        int n = nums.size();
        int maxLen = 0;

        for (int i = 0; i < n; i++) {
            int zeroCount = 0;
            for (int j = i; j < n; j++) {
                if (nums[j] == 0)
                    zeroCount++;

                if (zeroCount > k)
                    break;

                maxLen = max(maxLen, j - i + 1);
            }
        }
        return maxLen;
    }
// OPRIMAL
class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int n = nums.size();
        int l = 0, r = 0;
        int zeroes = 0, max_len = 0;

        while (r < n) {
            if (nums[r] == 0) zeroes++;

            while (zeroes > k) {
                if (nums[l] == 0) zeroes--;
                l++;
            }

            max_len = max(max_len, r - l + 1);
            r++;
        }

        return max_len;
    }
};

//====================================================================================================
// Fruits into baskets
// max length subarray with at most 2 type of number


// BRUTE FORCE
int fruit_in_basket(vector<int> nums, int n) {
    int max_len = 0;

    for (int i = 0; i < n; i++) {
        set<int> st;
        for (int j = i; j < n; j++) {
            st.insert(nums[j]);

            if (st.size() > 2)  // more than 2 types of fruits
                break;

            max_len = max(max_len, j - i + 1);
        }
    }

    return max_len;
}


// OPTIMAL

int fruit_in_basket(vector<int> nums, int n) {
    int max_len = 0;
    int l = 0, r = 0;
    map<int, int> mp;

    while (r < n) {
        mp[nums[r]]++;

        while (mp.size() > 2) {
            mp[nums[l]]--;
            if (mp[nums[l]] == 0)
                mp.erase(nums[l]);
            l++;
        }
        if(mp.size()<=k){
        max_len = max(max_len, r - l + 1);}
        r++;
    }

    return max_len;
}

//==================================================================================
// longest substring with atmost k distinct character
// =======================================================================================
// number of substring containing all 3 char

// BRUTE
int countSubstrings(string s) {
    int n = s.size();
    int count = 0;

    for (int i = 0; i < n; i++) {
        vector<int> hash(3, 0); // for 'a', 'b', 'c'
        for (int j = i; j < n; j++) {
            hash[s[j] - 'a']++;

            // check if all three characters are present
            if (hash[0] > 0 && hash[1] > 0 && hash[2] > 0)
                count++;
        }
    }

    return count;
}


//OPTIMAL
class Solution {
public:
    int numberOfSubstrings(string s) {
        int n=s.size();
        int count=0;
        vector<int>hash(3,-1);
    for(int i=0;i<n;i++){
        hash[s[i]-'a']=i;
        if(hash[0]!=-1 && hash[1]!=-1 && hash[2]!=-1){
         count += 1 + min({hash[0], hash[1], hash[2]}); 
    }

    }
    return count;
    }
};
// ===========================================================================

