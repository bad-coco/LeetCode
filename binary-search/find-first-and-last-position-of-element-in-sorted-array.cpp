class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n = nums.size();
        int lowerBound = n,upperBound = n;
        int low = 0,high = n-1;

        while(low<=high)
        {
            int mid = low+(high-low)/2;
            if(nums[mid]==target)
            {
                lowerBound = mid;
                high = mid-1;
            }
            else if(nums[mid]>target)
            {
                high = mid-1;
            }
            else {
                low = mid+1;
            }
        }
        if(lowerBound == n)
        {
            return {-1,-1};
        }
           low = 0,high = n-1;

         while(low<=high)
        {
            int mid = low+(high-low)/2;
            if(nums[mid]==target)
            {
              upperBound = mid;
              low = mid+1;
            }
            else if(nums[mid]>target)
            {
                high = mid-1;
            }
            else {
                low = mid+1;
            }
        }

        return {lowerBound,upperBound};

    }
};