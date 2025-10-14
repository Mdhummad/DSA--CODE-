
/*QUES==>
wWRITE A PROGRAM TO PRINT THE TRANSPOSE OF THE MATRIX ENTERED BY THE USER
AND STORE IT IN A NEW MATRIX


*/
// #include <iostream>
// using namespace std;

// int main() {
// int m, n;
// cout << "Enter the number of rows for the first matrix: ";
// cin >> m;
// cout << "Enter the number of columns for the first matrix: ";
// cin >> n;

// int arr[m][n];
// cout << "Enter the elements of the first matrix:\n";
//     for (int i = 0; i < m; i++) {
//         for (int j = 0; j < n; j++) {
//             cin >> arr[i][j];
//         }
//     }
// cout<<endl;
// //print 
// for(int i = 0; i < m; i++) {
//         for (int j = 0; j < n; j++) {
//             cout<< arr[i][j]<<" ";
//         }
//         cout<<endl;
//     }
   
// //  after transpose
// cout<<endl;
// cout<<endl;

//     for (int j = 0; j < n; j++) {
//         for (int i = 0; i<m; i++) {
//             cout<<arr[i][j]<<" ";
//         }
//         cout<<endl;
//     }

// //store the transpose
// int t[n][m];
// for(int i=0;i<n;i++){
//     for(int j=0;j<n;j++){
//         t[i][j]=arr[j][i];
//     }
// }



// int t[n][m];
// for(int i=0;i<n;i++){
//     for(int j=0;j<n;j++){
//         cout<<t[i][j]<<" ";
//     }
// }
 
//     return 0;
// }



// ================================================================================================

// leetcode ques 867


//BASIC VECTOR OF 2-D


// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
// vector<vector<int>> v;

// return 0;
// }



// ================================================================================================
// ================================================================================================


/* 
QUES:==>
YOU ARE GIVEN A MATRIX/2D-ARRAY OF SIZE(N*N).CHANGE THIS MATRIXD  INTO ITS TRANSPOSE*/

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the size of the square matrix (N x N): ";
    cin >> n;

    int arr[n][n];

    cout << "Enter the elements of the matrix:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }

    cout << "\nOriginal matrix:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    // Transpose in-place
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            int temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
        }
    }

    cout << "\nTransposed matrix:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
