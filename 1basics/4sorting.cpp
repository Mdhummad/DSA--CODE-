// selection sort
// 1) select minimum and swap it with first element.
// 2) selct second minimum and swap it with second elemeent of the index

#include <bits/stdc++.h>
using namespace std;

void selection_sort(int arr[], int n)
{
    for (int i = 0; i <= n - 2; i++)
    {
        int min = i;
        for (int j = i; j < n - 1; j++)
        {
            if (arr[j] < arr[min])
            {
                min = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
    }
    /*
    TIME COMPLEXITY:
    BEST:O(n^2)
    AVG:O(n^2)
    WORST:O(n^2)
    */
}

void bubble_sort(int arr[], int n)
{
    for (int i = n - 1; i >= 1; i--)
    {   int didswap = 0;
        for (int j = 0; i < i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                didswap=1;
            }
        }
        if(didswap==0)break;
    }
/*
TIME COMPLEXTIY
WORST:O(n^2)
BEST:O(n) //IF I DO NOT DO ANY SWAP IN THE INNER LOOP
AVG:O(n^2)
*/
}

void isertion_sort(int arr[],int n){
for(int i=0;i<=n-1;i++){
    int j=i;
    while(j>0 && arr[j-1]>arr[j]){
        swap(arr[j], arr[j - 1]);
        j--;
    }
}
/*
TIME COMPLEXITY
BEST:O(n) //IF THE ARRAY IS ALREADY SORTED
WORST:O(n^2) //IF THE ARRAY IS REVERSE SORTED
AVG:O(n^2)
*/


}

void merge_sort(int arr[],int n){
   ms(arr, 0, n - 1);  
}
void ms(int arr[], int l, int r)
{
    if (l < r)
    {
        int mid = (l + r) / 2;
        ms(arr, l, mid);
        ms(arr, mid + 1, r);
        merge(arr, l, mid, r);
    }
}

void merge(int arr[], int low, int mid, int high){
    vector<int> temp;
    int left=low;
    int right=mid+1;
    while (left <= mid && right <= high)
    {
        if (arr[left] < arr[right])
        {
            temp.push_back(arr[left]);
            left++;
        }
        else
        {
            temp.push_back(arr[right]);
            right++;
        }
    }
    while (left <= mid)
    {
        temp.push_back(arr[left]);
        left++;
    }
    while (right <= high)
    {
        temp.push_back(arr[right]);
        right++;
    }
    for (int i = low; i <= high; i++)
    {
        arr[i] = temp[i - low];
    }
    
}
   

















int main()
{
    int arr[7] = {5, 2, 9, 1, 5, 6, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    selection_sort(arr, n);
    bubble_sort(arr, n);
}
