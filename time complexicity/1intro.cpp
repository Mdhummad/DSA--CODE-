/*QUES:
GIVEN AN ARRAY OF SIZE N+1 CONSITING OF INTEGERS FROM 1 TO N ONE OF THE ELEMNTS IS DUPLICATE IN ARRAY FIND THE DUPLICAT*/

// BRUTE FORCE

//NOT TIME EFFICIENT AND ALSO SPACE CONSUMING

// #include<iostream>
// using namespace std;
// int main(){
// int arr[]={2,3,4,5,3,1,8,7,6,9};
// bool flag=false;
// for(int i=0;i<8;i++ ){
//     for(int j=i+1;j<9;j++){
//         if(arr[i]==arr[j]){
//             cout<<arr[i];
//             flag=true;
//             break;
//         }
//     }
//     if(flag==true)break;
// }
//  return 0;
// }

// ==============================================================================
// ULTIMATE METHOD

#include<iostream>
#include<algorithm>
using namespace std;
int main(){
int arr[]={6,3,2,4,1,7,1,5};
int sum=0;
int n=7;
for(int i=0;i<8;i++){
    sum +=arr[i];
}
int s=(n*(n+1))/2;
cout<<" the missing element is "<<sum-s;

 return 0;
}
// =========================================================================================
//NOTE:==>TIME COMPLEXITY CAN ONLY BE CALCULATED ON SAME PROGRAMMING DEVICE
