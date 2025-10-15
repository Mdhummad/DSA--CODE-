
// JB BHI PARENTHISIS KI BAAT HO RHI HO THINK ABOUT STACK
// ======================================================================




// 1021. Remove Outermost Parentheses
class Solution {
public:
    string removeOuterParentheses(string s) {
       string result="";
        int count=0;
        int n=s.length();
        for(int i=0;i<n;i++){

if(s[i]=='('){
if(count>0)result+='(';
count++;
}
if(s[i]==')'){
    if(count>1)result+=')';
    count--;
}

}
return result;
    }
};

// =================================================================================================
// LEETCODE 151 REVERSE A STRING

class Solution {
public:
    string reverseWords(string s) {
        reverse(s.begin(),s.end());
        int i=0;
        int l=0;
        int r=0;
        int n=s.length();
while(i<n){
while(i<n && s[i]!=' '){
s[r]=s[i];
r++;
i++;
}

if(l<r){
    reverse(s.begin()+l,s.begin()+r);
    s[r]=' ';
    r++;
    l=r;
}
i++;
}
s=s.substr(0 ,r-1);
return s;


    }
};

// =================================================================================
// leetcode 1903 largest odd number in substring

class Solution {
public:
    string largestOddNumber(string num) {
        int n = num.length();
        int index = -1;

        // traverse from right to left
        for (int i = n - 1; i >= 0; i--) {
            int number = num[i] - '0';
            if (number % 2 != 0) {
                index = i;
                break;
            }
        }

        
        if (index == -1)
            return "";

        return num.substr(0, index + 1);
    }
};
// ==================================================================================
// LEETCODE 14(LONGEST COMMON PREFIX)
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
      string result="";
      int n=strs.size();
      sort(strs.begin(),strs.end());
      string first=strs[0];
      string last=strs[n-1];
    int s=first.length();

for(int i=0;i<s;i++){
    if(first[i]==last[i]){
        result+=first[i];
    }
     else{
            break;
        }
}
return result;
    }
};
// ===================================================================================================
// leetcode (isomorphic string)

class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char,char>mp1;
        unordered_map<char,char>mp2;
int n=s.length();

for(int i=0;i<n;i++){
char ch1=s[i];
char ch2=t[i];

if(mp1.find(ch1)!=mp1.end() && mp1[ch1]!=ch2 || mp2.find(ch2)!=mp2.end() && mp2[ch2]!=ch1){
    return false;
}
mp1[ch1]=ch2;
mp2[ch2]=ch1;
}
return true;

    }
}; 

// ================================================================================
// BRUTE FORCE
class Solution {
public:
    bool rotateString(string s, string goal) {
        int n=s.length();
        for(int i=0;i<n;i++){
            rotate(s.begin(),s.begin()+1,s.end());
            if(s==goal)return true;
        }
        return false;
    }
};

// OPTIMAL APPROACH
/*

IF YOU CONCATENATE A STRING WITH ITSELF IT WILL CONTAIN ALL ROTATIOS AS
 A SUBSTRING IN IT

*/


class Solution {
public:
    bool rotateString(string s, string goal) {
    if(s.length()!=goal.length())return false;
    int n=goal.length();
    int i=0;
    int j=0;
    s+=s;
    int m=s.length();
    while(j<n){
        
        if(s[i]==goal[j]){
            i++;
            j++;
            if(j==n) return true;
        }else{
        i=i-j+1;
        j=0;
        }
    }
    return true;
    }
};
// ==========================================================================================
// VALID ANAGRAM LEETCODE 242

bool isAnagram(string s, string t) {
sort(s.begin(),s.end());
sort(t.begin(),t.end());
if(s==t)return true;
else return false;
    }
//  OR

 bool isAnagram(string s, string t) {

vector<int>count(26,0);

for(char &ch : s){
    count[ch-'a']++;
}
    

for(char &ch : t){
    count[ch-'a']--;
}   
    
    
for(int i=0;i<26;i++){
    if(count[i]!=0)return false;
}
    
return true;
    
    
    }
// =======================================================================================================
// LEETCOE 451

class Solution {
public:
    string frequencySort(string s) {
        int freq[256] = {0}; // frequency of all ASCII characters

        // Count frequency
        for (char ch : s) {
            freq[ch]++;
        }

        // Store characters and their frequency in a vector
        vector<pair<char,int>> vec;
        for (int i = 0; i < 256; i++) {
            if (freq[i] > 0) {
                vec.push_back({(char)i, freq[i]});
            }
        }

        // Sort vector by frequency in descending order
        sort(vec.begin(), vec.end(), [](pair<char,int> a, pair<char,int> b){
            return a.second > b.second;
        });

        // Build the result
        string result = "";
        for (auto p : vec) {
            for (int i = 0; i < p.second; i++) {
                result += p.first;
            }
        }

        return result;
    }
};



//   ORR

// ===========================================================================================
// leetcode 1614 Maximum Nesting Depth of the Parentheses

class Solution {
public:
    int maxDepth(string s) {
      int maxi=0;
      int n=s.length();
      stack<char>st;
      for(int i=0;i<n;i++){
       
        if(s[i]=='('){
            st.push('(');
        }
        int x=st.size();
         maxi=max(maxi,x);
        if(s[i]==')'){
            st.pop();

        }
 }
 return maxi;  
    }
};


// ========================================================================
//LEETCODE 13 INTEGER TO ROMAN

class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char,int> mp;
        mp['I']=1;
        mp['V']=5;
        mp['X']=10;
        mp['L']=50;
        mp['C']=100;
        mp['D']=500;
        mp['M']=1000;
        int ans=0;
        int n=s.length();
        for(int i=0;i<n;i++){
        if(mp[s[i]]<mp[s[i+1]]){
            ans-=mp[s[i]];
        }
        else{
            ans+=mp[s[i]];
        }
        }
        return ans;

    }
};


// ============================================================================
// leetcode 8  ( ATOI   )

class Solution {
public:
    int myAtoi(string s) {
        if(s.length()==0) return 0;

        int i=0;
        while(i<s.size() && s[i]==' '){
            i++;
        }
        s=s.substr(i);
        int sign=+1;
        long ans=0;

        if(s[0]=='-') sign=-1;

        int MAX=INT_MAX;
        int MIN=INT_MIN;
        i=(s[0]=='+'||s[0]=='-')?1:0;


        while(i<s.length()){
            if(s[0]==' '|| !isdigit(s[i]))break;
            ans=ans*10 +s[i]-'0';
            if(sign==-1 && -1*ans<MIN)return MIN;
            if(sign==1 && ans>MAX) return MAX;
            i++;
        }
        return(int)(sign*ans);
    }
};
// =================================================================================
// COUNT NUMBER OF SUBSTRING(leetcode 1759)
class Solution {
public:
    int countHomogenous(string s) {
        int ans = 0;
        int length = 0;

        for (int i = 0; i < s.length(); i++) {
          
            if (i > 0 && s[i] == s[i - 1]) {
                length += 1;
            } 
            else {
            
                length = 1;
            }

            ans = (ans + length) % 1000000007;  
        }

        return ans;
    }
};

// =================================================================================
// LEETCODE==1781
// find all substring



class Solution {
public:
    int beautySum(string s) {
        int n=s.size();
        int ans=0;

     for(int i=0;i<n;i++){
        unordered_map<char,int>m;
        for(int j=i;j<n;j++){
            m[s[j]]++;
            int m_f=0;
            int l_f=INT_MAX;
            for(auto a: m){
                m_f=max(m_f,a.second);
                l_f=min(l_f,a.second);
            }
                ans+=(m_f-l_f);
        }
     } 
     return ans;

    }
};

// ======================================================================
Leetcode 921



class Solution {
public:
    int minAddToMakeValid(string s) {
        int open = 0;
        int size = 0;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '(') {
                if (open == 0)
                    size++;
                else {
                    open--;
                }
            }
            else if (s[i] == ')') {
                if (size != 0) {
                    size--;
                }
                else {
                    open++;
                }
            }
        }
        if (open != 0) return open;
        return size;
    }
};

// ======================================================================================
