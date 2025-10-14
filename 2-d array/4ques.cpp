/*
QUES:==>
WRITE A PROGRAM TO ROTATE THE MATRIX BY 90 DEGREE CLOCKWISE*/
/*
step==1) FIRST TAKE TRANSPOSE
step==2) REVERSE THE ROW
*/

// #include<iostream>
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
// // transpose in the same satrix
// for(int i = 0; i < m; i++) {
//         for (int j = i+1; j < m; j++) {
//      //swapping of  i,j and j,i
//        int temp=arr[i][j];
//        arr[i][j]=arr[j][i];
//        arr[j][i]=temp;
//         }

//     }

// // REVERSE EACH ROW

// for(int k = 0; k<n;k++) {
//    int i=0;
//    int j=n-1;
//    while(i<=j){
//     int temp=arr[k][i];
//        arr[k][i]=arr[k][j];
//        arr[k][j]=temp;
//        i++;
//        j--;
//    }
//         }

//     cout<<endl;

// //print
// for(int i = 0; i < m; i++) {
//         for (int j = 0; j < n; j++) {
//             cout<< arr[i][j]<<" ";
//         }
//         cout<<endl;
//     }

// return 0;
// }

// ====================================================================================
//==============================================================================================

/* QUES====>
WRITE A PROGRAM TO PRINT THE MULTIPLICATION OF TWO MATRICES GIVEN BY THE USER*/

// #include<iostream>
// using namespace std;

// int main() {
// int m, n;
// cout << "Enter the number of rows for the first matrix: ";
// cin >> m;
// cout << "Enter the number of columns for the first matrix: ";
// cin >> n;

// cout<<endl;

// int p,q ;
// cout << "Enter the number of rows for the second matrix: ";
// cin >> p;
// cout << "Enter the number of columns for the second matrix: ";
// cin >> q;

// if(n==p){
//     // matrix 1
// int a[m][n];
// cout << "Enter the elements of the first matrix:\n";
//     for (int i = 0; i < m; i++) {
//         for (int j = 0; j < n; j++) {
//             cin >> a[i][j];
//         }
//     }
// // matrix 2
// int b[p][q];
// cout << "Enter the elements of the second matrix:\n";
//     for (int i = 0; i < p; i++) {
//         for (int j = 0; j < q; j++) {
//             cin >> b[i][j];
//         }
//     }
// // resultant matrix
// int res[m][q];
//     for (int i = 0; i < m; i++) {
//         for (int j = 0; j < q; j++) {
//         //    res[i][j]= a[i][0]*b[0][j] + a[i][1]*b[1][j] + a[i][2]*b[2][j]...........
//          res[i][j]=0;
//          for(int k=0;k<p;k++){
//             res[i][j]+= a[i][k] *b[k][j];
//          }
//           }
//     }
// // print
// for (int i = 0; i < m; i++) {
//         for (int j = 0; j < q; j++) {
//            cout<<res[i][j]<<" ";
//         }
//         cout<<endl;
//     }

// }
// else{

//     cout<<"matrix cannot exist";
// }
// return 0;
// }

// ====================================================================================
//==============================================================================================

/* QUES====>
WRITE A PROGRAM  TO PRINT MATRIX IN WAVE FORM*/

// #include<iostream>
// using namespace std;

// int main() {
// int m, n;
// cout << "Enter the number of rows for the first matrix: ";
// cin >> m;
// cout << "Enter the number of columns for the first matrix: ";
// cin >> n;

// cout<<endl;

// int a[m][n];
// cout << "Enter the elements of the first matrix:\n";
//     for (int i = 0; i < m; i++) {
//         for (int j = 0; j < n; j++) {
//             cin >> a[i][j];
//         }
//     }

// // print
// for (int i = 0; i < m; i++) {
//         for (int j = 0; j < n; j++) {
//            cout<<a[i][j]<<" ";
//         }
//         cout<<endl;
//     }
// cout<<endl;
// // wave  print
// for (int i = 0; i < m; i++) {
//     if(i%2==0){
//         for (int j = 0; j < n; j++) {
//            cout<<a[i][j]<<" ";
//         }
//           }
//           else{
//             for(int j=n-1;j>=0;j--){
//                 cout<<a[i][j]<<" ";
//             }

//           }
//         cout<<endl;
//     }

// return 0;
// }

// ====================================================================================
//==============================================================================================

/* QUES====>
WRITE A PROGRAM  TO PRINT MATRIX IN SPIRAL  FORM*/
// leetcode 54

/* HINTS
1) WE WILL GO (RIGHT,DOWN,LEFT,UP)
2) USE 4 LOOPS
3)USE MINROW,MAXROW, MINCOL,MAXCOL*/

#include <iostream>
using namespace std;

int main()
{
    int m;
    cout << "ENTER THE NUMBER OF ROWS: ";
    cin >> m;
    int n;
    cout << "ENTER THE NUMBER OF COLUMNS: ";
    cin >> n;

    int arr[m][n];
    cout << "ENTER THE ELEMENTS OF THE MATRIX:\n";
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }

    cout << "\nTHE MATRIX IS:\n";
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    cout << "\nTHE SPIRAL MATRIX IS:\n";

    int minrow = 0, maxrow = m - 1;
    int mincol = 0, maxcol = n - 1;
    int tne = n * m;
    int count = 0;

    while (minrow <= maxrow && mincol <= maxcol)
    {
        // right
        for (int j = mincol; j <= maxcol && count < tne; j++)
        {
            cout << arr[minrow][j] << " ";
            count++;
        }
        minrow++;

        // down
        for (int i = minrow; i <= maxrow && count < tne; i++)
        {
            cout << arr[i][maxcol] << " ";
            count++;
        }
        maxcol--;

        // left
        for (int j = maxcol; j >= mincol && count < tne; j--)
        {
            cout << arr[maxrow][j] << " ";
            count++;
        }
        maxrow--;

        // up
        for (int i = maxrow; i >= minrow && count < tne; i--)
        {
            cout << arr[i][mincol] << " ";
            count++;
        }
        mincol++;
    }

    cout << endl;
    return 0;
}
