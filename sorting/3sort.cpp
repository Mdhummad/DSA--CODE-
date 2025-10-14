// #include<iostream>
// #include<climits>
// using namespace std;

// int main(){
//     int arr[6] = {3, 4, 2, 6, 1, 5};
//     int n = 6;

//     // Print the array before sorting
//     for(int i = 0; i < n; i++){
//         cout << arr[i] << " ";
//     }
//     cout << endl;

//     // Selection Sort
//     for(int i = 0; i < n-1; i++){
//         int min = INT_MAX;
//         int mindx = i;

//         // Minimum element calculation in the unsorted part of the array
//         for(int j = i; j < n; j++){
//             if(arr[j] < min){
//                 min = arr[j];
//                 mindx = j;
//             }
//         }
//         // Swap the found minimum element with the first element of the unsorted part
//         swap(arr[i], arr[mindx]);
//     }

//     // Print the array after sorting
//     for(int i = 0; i < n; i++){
//         cout << arr[i] << " ";
//     }

//     return 0;
// }


// ====================================================================
// selection sort is unstable sort
/*  

TIME COMPLEXITY

BEST CASE==O(N^2)
AVG CASE==O(N^2)
WORST CASE==O(N^2)

SPACE COMPLEXITY IS O(1)

WHEN YOU SHOULD USE SELECTION SORT
ANS: WHERE COST OF SWAPPING IS A PROBLEM
STARTING SE 'K' MIN ELEMENT OUT OF N
IFF SIZE OF ARRAY IS SMALL





*/








// =============================================================================