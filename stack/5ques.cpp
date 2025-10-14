// BALANCED BARCKET

// #include<iostream>
// #include<stack>
// using namespace std;

// bool isbalanced(string s){
// if(s.length()%2!=0) return false;    
// stack<char> st;
// for(int i=0;i<s.length();i++){
// if(s[i]=='(') st.push(s[i]);
// else{
//     if(st.size()==0)return false;
//     else st.pop();
// }
// }
//     if(st.size()==0)return true;
//     else return false;
// }
// int main(){
// string s="()(())";
// cout<<isbalanced(s);


//     return 0; 
// }


// ===================================================================
// REMOVE CONSECUTIVE DUPLICATE IN A STRING


// #include<iostream>
// #include<stack>
// #include<limits>
// using namespace std;

// string  removveduplicates(string s){
// stack<char> st;
// st.push(s[0]);
// for(int i=1;i<s.length();i++){
// if(s[i]!=st.top()) st.push(s[i]);

// }
// s="";
// while(st.size()>0){
//     s+=st.top();
//     st.pop();
// }
// reverse(s.begin(),s.end());
// return s;
// }
// int main(){
// string s="aaabbcdddaaavfffgg";
// s=removveduplicates(s);
// cout<<s<<endl;

//     return 0; 
// }

// =======================================================
// NEXT GREATER ELEMENT
 
// BRUTE FORCE SOLUTION BELOW
// time complexity is O(n^2) which is very high
// spcae complexity=O(1)


// #include<iostream>
// #include<stack>
// using namespace std;
// int main(){
//  int arr[]={3,1,2,7,4,6,2,3}   ;
//  int n=sizeof(arr)/sizeof(arr[0]);   
//    for(int i=0;i<n;i++){
//     cout<<arr[i];
//    } 
//    cout<<endl;
// //    next greater elemnt array
// int nge[n];
// for(int i=0;i<n;i++){
//     nge[i]=-1;//====>see the importance of this line and error if this is not present
//     for(int j=i+1;j<n;j++){
//         if(arr[j]>arr[i]){
//            nge[i]=arr[j];
//            break; 
//         }
//     }
// }
    
//       for(int i=0;i<n;i++){
//     cout<<nge[i];
//    } 
//    cout<<endl;
    
// return 0;
    
//     }


// <<<<<=======>>>>>


// using stack
// time complexity=O(n)
// spcae complexity=O(n)


// #include<iostream>
// #include<stack>
// using namespace std;
// int main(){
// int arr[]={3,1,2,7,4,6,2,3}   ;
// int n=sizeof(arr)/sizeof(arr[0]);   
// for(int i=0;i<n;i++){
// cout<<arr[i];
// } 
// cout<<endl;
// //    =
// int nge[n];
// stack<int>st;
// nge[n-1]=-1;
// st.push(arr[n-1]);
// for(int i=n-2;i>=0;i--){
// // pop all element smaller than arr[i];
// while(st.size()>0 &&st.top()<=arr[i]){
//     st.pop();
// }
// // mark the ans in nge array
// if(st.size()==0)nge[i]=-1;
// else nge[i]=st.top();
// // push the arr[i]
// st.push(arr[i]);
// } 




// for(int i=0;i<n;i++){
// cout<<nge[i];
// } 
// cout<<endl;
    
// return 0;
    
//     }



// ==================================================================
// PREVIOOS GREATER ELMENT


// using stack
// time complexity=O(n)
// spcae complexity=O(n)


// #include<iostream>
// #include<stack>
// using namespace std;
// int main(){
// int arr[]={3,1,2,7,4,6,2,3}   ;
// int n=sizeof(arr)/sizeof(arr[0]);   
// for(int i=0;i<n;i++){
// cout<<arr[i];
// } 
// cout<<endl;
// //    =
// int pge[n];
// stack<int>st;
// pge[0]=-1;
// st.push(arr[0]);
// for(int i=1;i<n-1;i++){
// // pop all element smaller than arr[i];
// while(st.size()>0 &&st.top()<=arr[i]){
//     st.pop();
// }
// // mark the ans in nge array
// if(st.size()==0)pge[i]=-1;
// else pge[i]=st.top();
// // push the arr[i]
// st.push(arr[i]);
// } 

// for(int i=0;i<n;i++){
// cout<<pge[i]<<" ";
// } 
// cout<<endl;
    
// return 0;
    
//     }

// ======================================================================
// stock span problem


// #include<iostream>
// #include<stack>
// using namespace std;
// int main(){
// int arr[]={100,80,60,81,70,60,75,85}   ;
// int n=sizeof(arr)/sizeof(arr[0]);   
// for(int i=0;i<n;i++){
// cout<<arr[i]<<" ";
// } 
// cout<<endl;
// //  prev greatest elemnet index array
// int pgi[n];
// stack<int>st;
// pgi[0]=-1;
// st.push(0);
// for(int i=1;i<=n-1;i++){
// // pop all element smaller than arr[i];
// while(st.size()>0 && arr[st.top()]<=arr[i]){
//     st.pop();
// }
// // mark the ans in nge array
// if(st.size()==0)pgi[i]=-1;
// else pgi[i]=st.top();
// // push the arr[i]
// st.push(i);
// } 

// for(int i=0;i<n;i++){
// pgi[i]=i-pgi[i];
// } 

// for(int i=0;i<n;i++){
// cout<<pgi[i]<<" ";
// } 
// cout<<endl;
    
// return 0;
    
// }


//===========================================================================
// Largest rectangle in a histogram

// class Solution {
// public:
//     int largestRectangleArea(vector<int>& arr) {
//         int n=arr.size();
//         int nsi[n];
//         stack<int>st;
//         nsi[n-1]=n;
//         st.push(n-1);  
//         for(int i=n-2;i>=0;i--)
        
//           }
// };



























// #include<iostream>
// #include<stack>
// using namespace std;
// int main(){
// int arr[]={100,80,60,81,70,60,75,85}   ;
// int n=sizeof(arr)/sizeof(arr[0]);   
// for(int i=0;i<n;i++){
// cout<<arr[i]<<" ";
// } 
// cout<<endl;
// //  prev greatest elemnet index array
// int pgi[n];
// stack<int>st;
// pgi[0]=-1;
// st.push(0);
// for(int i=1;i<=n-1;i++){
// // pop all element smaller than arr[i];
// while(st.size()>0 && arr[st.top()]<=arr[i]){
//     st.pop();
// }
// // mark the ans in nge array
// if(st.size()==0)pgi[i]=-1;
// else pgi[i]=st.top();
// // push the arr[i]
// st.push(i);
// } 

// for(int i=0;i<n;i++){
// pgi[i]=i-pgi[i];
// } 

// for(int i=0;i<n;i++){
// cout<<pgi[i]<<" ";
// } 
// cout<<endl;
    
// return 0;
    
// }