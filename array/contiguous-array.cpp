class Solution {

    int compare(int a, int b) { return a > b ? a : b; }

public:
    int findMaxLength(vector<int>& nums) {

        int n = nums.size();
        unordered_map<int, int> umap;
        int sum = 0;
        int maxLength = 0;
        int flagForZeroIndex = 0;
        for (int i = 0; i < n; i++) {
            int add = nums[i] == 0 ? -1 : 1;
            sum += add;

            if (sum == 0) {
                maxLength = compare(maxLength, i + 1);
            } else {
                if (umap[sum] == 0 && flagForZeroIndex != sum) {
                    if (i == 0) {
                        flagForZeroIndex = sum;
                    }
                    umap[sum] = i;
                } else {
                    int diff = i - umap[sum];
                    maxLength = compare(maxLength, diff);
                }
            }
        }
        return maxLength;
    }
};
// [0,.1,0,0,1,0,1.] - 6 ??

// SumMap
//  0

// [0,1,1].  -2

// [1,1,0,1,0,1].  - 4
// 0 0 0 1 1 1.  - 6
// [0,1,1,0,1,1,1,0] - ans 4