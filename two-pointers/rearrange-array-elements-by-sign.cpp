class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n=nums.size();
        vector<int> numNew(n,0);
        int p=0,ne=1;
        for(int i=0;i<n;i++)
        {
            if(nums[i]>=0)
            {
                numNew[p]=nums[i];
                p+=2;
            }
            else if(nums[i]<0)
            {
                numNew[ne]=nums[i];
                ne+=2;}
        }
        return numNew;
    }
};