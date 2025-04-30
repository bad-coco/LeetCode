class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int, int> hashMap;
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            int newCount = hashMap[nums[i]] + 1;
            hashMap[nums[i]] = newCount;
            if (newCount >= ceil((double)n / 2))
                return nums[i];
        }
        return -1;
    }
};