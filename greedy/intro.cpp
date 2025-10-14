// LEETCODE==1005
//  class Solution {
//      public:
//          int largestSumAfterKNegations(vector<int>& nums, int k) {
//           priority_queue<int,vector<int>,greater<int> > pq(nums.begin(),nums.end());//making of PQ->O(n)
//           int sum=0;
//           for(int i=0;i<nums.size();i++) sum +=nums[i];
//            while(k--){
//              int el=pq.top();
//              if(el==0){
//                  //break
//                  break;
//              }
//              pq.pop();//remove the smallest
//              sum-=el;
//              pq.push(-1*el);//add the repeated number
//              sum+=(-el);
//            }
//            return sum;
//          }
//      };

//===================================================================================================

// fractional Knapsack
// #include<iostream>
// #include<vector>
// using namespace std;

// // making a comparator
// bool cmp(pair<int,int>&p1,pair<int,int>&p2){
//     double r1=(p1.first*1.0)/(p1.second*1.0);
//     double r2=(p2.first*1.0)/(p2.second*1.0);
//     return r1>r2;
// }

// double fractionalKnapsack(vector<int> &profit,vector<int> &weights,int n,int W){
//    vector<pair<int,int>> arr;
//    for(int i=0;i<n;i++){
//        arr.push_back({profit[i],weights[i]});
// }
// sort(arr.begin(),arr.end(),cmp);
// double result=0;
// for(int i=0;i<n;i++){
//     if(arr[i].second<=W){
//         result+=arr[i].first;
//         W-=arr[i].second;
//     }else{
//         result+=((arr[i].first*1.0)/(arr[i].second*1.0))*W;
//         W=0;
//         break;
//     }
// }
//

//===================================================================================================
// LEETCODE 1710
// MAXIMUM UNITS IN A TRUCK
// MAKE SURE TO REVISE

// bool cmp(vector<int>&a,vector<int>&b){
//     return a[1]>b[1] ;             //MAKING a comprator
// }
// class Solution {
// public:
//     int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
//       sort(boxTypes.begin(),boxTypes.end(),cmp);//sorting given boxTypes based on quantity
//       int profit=0;  //making pt=rofit variable
//       for(int i=0;i<boxTypes.size();i++){  //main function for finding profit
//         if(boxTypes[i][0]<=truckSize){
//             profit+=boxTypes[i][0]*boxTypes[i][1];
//             truckSize-=boxTypes[i][0];
//         }
//         else{
//             profit+=truckSize*boxTypes[i][1];
//             truckSize=0;
//         }
//         if(truckSize==0)break;
//       }
// return profit;
//     }
// };

//===============================================================================================================
// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;
// int minproduct(vector<int> &arr)
// {
//     int cn = 0; // count of negative numbers
//     int cz = 0; // count of zeros
//     int cp = 0; // count of positive numbers

//     int prod_neg = 1;
//     int prod_pos = 1;
//     int largestnegative = INT8_MIN;

//     // thr below function will find the count of negative ,positive and zeros in the given array
//     for (int i = 0; i < arr.size(); i++)
//     {
//         if (arr[i] < 0)
//         {
//             cn++;
//             prod_neg *= arr[i];
//             largestnegative = max(largestnegative, arr[i]);
//         }
//         if (arr[i] == 0)
//             cz++;
//         if (arr[i] > 0)
//         {
//             cp++;
//             prod_pos *= arr[i];
//         }
//     }

//     if (cn == 0)
//     {
//         if (cz > 0)
//             return 0;
//         else
//         {
//             auto it = min_element(arr.begin(), arr.end());
//             return *it;
//         }
//     }
//     else
//     {
//         if (cn % 2 == 0)
//         {
//             // even
//             return (prod_neg / largestnegative) * prod_pos;
//         }
//         else
//         {
//             // odd
//             return prod_neg * prod_pos;
//         }
//     }
// }

// int main()
// {
//     vector<int> ar({-1, -1, -2, 4, 3});
//     cout << minproduct(ar);
//     return 0;
// }


//==============================================================================

//LEET CODE 881
// BOATS TO SAVE PEOPLE 

// class Solution {
//     public:
//         int numRescueBoats(vector<int>& people, int limit) {
//             sort(people.begin(),people.end());
//             int i=0;int j=people.size()-1;
//             int bt=0; // boat count 
//           while(i<=j){
//             if(people[i]+people[j]<=limit){
//                 bt++;//allocate a boat to the pair
//                 i++;
//                 j--;
//             }
//             else{
//                 bt++;//allocate a boat to the heaviest 
//                 j--;
//             }
//           }
//           return bt;
//         }
//     };