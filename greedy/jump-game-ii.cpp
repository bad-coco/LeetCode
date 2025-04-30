class Solution {
public:
    int jump(vector<int>& nums) {
        int jumps = 0, n = nums.size();
        int l = 0;
        int r = 0;
        while (r < n - 1) {
            int maxIndex = 0;
            for (int i = l; i <= r; i++) {
                maxIndex = max(maxIndex, i + nums[i]);
            }
            l = r + 1;
            r = maxIndex;
            jumps++;
        }
        return jumps;
    }
};