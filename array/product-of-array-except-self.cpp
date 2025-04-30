class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int zeroCount = 0;
        int product = 1;
         int n = nums.size();
        vector<int> res(n, 0);

       
        for (int i = 0; i < n; i++) {
            if (nums[i] == 0) {
                zeroCount++;
                if (zeroCount > 1) {
                   return res;
                }
            } else {
                product *= nums[i];
            }
        }

        
        
        for (int i = 0; i < n; i++) {
            if (nums[i] != 0) {
                if (zeroCount < 1) {
                    res[i] = product / nums[i];
                } else {
                    res[i] = 0;
                }
            } else {
                res[i] = product;
            }
        }
        return res;
    }
};