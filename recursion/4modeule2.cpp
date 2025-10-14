// skip a character
/* Remoave allaoccurence of 'a' from string*/

// #include<iostream>
// using namespace std;

// void remove_char(string ans, string orig){
// if(orig.length()==0){
//     cout<<ans;
//     return;
// }
// char ch= orig[0];
// if(ch=='a')remove_char(ans,orig.substr(1));
// else remove_char(ans+ch,orig.substr(1));
// }

// void remove_char(string ans, string orig,int idx){
// if(idx==orig.length()){
//     cout<<ans;
//     return;
// }
// char ch=orig[idx];
// if(ch='a') remove_char(ans,orig,idx+1);
// else remove_char(ans+ch,orig,idx+1);

// }

// int main(){

// string str="moahmmed hummad";
// remove_char("",str,0);
// }

// =========================================================================================================================

// ques 2
// tower of hanoi

// #include <iostream>
// using namespace std;
// void hanoi(int n, char s, char h, char d)
// {
//     if (n == 0)
//         return;
//     hanoi(n - 1, s, d, h);
//     cout << s << " -> " << d << endl;
//     hanoi(n - 1, h, s, d);
// }

// int main()
// {
//     // we will make 3 rod source, helper and destination
//     // source-->destination
//     // first move :(n-1)disk from source to helper
//     // second move :biggest disk form source to destination
//     // third move : n-1 disk from helper to destination

//     int n = 3; // numner of disk
//     hanoi(n, 'A', 'B', 'C');
// }

//=============================================================================================================================

// print array using recursion

// #include<iostream>
// using namespace std;

// void print(int aar[],int size, int idx ){
//     if(idx==size) return;
//     cout<<aar[idx]<<" ";
//     print(aar,size,idx+1);
// }

// int main(){
// int arr[]={2,3,4,5,7,6,98,54};
// int n= sizeof(arr)/sizeof(arr[0]);
// print(arr, n,0);

// }

// ===================================================================================================
// find maximum value of a array using recursion

// #include <iostream>
// #include <climits>  // For INT_MIN
// using namespace std;

// int maxx(int arr[], int size, int idx, int maxVal)
// {
//     if (idx == size)
//         return maxVal;

//     if (arr[idx] > maxVal)
//         maxVal = arr[idx];

//     return maxx(arr, size, idx + 1, maxVal);

//     }

//     // another method
//     // int maxx(int aar[],int n, int idx){

//     // if(idx==n) INT_FAST16_MIN;
//     // return max(aar[idx],maxx(aar,n,idx+1))

//     // }
// int main()
// {
//     int arr[] = {2, 3, 4, 5, 7, 6, 98, 54};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     cout << "Maximum element: " << maxx(arr, n, 0, INT_MIN) << endl;
//     return 0;
// }

// ===================================================================================================
// LEETCODE -78
// PRINT SUBSETS OF STRING WITH UNIQUE CHARACTERS

// #include <iostream>
// #include <vector>
// using namespace std;
// void subset(string ss, string ans)
// {
//     char ch = ss[0];
//     if (ss.length() == 0)
//     {
//         // v.push_back(ans);
//         cout << ans << endl;
//         return;
//     }

//     subset(ss.substr(1), ans + ch);
//     subset(ss.substr(1), ans);
// }

// int main()
// {
//     string s = "abc";
//     // vector<string> v;
//     subset(s, "");
// }

// 


// IMPRTANT
// DO ABOVE QUES USING IDX



// for arrays

// #include <iostream>
// #include <vector>
// using namespace std;
// void subset(int arr[],vector<int> sol,int n,int idx)
// {
//     if(idx==n){
//         for(int i=0;i<sol.size();i++){
//             cout<<sol[i]<<" ";

//         }
//         cout<<endl;
//         return;
//     }
//     subset(arr,sol,n,idx+1);
//     sol.push_back(arr[idx]);
//     subset(arr,sol,n,idx+1);

// }

// int main()
// {
//     int arr[]={1,2,3,};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     vector<int> v;
//     subset(arr,v,n,0);

// }

// ================================================================================================================
// subset with duplicate
// print subsets of a string containing duplicate characters

// #include <iostream>
// #include <vector>
// using namespace std;
// void subset(string ss, string ans, vector<string> &v  ,bool flag)
// {
//     char ch = ss[0];
//     if (ss.length() == 0)
//     {
//         v.push_back(ans);

//         return;
//     }
// if(ss.length()==1){
//    if(flag==true) subset(ss.substr(1), ans + ch, v,true);
//     subset(ss.substr(1), ans, v,true);
//     return;
// }
// char dh = ss[1];
// if(ch==dh){
// if(flag==true)
//     subset(ss.substr(1), ans + ch, v,true);
//     subset(ss.substr(1), ans, v,false);
// }
// else{
//     subset(ss.substr(1), ans + ch, v,true);
//     subset(ss.substr(1), ans, v,true);  

// }
// }
// int main()
// {
//     string s = "aab";
//     vector<string> v;
//     subset(s, "", v,true);
//     for (int i = 0; i < v.size(); i++)
//     {
//         cout << v[i] << endl;
//     }
// return 0;
// }



// ================================================================================================
// print all increasing sub sequences of length k from first n natural numbers.
// subset vs subsequence(element in order) vs subarray(continous part of array)

// #include <iostream>
// #include <vector>
// using namespace std;
// void subset(int arr[],vector<int> sol,int n,int idx)
// {
//     if(idx==n){
//         if(sol.size()==k)
//         for(int i=0;i<sol.size();i++){
//             cout<<sol[i]<<" ";

//         }
//         cout<<endl;
//         return;
//     }
//     subset(arr,sol,n,idx+1,k);
//     sol.push_back(arr[idx]);
//     subset(arr,sol,n,idx+1,k);

// }

// int main()
// {
//     int arr[]={1,2,3,4,5};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     vector<int> v;
//     int k=3
//     subset(arr,v,n,0,k);

// }


//==================================================================================================
//  permutation of string

// #include<iostream>
// #include<string>
// using namespace std;
// void permutation(string ans,string orig){
//     if(orig.length()==0){
//     cout<<ans<<endl;
//     return;
//     }
// for(i=0;i<orig.length();i++){
//     char ch=orig[i];
//     string left=orig.substr(0,i);
//     string right=orig.substr(i+1);
//     permutation(ans+ch,left+right);
// }
// }
// int main(){
// string str="abc";
// permutation("",str);
// return 0;
// }

// ==================================================================================================
// permutation of array

// ======================================================================================================

// find ou all subarrays of an array

/*
see this lecture to know the difference between subset,subsequence and subarray
*/


// ITERATIVE SOLUTION
// #include<iostream>
// #include<vector>
// using namespace std;

// int main(){
//     int arr[]={1,2,3,4};
//     vector<int> v;
//     int n=sizeof(arr)/sizeof(arr[0]);
//     for(int i=0;i<n;i++){
//         for(int j=i;j<n;j++){
//             for(int k=i;k<=j;k++){
//                 cout<<arr[k]<<" ";
//             }
//             cout<<endl;
//         }
//     }
// }

// RECURSIVE SOLUTION
// =======================================================================================

// find out wheateher given string is pallindrome or not

// #include<iostream>
// #include<string>
// using namespace std;
// void find_palindrome(string s,int i,int j){
// if(i>j)return true;
// if(s[i]!=s[j]) return false;
// else return find_palindrome(s,i+1,j-1);
// 
// 
// }
// int main(){
// string str=mom;
// find_palidrome(std,0,str.size()-1);
// }


// ===================================================================================================
// gcd
/*

// ITERATIVE
#include<iostream>
using namespace std
int hcf(int a, int b ){
for(int i=min(a,b);i>=2;i++){
if(a%i==0 && b%i==0)return i;
}
return 1;
}


int main(){
int a=27;
int b=48;
cout<<hcf(a,b)
}

/RECURSIVE SOLUTION

void gcd(int a,int b){
if(a==0)
return b;
else
{
gcd(b%a,a)}

}



*/




