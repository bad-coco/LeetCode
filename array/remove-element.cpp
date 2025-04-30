class Solution {
public:
    int removeElement(vector<int>& nums, int val) {

        auto it= nums.begin();
        for(int i=0;i<nums.size();i++)
        {
            if(val == nums[i])
            {
                nums.erase(it+i); 
                i=i-1;
            }
          
        }
        return nums.size();
    }
};