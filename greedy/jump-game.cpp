class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n = nums.size();
        int maxIndex = 0;
        int sum = 0;
        for (int i = 0; i < n; i++) {
            if (maxIndex < i) {
                return false;
            }
            sum = i + nums[i];
            maxIndex = max(maxIndex, sum);
            if (maxIndex >= n - 1) {
                return true;
            }
        }
        return false;
    }
};