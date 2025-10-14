/* 
QUES==> WRITE A PROGRAM TO STORE ROLL NUMBER AND MARKS 
OBTAINED BY 4 STUDENTS SIDE BY SIDE IN A MATRIX.
*/

// #include<iostream>
// using namespace std;
// int main(){
//  int arr[2][4];
//  for(int i=0;i<=1;i++){
//     for(int j=0;j<=3;j++){
//         cin>>arr[i][j];
//     }
//  }
//  for(int i=0;i<=1;i++){
//     for(int j=0;j<=3;j++){
//         cout<<arr[i][j];
//     }
//     cout<<endl;
//  }
// return 0;
// }





// ============================================================================
// ===================================================================================



/*QUES==>
WRITE A C++ PROGRAM TO FIND THE LARGEST ELEMENTS OF A GIVEN 2D A
ARRAY OF INTEGERS*/


//  #include<iostream>
//  #include<climits>
//  using namespace std;
// int main(){
// int m;
// cout<<"enter the number of rows : ";
// cin>>m;
// int n;
// cout<<"enter the number of rows : ";
// cin>>n;


//  int arr[m][n];
//  for(int i=0;i<=m-1;i++){
//     for(int j=0;j<=n-1;j++){
//         cin>>arr[i][j];
//     }
// }

// int max= INT_MIN;


//  for(int i=0;i<=m-1;i++){
//     for(int j=0;j<=n-1;j++){
//         if(max<arr[i][j] ){
//             max=arr[i][j];
//         }
//     }
//     cout<<max;
//     cout<<endl;
//  }
// return 0;
// }





// ============================================================================
// ===================================================================================



/*QUES==>
WRITE A C++ PROGRAM TO FIND THE SECOND LARGEST ELEMENTS OF A GIVEN 2D A
ARRAY OF INTEGERS*/


// ============================================================================
// ===================================================================================




/*QUES==>
WRITE A C++ PROGRAM TO PRINT SUM OF ALL THE ELEMENTS OF A 2D MATRIX*/


//  #include<iostream>
//  #include<climits>
//  using namespace std;
// int main(){
// int m;
// cout<<"enter the number of rows : ";
// cin>>m;
// int n;
// cout<<"enter the number of rows : ";
// cin>>n;


//  int arr[m][n];
//  for(int i=0;i<=m-1;i++){
//     for(int j=0;j<=n-1;j++){
//         cin>>arr[i][j];
//     }
// }

// int sum=0;


//  for(int i=0;i<=m-1;i++){
//     for(int j=0;j<=n-1;j++){
//       sum=sum+arr[i][j];
//     }
   
//  }
//   cout<<sum;
//     cout<<endl;
// return 0;
// }





// ============================================================================
// ===================================================================================




/*QUES==>
WRITE A C++ PROGRAM TO ADD 2 MATRICES
IMPORTANT ====> WHILE ADDING 2 MATRICES THERE ORDER SHOULD BE SAME


*/


//  #include <iostream>
// #include <climits>
// using namespace std;

// int main() {
//     int m, n;
//     cout << "Enter the number of rows for the first matrix: ";
//     cin >> m;
//     cout << "Enter the number of columns for the first matrix: ";
//     cin >> n;

//     int arr[m][n];
//     cout << "Enter the elements of the first matrix:\n";
//     for (int i = 0; i < m; i++) {
//         for (int j = 0; j < n; j++) {
//             cin >> arr[i][j];
//         }
//     }

//     int m1, n1;
//     cout << "Enter the number of rows for the second matrix: ";
//     cin >> m1;
//     cout << "Enter the number of columns for the second matrix: ";
//     cin >> n1;

//     if (m != m1 || n != n1) {
//         cout << "Matrices dimensions do not match for addition.\n";
//         return 1;
//     }

//     int arr1[m1][n1];
//     cout << "Enter the elements of the second matrix:\n";
//     for (int i = 0; i < m1; i++) {
//         for (int j = 0; j < n1; j++) {
//             cin >> arr1[i][j];
//         }
//     }

//     int res[m][n];
//     for (int i = 0; i < m; i++) {
//         for (int j = 0; j < n; j++) {
//             res[i][j] = arr[i][j] + arr1[i][j];
//         }
//     }

//     cout << "Resultant matrix after addition:\n";
//     for (int i = 0; i < m; i++) {
//         for (int j = 0; j < n; j++) {
//             cout << res[i][j] << " ";
//         }
//         cout << endl;
//     }

//     return 0;
// }

//   NOT USING SECOND MATRIX TO STORE THE SUM

 #include <iostream>
#include <climits>
using namespace std;

int main() {
    int m, n;
    cout << "Enter the number of rows for the first matrix: ";
    cin >> m;
    cout << "Enter the number of columns for the first matrix: ";
    cin >> n;

    int arr[m][n];
    cout << "Enter the elements of the first matrix:\n";
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }

    int m1, n1;
    cout << "Enter the number of rows for the second matrix: ";
    cin >> m1;
    cout << "Enter the number of columns for the second matrix: ";
    cin >> n1;

    if (m != m1 || n != n1) {
        cout << "Matrices dimensions do not match for addition.\n";
        return 1;
    }

    int arr1[m1][n1];
    cout << "Enter the elements of the second matrix:\n";
    for (int i = 0; i < m1; i++) {
        for (int j = 0; j < n1; j++) {
            cin >> arr1[i][j];
        }
    }

   
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            arr[i][j] = arr[i][j] + arr1[i][j];
        }
    }

    cout << "Resultant matrix after addition:\n";
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
