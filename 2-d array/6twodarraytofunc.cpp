/* PROBLEM WITH 2-D ARRAY*/
//BINA SIZE KE 2D ARRAY CANNOT BE PASSED
#include<iostream>
#include<vector>
using namespace std;

void change(int a[]){ //===>HERE IT IS NOT NECESSARY TO DEFINE SIZE OF THE ARRAY
    a[0]=9;
}


void change2D(int arr[3][3]){ //===>HERE IT IS NECESSARY TO DEFINE SIZE OF THE ARRAY
    arr[0][0]=9;              //===>IF WE DO NOT DEFINE THE SIZE COMPILER WILL GIVE SYNTAX ERROR   
}




int main(){
int a[3]={1,2,3};

cout<<a[0]<<endl;
change(a);
cout<<a[0]<<endl;

int arr[][3]={{1,2,3},{4,5},{6,7,8}};

cout<<arr[0][0]<<endl;
change2D(arr);
cout<<arr[0][0]<<endl;
    return 0;
} 