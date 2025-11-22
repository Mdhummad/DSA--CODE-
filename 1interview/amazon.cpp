// Given an array containing numbers from 0 to n−1, and the array can be unsorted and contain duplicates, find the frequency of all numbers in O(1) space complexity.

// #include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[] = {2, 3, 3, 2, 1};
    int n = sizeof(arr)/sizeof(arr[0]);

    // Step 1: Increase value at arr[i] % n by n
    for (int i = 0; i < n; i++)
        arr[arr[i] % n] += n;

    // Step 2: Frequency = arr[i] / n
    cout << "Number : Frequency\n";
    for (int i = 0; i < n; i++)
        cout << i << " : " << arr[i] / n << endl;

    return 0;
}
