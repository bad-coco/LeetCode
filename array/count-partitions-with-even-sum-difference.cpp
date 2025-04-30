class Solution {
public:
    int countPartitions(vector<int>& nums) {
        int n = nums.size();
        int sum = 0;
        int count = 0;
        for (int i = 0; i < n; i++) {
            sum += nums[i];
        }
        if (sum % 2 != 0) {
            return 0;
        }
        int left = 0;
        for (int i = 0; i < n - 1; i++) {
            left += nums[i];
            int diff = 2 * left - sum;

            if (diff % 2 == 0) {
                ++count;
            }
        }
        return count;
    }
};