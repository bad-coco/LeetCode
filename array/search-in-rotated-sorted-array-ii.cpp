class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int n = nums.size();
        int low =0, high= n-1;
        int ans = false;
        while(low<=high)
        {
            int mid = low + (high - low)/2;
            if(nums[mid]==target)
            {
                return true;
            }
            if(nums[mid] == nums[low] and nums[mid] == nums[high])
            {
                low++;
                high--;
                continue;
            }
            // left sorted
            if(nums[low]<=nums[mid])
            {
                // low<target<mid
                if(nums[low]<=target and target < nums[mid])
                {
                    high = mid-1;
                }
                else{
                    low = mid+1;
                }


            }
            //right sorted check 
            else{
                // mid<target<high

                if(nums[mid]<target and target <=nums[high])
                {
                    low = mid+1;
                }
                else{
                    high = mid -1 ;
                }


            }
        }
        return false;
        
    }
};