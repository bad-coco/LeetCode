class Solution {
public:
    int findLargestDigit(int n) {
        int maxD = INT_MIN;
        int rem;
        while (n > 0) {
            rem = n % 10;
            maxD = max(maxD, rem);
            n = n / 10;
        }
        return maxD;
    }
    int maxSum(vector<int>& nums) {
        int n = nums.size();
        int result = -1;
        unordered_map<int, int> mp;
        for (int i = 0; i < n; i++) {
            int num = nums[i];

            int maxDigit = findLargestDigit(num);
            if (mp.find(maxDigit) != mp.end()) {
                result = max(result, mp[maxDigit] + num);
            }
            mp[maxDigit] = max(mp[maxDigit], num);
        }
        return result;
    }
};