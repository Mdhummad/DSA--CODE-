// BINARY SEARCH ON ANSWER
/*
if the question is asking about the min or max integer and  you are sure that ans lies in range on 1 to n then we use binary search on anser
*/


// ================================================================================================

//QUETIONS

// ==================================================================================================
// FINDING SQUARE ROOT OF A NUMBER USING BINARY SEARCH


// easy sol
/*
maths.sqrt on each pos

or
ans=1;
for(int i=1;i<n;i++){
if(i*i<=n){
ans=i;}
else{
break;
}
}
*/


/*
using binary search

 int find_sqrt(vector<int>& arr){
 int low=1;
 int high=n-1;
 int ans=1;
 while(low<=high){
 mid=low+high/2;


 if((mid*mid)<=n){
 ans=mid;
 low=mid+1;
 }
 else{
 high=mid-1;
 }
 }

 return ans;
 }

*/

// ========================================================================================
// FIND THE NTH ROOT OF AN INTEGER


/*
int helper(int base, int exp) {
    long long ans = 1;
    for (int i = 0; i < exp; i++) {
        ans *= base;
    }
    return ans;
}

int find_nTH_sqrt(int n, int target) {
    int low = 1;
    int high = target; // possible root can't be more than target
    int ans = -1;

    while (low <= high) {
        int mid = low + (high - low) / 2;
        int power = helper(mid, n);

        if (power == target) {
            return mid;
        } 
        else if (power < target) {
            low = mid + 1;
        } 
        else {
            high = mid - 1;
        }
    }

    return -1; // if no exact integer root found
}
 */

//  =======================================================================================================
// KOKO EATING BANANA

// minimum integer k such that kooko can  eat all banana within h hours


/*
int findMax(vector<int> &v) {
    int maxi = INT_MIN;
    int n = v.size();
    for(int i = 0; i<n; i++) {
        maxi = max(maxi, v[i]);
    }
    return maxi;
}

int calculateTotalHours(vector<int> &v, int hourly) {
    int totalH = 0;
    int n = v.size();
    for(int i = 0; i<n; i++) {
        totalH += ceil((double)v[i] / (double)hourly);
    }
    return totalH;
}

int minimumRateToEatBananas(vector<int> &v, int h) {
    int low = 1, high = findMax(v);
    while(low <= high) {
        int mid = (low + high) / 2;
        int totalH = calculateTotalHours(v, mid);
        if(totalH <= h) {
            high = mid - 1;
        }
        else {
            low = mid + 1;
        }
    }
    return low;
}
*/

// ============================================================================================================

// FIND MINIMUM NNUBER OF DAYS TO MAKE M BOUQUETS

/*



class Solution {
public:
    bool possible(vector<int> &arr, int day, int m, int k) {
        int cnt = 0;      // count consecutive flowers
        int bouquets = 0; // number of bouquets we can make
        
        for(int i = 0; i < arr.size(); i++) {
            if(arr[i] <= day) {
                cnt++;
                if(cnt == k) { 
                    bouquets++;
                    cnt = 0;
                }
            }
            else {
                cnt = 0; // reset if flower not bloomed
            }
        }
        return bouquets >= m;
    }
    
    int minDays(vector<int>& bloomDay, int m, int k) {
        long long total = 1LL * m * k;
        if(total > bloomDay.size()) return -1; // impossible
        
        int low = *min_element(bloomDay.begin(), bloomDay.end());
        int high = *max_element(bloomDay.begin(), bloomDay.end());
        int ans = -1;
        
        while(low <= high) {
            int mid = low + (high - low) / 2;
            if(possible(bloomDay, mid, m, k)) {
                ans = mid;
                high = mid - 1;
            }
            else {
                low = mid + 1;
            }
        }
        return ans;
    }
};

*/


//===================================================================================


// FIND A SMALLEST DIVISOR GIVEN A THRESHHOLD

//basically after deviding all the number of the given array the ciel of the number sgould be greater than or equal to threshold



/*
int helper(vector<int>& arr, int div){
int sum=0;
int n=arr.size();
for(int i=0;i<n;i++){
int n= ceil(arr[i]/div);
sum=sum +n;
}
return sum;
}



   int smallestDivisor(vector<int>& nums, int threshold) {
        int low=1;
        int high=*max_element(nums.bigin(),nums.end());
        while(low<=high){
        int mid=(low+high)/2;

        if(helper(arr,mid)<=threshold){
        high=mid-1;
        }
        else{
        low=mid+1;}
        }
        return low;
    }


*/

// ===================================================================================================
// CAPACITY TO SHIP PACKAGES WITHIN D DAYS

/*
capacity ki range will be starting from max weights and end with sum of all weights

*/



/*

class Solution {
public:

    int helper(vector<int>& weights, int capacity) {
    int days = 1;  // need at least 1 day
    int sum = 0;

    for(int i = 0; i < weights.size(); i++) {
        if(sum + weights[i] > capacity) {
            // start a new day
            days++;
            sum = 0;
        }
        sum += weights[i]; // add package to current day
    }

    return days;
}


    
    int shipWithinDays(vector<int>& weights, int days) {
    int n=weights.size();
    int maxi = *max_element(weights.begin(), weights.end());
    int sum = accumulate(weights.begin(), weights.end(), 0);

    int low=maxi;
    int high=sum;

    while(low<=high){
    
    int mid=(low+high)/2;
  int  no_of_days=helper(weights,mid);
    if(no_of_days<=days) {
        high=mid-1;

    } 
else{
    low=mid+1;
}
    }
return low;


    }
};
*/



// ==============================================================================
// FIND K TH MISSING NUMBER
// SEE VIDEO ONCE YOU WILL UNDERSTAND THE QUESTION


// done via brute force using hash map

// ========================================================================================================
// ========================================================================================================
// ========================================================================================================
// ========================================================================================================
// ========================================================================================================
// ========================================================================================================
NEW PATTERN FROM HERE  THAT IS MIN OF MAX    ORRR MAX OF MIN

// AGGRESSIVE COWS

/*

bool is_possible(vector<int>&arr, int mid, int cows){
int count_cow=1;
int last_pos=arr[0];
for(int i=0;i<arr.size();i++){
if(arr[i]-last_pos>=mid){
count cow++;
last_pos=arr[i];
}
if(count_cow==cows)return true;
}
return false;
}


int aggressive_cows(vector<int>& arr, int cows){
int n=arr.size();

sort(arr.begin(),arr.end());


int low=1;
int high=arr[n-1]-arr[0];

while(low<=high){
int mid(low+high)/2;

if(is_possible(arr,mid,cows)==true){

low=mid-1;
}
else{
high=mid+1;
}

return high;


}
// =========================================================================================================


int countStudents(vector<int>& nums, int pages) {
    int students = 1;
    int pages_holding = 0;

    for (int i = 0; i < nums.size(); i++) {
        if (pages_holding + nums[i] <= pages) {
            pages_holding += nums[i];
        } else {
            pages_holding = nums[i];
            students++;
        }
    }
    return students;
}

int findPages(vector<int>& nums, int no_of_students, int no_of_books) {
    if (no_of_students > no_of_books) return -1;

    int low = *max_element(nums.begin(), nums.end());
    int high = accumulate(nums.begin(), nums.end(), 0);

    while (low <= high) {
        int mid = (low + high) / 2;
        int students = countStudents(nums, mid);

        if (students > no_of_students) {
            low = mid + 1;   // too few pages, increase limit
        } else {
            high = mid - 1;  // feasible, try smaller limit
        }
    }

    return low;
}


*/

// ==============================================================================================================


// PAINTERS PARTITION and SPLIT ARRAY LARGEST SUM





// ===================================================================================================================================
// MINIMIZING MAX DISTANCE TO GAS STATION

// BRUTE FORCE

DO IT


// =============================================================================================================================


//MEDIAN OF TWO SORTED ARRAY

/*
class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int i = 0, j = 0;
        vector<int> temp;

        // merge two sorted arrays
        while (i < nums1.size() && j < nums2.size()) {
            if (nums1[i] < nums2[j]) {
                temp.push_back(nums1[i]);
                i++;
            } else {
                temp.push_back(nums2[j]);
                j++;
            }
        }

        // remaining elements of nums1
        while (i < nums1.size()) {
            temp.push_back(nums1[i]);
            i++;
        }

        // remaining elements of nums2
        while (j < nums2.size()) {
            temp.push_back(nums2[j]);
            j++;
        }

        int n = temp.size();

        // check odd/even
        if (n % 2 == 1) {
            return temp[n / 2];   // middle element
        } else {
            return (temp[n / 2 - 1] + temp[n / 2]) / 2.0; // average of two middle elements
        }
    }
};

//=======================================================================================================================
more optimized code
class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int i=0;
        int j=0;
        int n1 = nums1.size();
        int n2 = nums2.size();    
        int total = n1 + n2;   // should be total, not half
        int ind2 = total / 2; 
        int ind1 = ind2 - 1;

        int ind1el = -1;
        int ind2el = -1;

        int cnt = 0;  // you used cnt, not count

        // merge two sorted arrays
        while (i < n1 && j < n2) {
            if (nums1[i] < nums2[j]) {
                if (cnt == ind1) ind1el = nums1[i];
                if (cnt == ind2) ind2el = nums1[i];
                cnt++;
                i++;
            } else {
                if (cnt == ind1) ind1el = nums2[j];
                if (cnt == ind2) ind2el = nums2[j];
                cnt++;
                j++;
            }
        }

        // remaining elements of nums1
        while (i < n1) {
            if (cnt == ind1) ind1el = nums1[i];
            if (cnt == ind2) ind2el = nums1[i];
            cnt++;
            i++;
        }

        // remaining elements of nums2
        while (j < n2) {
            if (cnt == ind1) ind1el = nums2[j];
            if (cnt == ind2) ind2el = nums2[j];
            cnt++;
            j++;
        }

        if (total % 2 == 1) {
            return ind2el;   // middle element
        }

        return (double)(ind1el + ind2el) / 2.0;
    }
};


// ====================
// most optimal solution



there is a particular APPROACH I THAUGHT SO IT IS NOT IMPORTANT IF YOU FELT LIKE IT IS IN FUTURE ,
PLZZ SEE THE VIDEO




*/

// =======================================================================================================================


// Kth ELEMENT OF TWO SORTED ARRAYS

/*
brute sol will be two merge these two arrays and find the kth element ,but it will use ectra space so we use more better solution


*/

// =====================================================================================================================================================
// =====================================================================================================================================================
// =====================================================================================================================================================
// =====================================================================================================================================================
// =====================================================================================================================================================
// =====================================================================================================================================================
// =====================================================================================================================================================
// BINARY SEARCH ON 2 D ARRAYS


/*
int lower bound(vector<int>& arr, int n,int x){
int low=0;
int high=n-1;
int ans=n;
while(low<=high){
int mid=(low+high)/2;
if(arr[mid]>=x){
ans=mid;
high=mid-1l
}
else{
low=mid+1;}


}
return ans;


}

int row_with_max_1(vector<vector<int>>& matrix,int n,int m){
int cnt_max=-0;
int index=-1;
for(int i=0;i<n;i++){
int cnt_ones=m-lowebound(matrix[i],m,1);
if(cnt_ones>cnt_max){
cnt_max=cnt_ones;
index=i;
}
}
return index;
}


*/

// =======================================================================================

// search in a 2-d matrix


// YOU KNOW HOW TO DO IT IN BRUTE FORCE(ITERATING IN EACH ELEMENT AND GIVING ANSWER)

// we will flatten the 2-d array hipotheticalyy in this question 
// if we actually do it will take o(n*m) time


// we know how to change index of 1-d to that of 2-d

// row=index/m;
// column=index%m



/*
bool searchMatrix(vector<vector<int>>& mat, int target) {
    int n = mat.size();
    int m = mat[0].size();

    int low = 0, high = n * m - 1;

    while (low <= high) {
        int mid = (low + high) / 2;
        int row = mid / m;
        int col = mid % m;

        if (mat[row][col] == target) 
            return true;
        else if (mat[row][col] < target) 
            low = mid + 1;
        else 
            high = mid - 1;
    }

    return false;
}




*/


// =======================================================================================
// SEARCH IN A MATRIX 2

 //BRUTE FORCE WILL BE TO GO ON EVERY ELEMENT AND FINDING THE TARGET ,BUT HERE THE TIME COMPLEXITY WILL BE O(n*m)
 //better will be to go in every row and do binary search ,thus time complexity will recuce and will be O(n*logm)

 /*
 
 class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
       int rows= matrix.size();
       int cols=matrix[0].size();
        int i=0;
        int j=cols-1;
        while(i<=rows-1 && j>=0){
            if(matrix[i][j]== target) return true;
            else if(matrix[i][j]>target)j--;
            else i++;

        }
        return false;
    }
};
 */