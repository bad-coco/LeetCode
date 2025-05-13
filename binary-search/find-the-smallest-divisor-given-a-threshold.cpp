class Solution {
public:
    int maxNumber(vector<int>& nums, int n) {
        int maxElement = INT_MIN;
        for (int i = 0; i < n; i++) {
            maxElement = max(maxElement, nums[i]);
        }
        return maxElement;
    }

    int sumOfDivision(vector<int>& nums, int n, int currentDivisor,
                      int threshold) {
        int sum = 0;
        for (int i = 0; i < n; i++) {
            int result =
                (nums[i] / currentDivisor) + (nums[i] % currentDivisor ? 1 : 0);

            sum += result;
            if (sum > threshold) {
                return sum;
            }
        }

        return sum;
    }

    int smallestDivisor(vector<int>& nums, int threshold) {
        int n = nums.size();
        if (n > threshold) {
            return -1;
        }
        int maxDivisor = maxNumber(nums, n);
        int low = 1, high = maxDivisor;

        while (low <= high) {
            int mid = low + (high - low) / 2;
            int sum = sumOfDivision(nums, n, mid, threshold);

            if (sum <= threshold) {
                high = mid - 1;
               
            } else {
                low = mid + 1;
            }
        }

        return low;
    }
};