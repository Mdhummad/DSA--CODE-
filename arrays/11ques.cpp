/*
LEETCODE(TWO SUM)
QUES: FIND DOUBLET IN THE ARRAY WHOSE SUM IS EQUAL 
     TO THE GIVEN VALUE X ALSO TELL THE INDEX

*/
// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
// int x;
// cout<<"Enter Target ";
// cin>>x;

// vector<int>v;
// int y;
// cout<<"Enter the size of array ";
// cin>>y;
// for(int i=0;i<y;i++){
//    int q;
//   cin>>q;
//     v.push_back(q);
// }
// for(int i=0;i<=v.size()-2;i++){
//     for(int j=i+1;j<=v.size()-1;j++){
//         if(v[i]+v[j]==x){
//             cout<<"("<<i<<","<<j<<")  "<<" The number are : "<<v[i]<<" and "<<v[j];
//         cout<<endl;
//         }
//     }
// }
// return 0;
//    }









// ==============================================================================================================
// ==============================================================================================================







/*
QUES: WRITE A PROGRAM TO COPY THE CONTENTS  OF
      ONE ARRAY INTO ANOTHER IN THE REVERSE ORDER.    

*/
// #include<iostream>
// #include<vector>
// using namespace std;

// void display(vector<int>& v){
// for(int i=0;i<v.size();i++){
//     cout<<v[i]<<" ";
// }    
// }


// int main(){
// vector<int>v1;
// v1.push_back(2);
// v1.push_back(8);
// v1.push_back(9);
// v1.push_back(3);
// v1.push_back(4);
// v1.push_back(1);

// display(v1);

//     cout<<endl;
//  int n=v1.size();   
// vector<int>v2(n);

// for (int i = 0; i < v2.size(); i++)
// {
// WE KNOW THAT i+j=size-1 for two array ------>>>were i and j complementry index of opposite arrays 
// // it is a relation
// int j=v1.size()-1-i;
// v2[i]=v1[j];
// }

// display(v2);
// return 0;
//    }







// ==============================================================================================================   
// ==============================================================================================================










/*
// TWO POINTERS
QUES: WRITE A PROGRAM TO REVERSE THE ARRAY
       WITHOUT USING ANY EXTRA ARRAY

*/
// #include<iostream>
// #include<vector>
// using namespace std;


// void display(vector<int>& v){
// for(int i=0;i<v.size();i++){
//     cout<<v[i]<<" ";
// }    
// }

// void reversepart(int i,int j,vector<int>&v){
//      while(i<=j){
//         int temp=v[i];
//         v[i]=v[j];
//         v[j]=temp; 
//          i++;
//          j--;  
//      }
// }



// int main(){
// vector<int>v1;
// v1.push_back(2);
// v1.push_back(8);
// v1.push_back(9);
// v1.push_back(3);
// v1.push_back(4);
// v1.push_back(1);
// display(v1);
//     cout<<endl;

// -------->>
// BELOW GIVEN TWO METHOD ARE ONLY RESPONSIBLE FOR REVERSING IN AN ARRAY FOR VECTOR WE DO HAVE REVERSE FUNCTION


// int i=0;
// int j=v1.size()-1;

/* using while loop */
// while(i<=j){
//     int temp=v1[i];
//     v1[i]=v1[j];
//     v1[j]=temp;
//     i++;
//     j--;    
// }

/*USING FOR LOOP*/

// for(int i=0,j=v1.size()-1;i<=j;i++,j--){
//     int temp=v1[i];
//     v1[i]=v1[j];
//     v1[j]=temp;
// }



// ======================================================================

// reverse(v1.begin(),v1.end());  //------->>>"THIS IS NOT WORKING CURRENTLY, BUT IT IS ONLY USABLE IN VECTOR"


// ==============================================================================================================   
/*REVERSE PART OF A ARRAY*/
 
// reversepart(0,2,v1);

//===>>function for reversing a part is given above  

// display(v1);
// return 0;
//    }

// ==============================================================================================================
// ==============================================================================================================







/*

QUES: ROTATE THE GIVEN ARRAY 'a' BY K STEPS, WHERE K IS NON-NEGATIVE .
NOTE:K CAN BE GREATER THAN N AS WELL WHERE N IS THE SIZE OF ARRA 'a'.
HINT:==>>>>
 let say K is equal to 2 ,so we devide array in 2 parts ,let say number of element
 in array are 6 so the  array is devided into 2 array 1 array having 4 element
 and other having 2 and thus these 2 array are reversed and then they are added after 
 which the whole arraay is reversed  
 
 */

// #include<iostream>
// #include<vector>
// using namespace std;


// void display(vector<int>& v){
// for(int i=0;i<v.size();i++){
//     cout<<v[i]<<" ";
// }    
// }

// void reversepart(int i,int j,vector<int>&v){
//      while(i<=j){
//         int temp=v[i];
//         v[i]=v[j];
//         v[j]=temp; 
//          i++;
//          j--;  
//      }
// }



// int main(){
// vector<int>v1;

// int k;
// cout<<"enter K ";
// cin>>k;
// v1.push_back(2);
// v1.push_back(8);
// v1.push_back(9);
// v1.push_back(3);
// v1.push_back(4);
// v1.push_back(1);
// display(v1);
//     cout<<endl;

// int n=v1.size();
// if (k>n){k=k % n;}//===>>>>>>VERY IMPORTANT
// reversepart(0,n-k-1,v1);
// reversepart(n-k,n-1,v1);
// reversepart(0,n-1,v1);
// //===>>function for reversing a part is given above  

// display(v1);
// return 0;
//    }







// ==============================================================================================================
// ==============================================================================================================









/*
QUES== sort the array of  0's and 1's
*/
// #include<iostream>
// #include<vector>
// using namespace std;

// void display(vector<int>&a){
// for(int i=0;i<a.size();i++){
// cout<<a[i]<<" ";    

// }
// } 


// void sort01(vector<int>&v){
//     int n =v.size();
//     int no0=0;
//     int no1=0;
//     for (int i=0;i<v.size();i++){
//         if(v[i]==0){no0++;}
//         else {no1++;}
//     }

//     // filling elements
//     for(int i=0;i<v.size();i++){
// if(i<no0){v[i]=0;}
//         else{v[i]=1;}
//     }
// }
// int main(){

// vector<int>v;
// v.push_back(1);
// v.push_back(0);
// v.push_back(1);
// v.push_back(0);
// v.push_back(0);
// v.push_back(1);
// v.push_back(0);
// v.push_back(1);

// display(v);
// cout<<endl;
// cout<<endl;
// cout<<endl;
// sort01(v);
// display(v);
// }




/*ABOVE QUESTION USING TWO POINTERS 
HINT==>>>> 0's are to the front 
           1's are to the back
           swapping



*/


// #include<iostream>
// #include<vector>
// using namespace std;

// void display(vector<int>&a){
// for(int i=0;i<a.size();i++){
// cout<<a[i]<<" ";    

// }
// } 


// void sort01(vector<int>&v){
//     int n=v.size();
//     int i=0;
//     int j=n-1;
//     while (i<j){
//         if(v[i]==0){i++;}
//         if(v[j]==1){j--;}
//         if(i>j){break;}
//         if(v[i]==1 && v[j]==0){
//             int temp=v[i];
//             v[i]=v[j];
//             v[j]=temp;
//             i++;
//             j--;
//         }
//     }
    
//     }

// int main(){

// vector<int>v;
// v.push_back(1);
// v.push_back(0);
// v.push_back(1);
// v.push_back(0);
// v.push_back(0);
// v.push_back(1);
// v.push_back(0);
// v.push_back(1);

// display(v);
// cout<<endl;
// cout<<endl;
// cout<<endl;
// sort01(v);
// display(v);
// }












// ==============================================================================================================
// ==============================================================================================================






/*
QUES===>MOVE ALL NEGATIVE NUMBER TO BEGINNING AND POSITIVE TO THE END WITH CONSTANT EXTRA SPACE

*/



// #include<iostream>
// #include<vector>
// using namespace std;

// void display(vector<int>&a){
// for(int i=0;i<a.size();i++){
// cout<<a[i]<<" ";    

// }
// } 


// void sort01(vector<int>&v){
//     int n=v.size();
//     int i=0;
//     int j=n-1;
//     while (i<j){
//         if(v[i]<=0){i++;}
//         if(v[j]>=1){j--;}
//         if(i>j){break;}
//         if(v[i]>0 && v[j]<0){
//             int temp=v[i];
//             v[i]=v[j];
//             v[j]=temp;
//             i++;
//             j--;
//         }
//     }
    
//     }

// int main(){

// vector<int>v;
// v.push_back(-1);
// v.push_back(0);
// v.push_back(5);
// v.push_back(-8);
// v.push_back(9);
// v.push_back(11);
// v.push_back(-2);
// v.push_back(-981);





// display(v);
//         cout<<endl;
// cout<<endl;
// cout<<endl;
// sort01(v);
// display(v);

// }








// ==============================================================================================================
// ==============================================================================================================






/*
LEETCODDE QUES 75
SORT COLOURS
QUES===>>  SORT THE ARRAY OF 0'S,1'S AND 2'S */


// #include<iostream>
// #include<vector>
// using namespace std;

// void display(vector<int>&a){
// for(int i=0;i<a.size();i++){
// cout<<a[i]<<" ";    

// }
// } 
// void sortcolors(vector<int>&nums){
//     int n = nums.size();
//     int noz=0;
//     int no1=0;
//     int notw=0;

// for(int i=0;i<nums.size();i++){
//     if(nums[i]==0)noz++;
//     if(nums[i]==1)no1++;
//     if(nums[i]==2)notw++;
// }

// for(int i=0;i<nums.size();i++){
//     if(i<noz)nums[i]=0;
//     else if(i<noz+no1)nums[i]=1;
//     else nums[i]=2;
// }
// return;


//     }

// int main(){

// vector<int>v;
// v.push_back(0);
// v.push_back(0);
// v.push_back(2);
// v.push_back(1);
// v.push_back(2);
// v.push_back(1);
// v.push_back(0);
// v.push_back(1);


// display(v);
//         cout<<endl;
// cout<<endl;
// cout<<endl;
// sort01(v);
// display(v);

// }



// ==============================================================================================================
// THREE POINTERS
// DUTCH FLAG ALGORITHM
// #include<iostream>
// #include<vector>
// using namespace std;

// void display(vector<int>&a){
// for(int i=0;i<a.size();i++){
// cout<<a[i]<<" ";    

// }
// } 
// void sort01(vector<int>&nums){
  

// for(int i=0;i<nums.size();i++){
// int low=0;
// int mid=0;
// int high=nums.size()-1;
// // 1) mid  ke baare me socho 

// // 2)0 to low-1==>0,
// //   high+1 to end==>2
// //   low to mid-1==> 1;

// for(mid<=high;;){
//     if(nums[mid]==2){
//         int temp=nums[mid];
//         nums[mid]=nums[high];
//         nums[high]=temp;
//         high--;
//     }
// else if(nums[mid==0]){
// int temp=nums[mid];
//    nums[mid]=nums[low];
//   nums[low]=temp;
//   low++;
//   mid++;      

// }

// else mid++; //nums[mid]==1

// }
// return;
//  } }

// int main(){

// vector<int>v;
// v.push_back(0);
// v.push_back(0);
// v.push_back(2);
// v.push_back(1);
// v.push_back(2);
// v.push_back(1);
// v.push_back(0);
// v.push_back(1);

// display(v); 
// cout<<endl;
// cout<<endl;
// cout<<endl;
// sort01(v);
// display(v);

// }







// ==============================================================================================================
// ==============================================================================================================


// leetcode===>85 ya 88;

/*
QUES ==>MERGE TWO SORTED ARRAY
HINT==> 3 POINTERS
*/


// this particular lecture is very important it teach us about the return type of a function

// #include<iostream>
// #include<vector>
// using namespace std;

// void display(vector<int>&a){
// for(int i=0;i<a.size();i++){
// cout<<a[i]<<" ";    

// }
// /*
// IN FUNCTIOIN 
// ==> when return type is void we  can call it in main function without assining it to any variable
// ==> when return type is INT we can call it in main function assigning it to INT variable
// ==> when return type is VECTOR we can call it in main function assigning it to VECTOR variable


// */




// } 
// vector<int> merge(vector<int>&nums,vector<int>&nums1){
// int n=nums.size();
// int m=nums1.size();

// vector<int> res(m+n); 
//  int i=0;
//  int j=0;
//  int k=0;

// while(i<=n-1 && j<=m-1){
//       if(nums[i]<nums1[j]){
//             res[k]=nums[i];
//             i++;
//       }
// else{
//       res[k]=nums1[j];
//       j++;
// }
// k++;
// }

// if(i==n){
//       while(j<=m-1){
//             res[k]=nums1[j];
//             k++;
//             j++;
//       }
// }

// if(j==m){
//       while(i<=n-1){
//             res[k]=nums[i];
//             k++;
//             i++;
//       }
// }
// return res;

// }

// int main(){

// vector<int>v;
// v.push_back(1);
// v.push_back(4);
// v.push_back(6);
// v.push_back(0);
// v.push_back(2);


// vector<int>v1;
// v.push_back(2);
// v.push_back(9);
// v.push_back(4);
// v.push_back(8);
// v.push_back(1);
// v.push_back(81);
// v.push_back(3);

// vector<int>v3=merge(v,v1);


// display(v); 
// cout<<endl;
// cout<<endl;
// display(v1);
// cout<<endl;

// display(v3);

// }





// ==============================================================================================================
// ==============================================================================================================





/*
leetcode==31


//no of permutation when there are n elements is n! (factorial of n)

ques==>find the next permutation of an arraym, if not possible then print the sorted order in ascending order.

// REVERSE NOT WORKING ===>DO IT AGAIN
*/

// #include<iostream>
// #include<vector>
// using namespace std;

// void display(vector<int>&a){
// for(int i=0;i<a.size();i++){
// cout<<a[i]<<" ";    

// }
// } 
// void reversepart(int i,int j,vector<int>&v){
//      while(i<=j){
//         int temp=v[i];
//         v[i]=v[j];
//         v[j]=temp; 
//          i++;
//          j--;  
//      }
// }

// void nextpermutation(vector<int>&nums){

//  int n=nums.size();

// // 1) finding pivot index

// int idx=-1;
//  for(int i=n-2;i>=0;i--){
// if(nums[i]<nums[i+1]){
//       idx=i;
//       break;
// }
//  }     
// 
// if(idx==-1){
//       reverse(nums.begin(),nums.end());
// return;
// }

// // 2)  sorting after pivot
// 
// reversepart(idx+1,n-1,nums);
// 
//    or
// reverse(nums.begin()+idx+1,nums.end());
// 
// 3)swapping idx and index that is just greater than idx
/*
      int j=-1;
      for(int i=idx;i<n;i++){
      if(nums[i]>nums[idx]){
            j=i;
            break;
      }
      }
      
// 4) swapping idx and j
      int temp=nums[idx];
      nums[idx]=nums[j];
      nums[j]=temp;

*/
// }

// int main(){

// vector<int>v;
// v.push_back(1);
// v.push_back(4);
// v.push_back(6);
// v.push_back(2);

// display(v); 
// cout<<endl;
// cout<<endl;
// cout<<endl;

// }








// ==============================================================================================================
// ==============================================================================================================
/*
LEETCODE-42
QUES:TRPPING RAIN WATER
this type of question is very importabnt and is asked frequently 

*/






#include<iostream>
#include<vector>
using namespace std;

void display(vector<int>&a){
for(int i=0;i<a.size();i++){
cout<<a[i]<<" ";    

}
} 
int trap(vector<int>& height){
      int n = height.size();

// previous greatest element array
int prev[n];
prev[0]=-1;
int max =height[0];
for(int i=1;i<n;i++){
      prev[i]=max;
      if(max<height[i]) max=height[i];
}      


// next greatest element array
int next[n];
next[n-1]=-1;
 max =next[n-1];
for(int i=n-2;i>=0;i--){
      next[i]=max;
      if(max<height[i]) max=height[i];
}      
 

// minimum array
int mini[n];
for(int i=0;i<n;i++){
      mini[i]=min(prev[i],next[i]);
}

// calculating water
int water;
for(int i=1;i<n-1;i++){
    if(height[i]<mini[i]){
      water +=(mini[i]-height[i]);
    }   
}




return water;
}

int main(){

vector<int>v;
v.push_back(0);
v.push_back(1);
v.push_back(0);
v.push_back(2);
v.push_back(1);
v.push_back(0);
v.push_back(1);
v.push_back(3);
v.push_back(2);
v.push_back(1);
v.push_back(2);
v.push_back(1);
display(v); 
cout<<endl;
cout<<endl;
cout<<endl;
int x=trap(v);
cout<<x;

}