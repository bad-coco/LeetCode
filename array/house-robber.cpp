class Solution {
public:
    int rob(vector<int>& nums) {
        int n = nums.size();
        int prev = 0;
        int prev2 = 0;
        int curr = 0;

        for (int index = 1; index <= n; index++) {
            int moneyPick = nums[index - 1] +  prev2;
            int moneyNotPick = prev;
            curr = max(moneyPick, moneyNotPick);
            prev2 = prev;
            prev = curr;
        }
        return curr;
    }
};
