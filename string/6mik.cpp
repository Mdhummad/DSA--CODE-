// STRING COMPRESSION
// LEETCODE 443

//     int compress(vector<char>& chars) {
//     int n=chars.size();
//     int i=0;
//     int indx=0;

//     while(i<n){
//     char curr_indx=chars[i];
//     int count=0;


// while(i<n && chars[i]==curr_indx){
//     count++;
//     i++;
// }



// chars[indx]=curr_indx;
// indx++;

// if(count>1){
// string count_ind=to_string(count);

// for(auto it: count_ind){
//     chars[indx]=it;
//     indx++;}


// }
// }

// return indx;
    
// }
    


// =============================================================================================================
// LEETCODE 1832

// class Solution {
// public:
//     bool checkIfPangram(string sentence) {
//      map<char,int>freq;
//      int n=sentence.length();
//      for(auto it:sentence){
//         freq[it]++;
//      }   

//     for (char c = 'a'; c <= 'z'; c++) {
//             if (freq[c] == 0) { 
//                 return false;
//             }
//         }
// return true;
//     }
// };



AND

// class Solution {
// public:
//     bool checkIfPangram(string sentence) {
//         vector<int> arr(26, 0);

        // for(char &ch : sentence) {
        //     int index = ch - 'a';
        //     arr[index]++;
        // }

//         for(int &count : arr) {
//             if(count == 0)
//                 return false;
//         }

//         return true;
//     }
// };

// ==============================================================================================
// count and say
// LEETCODE 38



// ==========================================================================================================
// integer to roman  LEETCODE 12

// int number[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
//         string roman[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
        
//         string result = "";
        
//         for (int i = 0; i < 13; i++) {
//             while (num >= number[i]) {
//                 result += roman[i];
//                 num -= number[i];
//             }
//         }
        
//         return result;

// ==========================================================================================================
// CHECK IF TWO STRING ARE EQUAILENT LEETCODE 

//  bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
//         int n=word1.size();
//         int m=word2.size();
//         string wrd1="";
//         string wrd2="";

//         for(int i=0;i<n;i++){

//             wrd1+=word1[i]; 
//         }

        
//         for(int i=0;i<m;i++){

//             wrd2+=word2[i];
//         }

//    if (wrd1.size() != wrd2.size()) return false;

//         for (int i = 0; i < wrd1.size(); i++) {
//             if (wrd1[i] != wrd2[i]) {
//                 return false;
//             }
//         }
// return true;
//     }


// DO SEE CODE WITH MIK APPROACH

// ===========================================================================================================
// LEETCODE 1544


class Solution {
public:
bool isvowel(char &ch){
    return(ch=='a'||ch=='i'||ch=='e'||ch=='o'||ch=='u'||ch=='A'||ch=='I'||ch=='E'||ch=='O'||ch=='U');
}


    bool halvesAreAlike(string s) {
        int n=s.length();
        int i=0;
        int j=n-1;
int count_s=0;
int count_l=0;
        while(i<j){
            if(isvowel(s[i]))count_s++;
            if(isvowel(s[j]))count_l++;
            
        i++;
        j--;


        }
    return count_s==count_l;
    }

};

// =============================================================================================================
// LEETCODE1704
class Solution {
public:
bool isvowel(char &ch){
    return(ch=='a'||ch=='i'||ch=='e'||ch=='o'||ch=='u'||ch=='A'||ch=='I'||ch=='E'||ch=='O'||ch=='U');
}


    bool halvesAreAlike(string s) {
        int n=s.length();
        int i=0;
        int j=n-1;
int count_s=0;
int count_l=0;
        while(i<j){
            if(isvowel(s[i]))count_s++;
            if(isvowel(s[j]))count_l++;
            
        i++;
        j--;


        }
    return count_s==count_l;
    }

};

// ============================================================================================================================4
// If we can choose any 2 character and swap them ,we can easily sort any string

// leetcode 899

class Solution {
public:
    string orderlyQueue(string s, int k) {
        if(k>1){
        sort(s.begin(),s.end());
        }

        string result=s;
        int n=s.length();
        for(int i=0;i<n;i++){
            string temp=s.substr(i+1)+s.substr(0,i+1);
            result=min(result,temp);
        }
return result;

    }
};

// -=-=====================================================================================================================================
// LEETCODE1657
class Solution {
public:
    bool closeStrings(string word1, string word2) {
        int n= word1.length();
        int m=word2.length();
        if(m!=n)return false;


        vector<int> freq1(26);
        vector<int> freq2(26);

        for(int i=0;i<m;i++){
            char ch1=word1[i];
            char ch2=word2[i];

            int idx1=ch1-'a';
            int idx2=ch2-'a';

                freq1[idx1]++;
                freq2[idx2]++;


        }

for(int i=0;i<26;i++){

if(freq1[i]!=0 && freq2[i]!=0)continue;
if(freq1[i]==0 && freq2[i]==0)continue;
return false;
}


        sort(freq1.begin(),freq1.end());
        sort(freq2.begin(),freq2.end());

        return freq1==freq2;
    }
};

// =========================================================================================
// LEETCODE 944
// ===================================================================================================
// LEETCODE 28

class Solution {
public:
    int strStr(string haystack, string needle) {
        int i=0;
        int j=0;
        
        int m=needle.length();
        int n=haystack.length();
        
        int index=-1;
      
        for(int i=0;i<n;i++){
            if(haystack[i]==needle[j]){
                if(j==0) index=i;   
                j++;
                if(j==m) return index;   
                continue;
            }
            else{
                 if(j>0){
                      i = index;   
                }
                j=0;
            }
        }
        return -1;   
    }
};
