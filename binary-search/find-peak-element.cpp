class Solution {
public:
    int findPeakElement(vector<int>& arr) {
        int n = arr.size();
        int low = 0, high = n - 1;

        while (low <= high) {
            int mid = (low + high) / 2;
            int left = mid > 0 ? arr[mid - 1] : INT_MIN;
            int right = mid < n - 1 ? arr[mid + 1] : INT_MIN;

            if (arr[mid] >= left and arr[mid] >= right) {
                return mid;
            }

            if (arr[mid] < right) {
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }
        return -1;
    }
};