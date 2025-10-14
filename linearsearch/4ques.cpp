/* GIVEN A SORTED ARRAY OF NON-NEGATIVE DISTINCT
INTEGERS,FIND THE SMALLEST MISSING NON-NEGATIVE
 ELEMENT IN IT. */
//here the complexity is O(N). 
// #include<iostream>
// using namespace std;
// int main(){
// int arr[]={0,1,2,3,4,8,9,12};
// int n=8;
// for(int i=0;i<n;i++){
//     if(i!=arr[i]){
//         cout<<i;
//         break;
          
//     }
// }
// return 0;

// }

//BINARY SEARCH SOLUTION
  
#include<iostream>
using namespace std;
int main(){
int arr[]={0,1,2,3,4,8,9,12};
int n=8;
int lo=0;
int hi=n-1;
int ans=-1;
while(lo<=hi){
int mid=lo+(hi-lo)/2;
if(arr[mid]==mid)lo=mid+1;
else{
    ans=mid;
    hi=mid-1;
}
cout<<ans;

}
return 0;

}
// =================================================================================
/*  sqrt(x) */
// class Solution {
// public:
//     int mySqrt(int x) {
//         int lo=0;
//         int hi=x;
//         while(lo<=hi){
// int mid=lo+(hi-lo)/2;
// long long m=(long long)mid;
// long long y=(long long)x;
// if(m*m==y) return mid;
// else if(m*m>y)hi=mid-1;
// else lo=mid+1;

//         }
// return hi;
//     }
// };




// =====================================================================================
/*       PEAK INDEX IN MOUNTAIN ARRAY      */
//   

// complexity ==>O(n)

// int n=arr.size();
// int idx=-1;
// for(int i=1;i<=n-2;i++){
//     if(arr[i]>arr[i-1] && arr[i]>arr[i+1]){
//         idx=i;
//         break;

//     }
//     return idx;
// }





// using binary search
// class Solution {
// public:
//     int peakIndexInMountainArray(vector<int>& arr) {
// int n= arr.size();
// int lo=1;
// int hi=n-2;
// while(lo<=hi){
//     int mid =lo + (hi-lo)/2;
//     if(arr[mid]>arr[mid+1] && arr[mid]>arr[mid-1])
//     return mid;
//     else if(arr[mid]>arr[mid+1]) hi=mid-1;
//     else lo=mid+1;

// }        

// return 0;


//     }
// };


// ================================================================================
/* SEARCH IN ROTATED SORTED ARRAY */
// class Solution {
// public:
//     int search(vector<int>& nums, int target) {
//      int n=nums.size();
//      if(n==1){
//         if(target==nums[0]) return 0;
//         else return -1;
//      }
//      int lo=0;
//      int hi=n-1;
//      int pivot =-1;
//     //  finding pivot element
//      while(lo<=hi){
//         int mid=lo+(hi-lo)/2;
//         if(mid==0)lo=mid+1;
//         else if(mid==n-1)hi=mid-1;
//         else if(nums[mid]<nums[mid+1] && nums[mid]<nums[mid-1]){
//             pivot= mid;
//             break;
//         }
//         else if(nums[mid]>nums[mid+1] && nums[mid]>nums[mid-1]){
//             pivot= mid+1;
//             break;
//         }
//         else if(nums[mid]>nums[hi])lo=mid+1;
//         else hi=mid-1;
//     }   
//     if(pivot=-1){lo=0;
//     hi=n-1;
//     while(lo<=hi){
//          int mid=lo+(hi-lo)/2;
//          if(nums[mid]==target) return mid;
//          else if(nums[mid]<target)hi=mid-1;
//          else lo=mid+1;
//     }
//     return-1;

//     }
//    if(target>=nums[0] && target<=nums[pivot-1]){
//     lo=0;
//     hi=pivot-1;
//     while(lo<=hi){
//          int mid=lo+(hi-lo)/2;
//          if(nums[mid]==target) return mid;
//          else if(nums[mid]<target)hi=mid-1;
//          else lo=mid+1;
//     }
//     else
//     lo=pivot;
//     hi=n-1;
//     while(lo<=hi){
//          int mid=lo+(hi-lo)/2;
//          if(nums[mid]==target) return mid;
//          else if(nums[mid]<target)hi=mid-1;
//          else lo=mid+1;
//    }
//     }
// };


// do one ques daily
//  =====================================================================================================================================



// LEETCODE 658
//  =====================================================================================================================================
// LEETCODE 633 
//  =====================================================================================================================================