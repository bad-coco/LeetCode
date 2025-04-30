class Solution {
public:
    int f(vector<int>& nums, int n, int start) {
        int prev = 0;
        int prev2 = 0;
        int curr = 0;
        for (int i = start+1; i <= n; i++) {
            int left = nums[i - 1] + prev2;
            int right = prev;
            curr = max(left, right);
            prev2 = prev;
            prev = curr;
        }
        return curr;
    }

    int rob(vector<int>& nums) {
        int n = nums.size();
        if(n==1) return nums[0];
        int startingIndex = 0;
        int first = f(nums, n - 1, startingIndex);
        startingIndex = 1;
        int second = f(nums, n, startingIndex);

        return max(first, second);
    }
};