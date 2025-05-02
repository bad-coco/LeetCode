class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n = nums.size();
        int low = 0, high = n - 1;

        while (low <= high) {
            int mid = low + (high - low) / 2;
            int left = (mid > 0) ? nums[mid - 1] : INT_MIN;
            int right = (mid < n - 1) ? nums[mid + 1] : INT_MIN;

            if (nums[mid] > left and nums[mid] > right) {
                return mid;
            }
            if (nums[mid] < right) {
                low = mid + 1;

            } else {
                high = mid - 1;
            }
        }
        return -1;
    }
};