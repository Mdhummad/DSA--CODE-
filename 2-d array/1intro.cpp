#include<iostream>
using namespace std;


int main(){

// int arr0[5][5];
// // rows==>0-4
// // columns==>0-4


// // INITIALIZING 2-D ARRAYS
// cout<<arr0[0][0]<<endl; // THIS WILL GIVE GARBAGE VALUE
// arr0[0][0]=4;
// cout<<arr0[0][0]<<endl;

// int arr[3][3]={{1,2,5,},{4,5,8},{9,2}};
// cout<<arr[1][1]<<endl;
// cout<<arr[1][2]<<endl;
// cout<<arr[1][0]<<endl;

// int arr1[3][3]={1,2,3,4,5,7,4,3,2};




// /*

//  IMPORTANT===>FIRST COLUMN IN ARRAY DECLARATION REPRESENT ROWS SECOND REPRESET
// COLYUMN .
// 1) IT IS NOT NECESSARY TO GIVE ROWS A NUMBER
//   EXAMPLE==INT ARR[2][3]    INT ARR[][3]===>BOTH OF  THESE ARE CORRECT

// 2) IT IS NECESSARY TO GIVE COLUMNS A NUMBER
//   EXAMPLE==INT ARR[2][]    INT ARR[][]===>BOTH OF  THESE ARE NOT CORRECT
  
//   */


// int arr[4][2]={{1,2},{33,44},{333,444},{11,22}};
// int arr[4][2]={1,2,33,44,333,444,11,22};
// int arr[2][3]={12,33,44,78,98,22};
// int arr[][3]={12,33,44,78,98,22};


/* TRANSVERSE THROUGH A ARRAY*/
// int arr[3][3]={1,2,3,4,5,6,7,8,9};
// for(int i=0;i<=2;i++){  // i is for rows
// for(int j=0;j<=2;j++){
//     cout<<arr[i][j]<<" ";
//     }
// cout<<endl;

// }

/* TAKING INPUT FROM USER */
int m;
cout<<"Enter the number of rows : ";
cin>>m;
int n;
cout<<"Enter the number of columns : ";
cin>>n;
int arr[m][n];
for(int i=0;i<=m-1;i++){  // i is for rows
for(int j=0;j<=n-1;j++){
    cin>>arr[i][j];
    }
cout<<endl;
}


for(int i=0;i<=2;i++){  // i is for rows
for(int j=0;j<=2;j++){
    cout<<arr[i][j]<<" ";
    }
cout<<endl;

}


 return 0;
}