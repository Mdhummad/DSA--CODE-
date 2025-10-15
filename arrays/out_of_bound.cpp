bool isSorted(vector<int>& nums) {
    int n = nums.size();
    for (int i = 0; i < n - 1; ++i) {   // stop at n-2
        if (nums[i] > nums[i + 1]) {    // check if any pair is out of order
            return false;               // not sorted
        }
    }
    return true; // if no pair violated order
}
