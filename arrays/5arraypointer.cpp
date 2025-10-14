// ways to initialize an arrray
#include<iostream>
using namespace std;
int main(){   
int arr[]={1,2,3,4,5,78};
// two way of initializing pointer
int* ptr=arr;
int* ptr1=&arr[0];
cout<<ptr<<endl;
cout<<ptr1<<endl;
cout<<arr<<endl;
cout<<&arr[0]<<endl;

// (  int* ptr=&arr  ),(   int* ptr=arr[0]   ) ====>  this is wrong way of initializing pointer

// WAYS TO PRINT AN ARRAY
cout<<ptr[0]<<endl;
cout<<ptr[1]<<endl;
cout<<*ptr<<endl;
for(int i=0;i<=5;i++){
    cout<<ptr[i]<<" ";
}
cout<<endl;
// MODIFYING ARRAY USING POINTER ==> 2 ways

/*
//  1
 ptr[0]=98;
// printing pointer
for(int i=0;i<=5;i++){
    cout<<ptr[i]<<" ";
}
*/
cout<<endl;
cout<<endl;
cout<<endl;

// 2.
*ptr=34;
 // printing pointer
for(int i=0;i<=5;i++){
    cout<<ptr[i]<<" ";
}
cout<<endl;
ptr++;
*ptr=9;
ptr--;
// printing pointer
for(int i=0;i<=5;i++){
    cout<<ptr[i]<<" ";
}

/*======================================================================================================*/
cout<<endl;
cout<<endl;
cout<<endl;


for(int i=0;i<=5;i++){
    cout<<*ptr<<" ";
    ptr++;
}
ptr=arr;










return 0;
}