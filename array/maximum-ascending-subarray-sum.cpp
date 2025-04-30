class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
        int max=-1;
        int tempsum=nums[0];
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]>nums[i-1])
            {
                tempsum+=nums[i];
            }
            else{
                 
                if(max<tempsum)
                    max=tempsum;
               tempsum=nums[i];
            }
        }
        if(tempsum>max)
            max=tempsum;
        return max;
        
    }
};