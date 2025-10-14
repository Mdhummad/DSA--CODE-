// binary search is applicable on sorted 


int search(vector<int>& nums, int target) {
    int n = nums.size();
    int low = 0, high = n - 1;
    while(low <= high) {
        int mid = (low + high) / 2;
        if(nums[mid] == target) return mid;
        else if(target > nums[mid]) low = mid + 1;
        else high = mid - 1;
    }
    return -1;
}

 
// recursion
int bs(vector<int>& nums, int low, int high, int target) {
    if (low > high) return -1;
    int mid = (low + high) / 2;
    if(nums[mid] == target) return mid;
    else if(target > nums[mid]) return bs(nums, mid + 1, high, target);
    return bs(nums, low, high - 1, target);
}

int search(vector<int>& nums, int target) {
    return bs(nums, 0, nums.size() - 1, target);
}



// TIME COMPLEXITY
// ITERATIVE====LOG@2(n)



// overflow case

/*
int mid=low+(high-low)/2;
see very important

*/

// ==========================================================================================================
// LOWER BOUND
// it is the smallest index such that arr[ind]>=x;
//even there is no ans possible we will return last index of arr


int lower_bound(vector<int>& arr,int x){
sort(arr.begin(),arr.end());
int n=arr.size();
int low=0;
int  high=n-1;
int ans=n;
while(low<=high){
int mid =(low+high)/2;


if(arr[mid]>=x){
    high=mid-1;
    ans=mid;//maybe a answer
}
else{
low=mid+1;
}
}


// lb=lower_bound(arr.begin(),arr.end(),n)-arr.begin();
}


// upper bound
// smallest insex such that arr[ind]>x;

int lower_bound(vector<int>& arr,int x){
sort(arr.begin(),arr.end());
int n=arr.size();
int low=0;
int  high=n-1;
int ans=n;
while(low<=high){
int mid =(low+high)/2;


if(arr[mid]> x){
    high=mid-1;
    ans=mid;//maybe a answer
}
else{
low=mid+1;
}
}
}
// =============================================================================================================================
// search insert position
// is it not equal to saying we have to insert only at lower bound

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n = nums.size();
        int low = 0, high = n - 1;
        int ans = n; // default: insert at end

        while (low <= high) {
            int mid = (low + high) / 2;
            if (nums[mid] >= target) {
                ans = mid; // possible answer
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        return ans;
    }
};
// =========================================================================================

// FLOOR AND CIEL IN A SORTED ARRAY

// FLOOR=LARGEST NUMBER IN THE ARRAY WHICH IS <=TARGET
// CIEL=SMALLEST NUMBER IN THE ARRAY WHICH IS >=TARGET

// CIEL IS EQUAL TO LOWER BOUND
// ARR=[10,20,30,40,50],,TARGET=25
// FLOOR=20
// CIEL=30

int floor(vector<int>& nums,int x){
int n=nums.size();
int ans=-1;
int low=0;
int high=n-1;
while(low<=high){
int mid=(high+low)/2;
    if(arr[mid]<=x){
    low= mid+1;
    ans=nums[mid];
}
else
high=mid-1;


}


}


// =====================================================================================
// find the first and last occurence of x


// BRUTE 

/*
// BRUTE FORCE
vector<int> first_last_occurrence(vector<int>& nums, int x) {
    int first = -1;
    int last = -1;
    int n = nums.size();

    for (int i = 0; i < n; i++) {
        if (nums[i] == x) {
            if (first == -1) { 
                first = i; // first time we see x
            }
            last = i; // keep updating last
        }
    }
    return {first, last};
}



// OPTIMAL SOLUTION

FIRST OCCURENCE WILL BE (LOWER BOUND) AND LAST OCCURENCE WILL BE (UPPERBOUND -1)

int lowerBound(vector<int>& arr, int n, int x) {
    int low = 0, high = n - 1;
    int ans = n;
    while (low <= high) {
        int mid = (low + high) / 2;
        if (arr[mid] >= x) {
            ans = mid;     // possible answer
            high = mid - 1; // move left
        } else {
            low = mid + 1; // move right
        }
    }
    return ans;
}

int upperBound(vector<int>& arr, int n, int x) {
    int low = 0, high = n - 1;
    int ans = n;
    while (low <= high) {
        int mid = (low + high) / 2;
        if (arr[mid] > x) {
            ans = mid;     // possible answer
            high = mid - 1; // move left
        } else {
            low = mid + 1; // move right
        }
    }
    return ans;
}

pair<int, int> firstAndLastPosition(vector<int>& arr, int n, int x) {
    int first = lowerBound(arr, n, x);
    if (first == n || arr[first] != x) {
        return {-1, -1}; // x not found
    }
    int last = upperBound(arr, n, x) - 1;
    return {first, last};
} 

*/


//===================================================================================================================================

// search in a rotated sorted aray
/*
1)identify the sorted half (maybe left or right)
*/

//     int find_ele(int n,int arr,int target){
//         int low=0;
//         int high=n-1;
//         while(low<=high){
//         int mid=(low+high)/2;
//         if(arr[mid]==target)return mid; 

//         if(arr[low]<=arr[mid]){ 
//         if(arr[low]<=target && target<=arr[mid]){
//             high=mid-1;
//         }
//         else{
//         low=mid+1;
//     }
//     }
//         else{
//             if(arr[mid]<=target && target<=arr[high])
//             low=mid+1;
//             else{
//             high=mid-1;
//         }
// }

// }
// return -1;


// }


// ======================================================================================================
// SEARCH IN A SORTED ROTATED ARRAY (PART 2  )

// WE HAVE DUPICATES IN THIS
/*
PROBLEM THAT WE ENCOUNTERD

arr[mid]=arr[low]=arr[high]
*/


//     int find_ele(int n,int arr,int target){
//         int low=0;
//         int high=n-1;
//         while(low<=high){
//         int mid=(low+high)/2;
//         if(arr[mid]==target)return mid; 
//         if(arr[low]==arr[mid] && arr[mid]==arr[high]){
//             low=low+1;
//             high=high-1;
//             continue;
//         }

//         if(arr[low]<=arr[mid]){ 
//         if(arr[low]<=target && target<=arr[mid]){
//             high=mid-1;
//         }
//         else{
//         low=mid+1;
//     }
//     }
//         else{
//             if(arr[mid]<=target && target<=arr[high])
//             low=mid+1;
//             else{
//             high=mid-1;
//         }
// }

// }
// return -1;


// }

// ===================================================================================================================
// MINIMUM IN A SORTED ROTATED ARRAY
class Solution {
public:
    int findMin(vector<int>& nums) {
        int n=nums.size();

        int high=n-1;
        int low=0;
        int ans=INT_MAX;
        while(low<=high){
            int mid=(low+high)/2;
        if(nums[low]<=nums[high]){
            ans=min(ans,nums[low]);
            break;

        }

         if(nums[low]<=nums[mid]){
                ans=min(ans,nums[low]);
                low=mid+1;
            }
            else{
                high=mid-1;
                ans=min(ans,nums[mid]);
            }


        }

        return ans;
    }
};
 
// =================================================================================================

// FIND OUT HOW  MANY TIMES AN ARRAY HASS BEEN ROTATED

int find_min_ele(int n, int arr[], int target) {
    int low = 0;
    int high = n - 1;
    int ans = INT_MAX;
    int index = -1;  // track index of min element
    
    while (low <= high) {
        int mid = (low + high) / 2;
        
        if (arr[low] <= arr[high]) {
            if (arr[low] < ans) {
                ans = arr[low];
                index = low;
            }
            break;
        }

        if (arr[low] <= arr[mid]) {
            if (arr[low] < ans) {
                ans = arr[low];
                index = low;
            }
            low = mid + 1;
        } 
        else {   
            if (arr[mid] < ans) {
                ans = arr[mid];
                index = mid;
            }
            high = mid - 1;
        }
    }
    
    return index; // return the index instead of value
}
// =============================================================================================
// FIND PEAK ELEMENT
// arr[i-1]<arr[i]>arr[i+1] 


class Solution {
public:
   int findPeakElement(vector<int> &arr) {
    int n = arr.size();
    if (n == 1) return 0;
    if (arr[0] > arr[1]) return 0;
    if (arr[n-1] > arr[n-2]) return n-1;

    int low = 1, high = n-2;
    while (low <= high) {
        int mid = (low + high) / 2;
        if (arr[mid] > arr[mid-1] && arr[mid] > arr[mid+1]) {
            return mid;
        }
        else if (arr[mid] > arr[mid-1]) 
            low = mid + 1;
        else 
            high = mid - 1;
    }
    return -1;
}

};


// ==================================================================================