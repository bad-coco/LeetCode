class Solution {
public:
    bool search(vector<int>& arr, int target) {
        int n= arr.size();
        int low =0,high =n-1;
        
        while(low<=high)
        {
            int mid =low +(high-low)/2;
            if(arr[mid]==target) return true;

            // duplicate value
            if(arr[low] == arr[high])
            {
                low++;
                high--;
                continue;
            }


            //left sorted
            if(arr[low]<arr[mid])
            {
                //low<=target<mid
                if(arr[low]<=target and target <arr[mid])
                {
                    high = mid-1;
                }
                else{
                    low= mid+1;
                }

            }
            //right sorted
            else {
                // mid<target<=high

                if(arr[mid]<target and target<=arr[high])
                {
                    low=mid+1;
                }
                else {
                    high=mid-1;
                }

            }
        }
        return false;
    }
};