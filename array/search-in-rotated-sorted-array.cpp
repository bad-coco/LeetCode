class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        int low =0,high=n-1;
        int ans =-1;
        while(low<=high)
        {
            int mid = low +(high-low);
            if(nums[mid]==target) 
            {
                return mid;
            }

            // left sorted
            if(nums[low]<nums[mid])
            {
                //low<=target<mid
                if(nums[low]<=target and target<nums[mid])
                {
                    high = mid-1;
                }
                else{
                    low= mid+1;
                }
            }
            // right sorted
            else{
                // mid<target<=high
                if(nums[mid]<target and target<=nums[high])
                {
                    low = mid+1;
                }
                else{
                    high = mid-1;
                }
            }
        }
        return ans;
        
    }
};