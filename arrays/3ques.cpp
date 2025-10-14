/* FIND THE MAXIMUM VALUE OUT OF ALL THE ELEMENTS IN THE ARRAY*/
// #include<iostream>
// using namespace std;
// int main(){
// int n;
// int max;
// cout<<"enter the size of array ";
// cin>>n;
// int arr[n];
// for(int i=0;i<n;i++){
//     cin>>arr[i];
// }
// cout<<"The element of array are ";
// for(int i=0;i<n;i++){
//      cout<<arr[i]<<" "<<endl;}
// max=arr[0];
// for(int i=1;i<=n-1;i++){
//     if(max<arr[i]){
//         max=arr[i];
//     }
// }
// cout<<"The largest elemnet in array is "<<max;

// return 0;
// }

/*USIN INT_MIN*/
/*READ ABOUT INT MIN AND MAX ON GFGS*/

// #include<iostream>
// #include<climits>
// using namespace std;

// int main(){
// int n;
// cout<<"enter the size of array ";
// cin>>n;
// int arr[n];
// for(int i=0;i<n;i++){
//     cin>>arr[i];
// }
// cout<<"The element of array are ";
// for(int i=0;i<n;i++){
//      cout<<arr[i]<<" "<<endl;}
// int max=INT_MIN;
// for(int i=0;i<=n-1;i++){
//     if(max<arr[i]){
//         max=arr[i];
//     }
// }
// cout<<"The largest elemnet in array is "<<max;

// return 0;
// }
// FOR FINDING MINIMUM ELEMENT WE WOULD USE INT_MAX

/*=========================================================================================*/
// FINDING SECOND LARGEST ELEMENT IN AN ARRAY
//  STEP:1==>>FIND LARGEST ELEMENT
//  STEP:2==>>TRAVERSE THROUGH THE ARRAY
//  STEP:3==>>if(secondmax < arr[i] && arr[i] !=max)

// we can also use INT_MIN to find the second largest element in an array

// #include<iostream>
// using namespace std;
// int main(){
// int n;
// int max;
// int secondmax;
// // for size of array
// cout<<"enter the size of array ";
// cin>>n;
// int arr[n];

// // for inputting element of an array
// for(int i=0;i<n;i++){
//     cin>>arr[i];
// }

// // for showing elament of array
// cout<<"The element of array are ";
// for(int i=0;i<n;i++){
//      cout<<arr[i]<<" ";}

// //for maximum elemnt in array
// max=arr[0];
// for(int i=1;i<=n-1;i++){
//     if(max<arr[i]){
//         max=arr[i];
//     }
// }

// // for second max elements in a array
// secondmax=arr[0];
// for(int i=1;i<=n-1;i++){
//     if(secondmax<arr[i] && arr[i]!=max){
//         secondmax=arr[i];
//     }
// }
// cout<<"the second max element is "<<secondmax;
// return 0;
// }

//=========================================================================================
// finding  SECOND maximum element in one pass

/* MOST IMPORTANT CODE*/

// #include <iostream>
// #include <climits>
// using namespace std;

// int main() {
//     int arr[6] = {12, 35, 1, 10, 29, 1};
//     int max1 = INT_MIN;
//     int max2 = INT_MIN;

//     for(int i = 0; i < 6; i++){
//         if(max1 < arr[i]){
//             max2 = max1;  // Promote current largest to second largest
//             max1 = arr[i]; // New largest found
//         }
//         else if(max2 < arr[i] && arr[i] != max1){  //==>This means arr[i] is smaller than max1, but bigger than max2 → update max2.
//             max2 = arr[i]; // Found a new second largest
//         }
//     }

//     if(max2 == INT_MIN){
//         cout << "No second element exists" << endl;
//     }
//     else {
//         cout << max2 << endl;
//     }

//     return 0;
// }

// WE CAN ALSO DO THIS USING INT_MIN FUNCTION BUT REMEBER TO USE <CLIMITS> LIBRAY

// COUNT THE NUMBER OF ELEMENTS IN A GIVEN ARRAY GREATER THEN A NUMBER X

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     int x;
//     cout << "enter the size of array ";
//     cin >> n;
//     int arr[n];
//     cout << "enter elements of array";
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     cout << "The element of array are ";
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " " << endl;
//     }

//     cout << "enter the element that you want count of ";
//     cin >> x;
//     int count = 0;
//     for (int i = 1; i < n; i++)
//     {
//         if (arr[i] > x)
//         {
//             count = count + 1;
//         }
//     }
//     cout << "The number of time we encounter the element is  : " << count;
//     return 0;
// }

// =========================================================================================
// PRACTICE QUESTIONS

// Q1. Calculate the product of all the elements in the given array.
// ANS
// #include <iostream>
// using namespace std;
// int main()
// {

//     int n;
//     int product = 1;
//     cout << "enter the size of array ";
//     cin >> n;
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     cout << "The element of array are ";
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " " << endl;
//     }

//     for (int i = 0; i < n; i++)
//     {
//         product = product * arr[i];
//     }

//     cout << "the product of element in array is " << product << endl;
//     return 0;
// }

// ========================================================================================
// Q2. Find the minimum value out of all elements in the array.
// #include <iostream>
// #include <climits>
// using namespace std;

// int main()
// {
//     int n;
//     cout << "enter the size of array ";
//     cin >> n;
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     cout << "The element of array are ";
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " " << endl;
//     }
//     int min = INT_MAX;
//     for (int i = 0; i <= n - 1; i++)
//     {
//         if (min > arr[i])
//         {
//             min = arr[i];
//         }
//     }
//     cout << "The smallest elemnet in array is " << min;

//     return 0;
// }

// =========================================================================================

// Q4. Given an array, predict if the array contains duplicates or not.

#include <iostream>
#include <unordered_set>
using namespace std;

bool hasDuplicates(int arr[], int n) {
    unordered_set<int> seen;

    for (int i = 0; i < n; i++) {
        if (seen.find(arr[i]) != seen.end()) {
            return true; // duplicate found
        }
        seen.insert(arr[i]);
    }
    return false; // no duplicates
}

int main() {
    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[] = {1, 2, 3, 2, 4};

    cout << (hasDuplicates(arr1, 5) ? "Duplicates Found" : "No Duplicates") << endl;
    cout << (hasDuplicates(arr2, 5) ? "Duplicates Found" : "No Duplicates") << endl;

    return 0;
}



/*

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool containsDuplicate(vector<int>& nums) {
    sort(nums.begin(), nums.end()); // Sort the array

    for (int i = 1; i < nums.size(); ++i) {
        if (nums[i] == nums[i - 1]) {
            return true; // Found duplicate
        }
    }
    return false; // No duplicates found
}

int main() {
    vector<int> arr = {1, 3, 2, 4, 5};

    if (containsDuplicate(arr))
        cout << "Array contains duplicates\n";
    else
        cout << "Array does not contain duplicates\n";

    return 0;
}



*/

// Q5. WAP to find the smallest missing positive element in the sorted Array that contains only
// positive elements.
#include <iostream>
using namespace std;

int findMissing(int arr[], int n) {
    int low = 0, high = n - 1;

    while (low <= high) {
        int mid = (low + high) / 2;

        // If the value is equal to index+1, move right
        if (arr[mid] == mid + 1)
            low = mid + 1;
        else
            high = mid - 1;
    }

    // At the end, 'low' will be the count of correct elements
    return low + 1;
}

int main() {
    int arr[] = {1, 2, 3, 4, 6, 7, 8};
    int n = sizeof(arr) / sizeof(arr[0]);

    int missing = findMissing(arr, n);
    cout << "The smallest missing positive element is: " << missing << endl;

    return 0;
}
