/*
if  we are given a  array with different repeated number
and we are asked how many times do a particular number appear
in an array
then usaully in brute force code  we will iterate through the array
so the time complexity will be for finding 1 number is O(n);


so for findiing the optimall solution hashing come into picture
*/

// HASHING
// IT IS BASICALLY PRESTORING AND FETCHING THE DATA
// IT IS  USED TO FIND ONE PARTICULAR DATA IN O(1) TIME COMPLEXITY

// #include<bits/stdc++.h>
// using namespace std;
// int main(){

// cout<<"enter the size of array";
// int n;
// cin>>n;
// int arr[n];
// cout<<"enter the element of array";
// for(int i=0;i<n;i++){
//     cin>>arr[i];
// }

// // now we will map the frequency of each element in  hash array
// int hash[13]={0};
// for(int i=0;i<n;i++){
//     hash[arr[i]]+=1;
// }

// // fetching the data
// int q; //it is number of elements to be fetched
// cout<<"enter the number of elements to be fetched";
// cin>>q;
// while(q--){
//     int number;
//     cin>>number;
//     cout<<hash[number]<<" times "<<number<<" is present in the array"<<endl;
// }
// }

//===============================================================================================
// CHARACTER HASHING

// #include<bits/stdc++.h>
// using namespace std;
// int main(){

// cout<<"enter the string";
// string s;
// cin>>s;

// // now we will map the frequency of each element in  hash array
// int hash[23]={0};
// for(int i=0;i<s.size();i++){
//     hash[s[i]-'a']++;
// }

// // fetching the data
// int q; //it is number of characters to be fetched
// cout<<"enter the number of characters to be fetched";
// cin>>q;
// while(q--){
// char ch;
// cin >>ch;
// cout<<hash[ch-'a']<<" times "<<ch<<" is present in the string"<<endl;
//  }
// }

//====================================================================================================================
// in number hashing when we were trying to hash a array we saw we could only do it till 10^7 so now we will use STL that is map and unordered map for the same

#include <bits/stdc++.h>
using namespace std;
int main()
{

    cout << "enter the size of array";
    int n;
    cin >> n;
    int arr[n];
    cout << "enter the element of array";
    for (auto it : arr)
    {
        cin >> arr[it];
    }

    // using map
    map<int, int> hash;
    for (int i = 0; i < n; i++)
    {
        hash[arr[i]]++;
    }

    for (auto it : hash)
    {
        cout << it.first << " appears " << it.second << " times" << endl;
    }

    // fetching the data
    int q; // it is number of elements to be fetched
    cout << "enter the number of elements to be fetched";
    cin >> q;
    while (q--)
    {
        int number;
        cin >> number;
        cout << hash[number] << " times " << number << " is present in the array" << endl;
    }
}

// time complexity of map is O(logn) and unordered map is O(1) on average case
// of storing and fetching the data

//===============================================================================================
// unordered map
// worst case is O(n) but it rarely happens it happens only in case of internal collisions
// we will first prefer using unordered map but if tc exceedss then we will use orderd map





// ===================================================================================
//QUESTION
/*
Given an array nums of size n which may contain duplicate elements, return a list of pairs where each pair contains a unique element from the array and its frequency in the array.
You may return the result in any order, but each element must appear exactly once in the output.


Examples:
Input: nums = [1, 2, 2, 1, 3]
Output: [[1, 2], [2, 2], [3, 1]]

Explanation:
- 1 appears 2 times
- 2 appears 2 times
- 3 appears 1 time

*/
/*
class Solution {
public:
    vector<vector<int>> countFrequencies(vector<int>& nums) {
        vector<vector<int>> sol;
        map<int, int> freq;  // Ordered map for sorted output

        for (auto it : nums) {
            freq[it]++;
        }

        for (auto it : freq) {
            sol.push_back({it.first, it.second});
        }

        return sol;
    }
};

*/

//================================================================================================


// 1 more question left ,i will  do it later after doing sliding window
//IT IS LEETCODE QUED
