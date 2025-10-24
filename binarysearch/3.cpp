// BINARY SEARCH ON 2 D ARRAYS


/*
int lower_bound_custom(vector<int>& arr, int n, int x) {
    int low = 0;
    int high = n - 1;
    int ans = n;
    while (low <= high) {
        int mid = (low + high) / 2;
        if (arr[mid] >= x) {
            ans = mid;
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }
    return ans;
}

int row_with_max_1(vector<vector<int>>& matrix, int n, int m) {
    int cnt_max = 0;
    int index = -1;

    for (int i = 0; i < n; i++) {
        int first_one_index = lower_bound_custom(matrix[i], m, 1);
        int cnt_ones = m - first_one_index;

        if (cnt_ones > cnt_max) {
            cnt_max = cnt_ones;
            index = i;
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

// =================================================
//  changing index of 1-d to that of 2-d

// row=index/m;
// column=index%m
// where m is column of a 2-d array


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

//  ==================================================================
//FIND PEAK ELE IN A GRID

class Solution {
public:
    int find_max(int col, vector<vector<int>>& mat) {
        int n = mat.size();
        int max_ele = INT_MIN;
        int index = -1;
        for (int i = 0; i < n; i++) {
            if (mat[i][col] > max_ele) {
                max_ele = mat[i][col];
                index = i;
            }
        }
        return index;
    }

    bool peak(vector<vector<int>>& mat, int row, int col) {
        int n = mat.size();
        int m = mat[0].size();
        int val = mat[row][col];

        int dx[] = {-1, 1, 0, 0};
        int dy[] = {0, 0, -1, 1};

        for (int i = 0; i < 4; i++) {
            int newRow = row + dx[i];
            int newCol = col + dy[i];

            if (newRow >= 0 && newRow < n && newCol >= 0 && newCol < m) {
                if (mat[newRow][newCol] >= val) return false;
            }
        }

        return true;
    }

    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        int n = mat.size();
        int m = mat[0].size();
        int low = 0, high = m - 1;

        while (low <= high) {
            int mid = (low + high) / 2;
            int maxi_row = find_max(mid, mat);

            if (peak(mat, maxi_row, mid)) {
                return {maxi_row, mid};
            }

            if (mid + 1 < m && mat[maxi_row][mid + 1] > mat[maxi_row][mid]) {
               low = mid + 1;  
            } else {
                high = mid - 1; 
            }
        }

        return {-1, -1};
    }
};


// ==========================================================================
// MEDIAN IN A ROW WIZE SORTED GRID

// BRUTE 
// /IS TO CONVERT A 2-D MATRIX INTO A 1-D AND THEN FIND THE MEDIAN

   