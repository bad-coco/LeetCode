class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        //O(n) space complexity
        //O(n) Time Complexity
        int n= nums.size();
        unordered_map<int,int> unmap;

        for(int i=0;i<n;i++)
        {
            int diff = target - nums[i];
            if(unmap.count(diff) && unmap[diff]!=i)
            {
                return {unmap[diff],i};
            }
            unmap[nums[i]] = i;
        }
        return {-1,-1};
        
    }
};