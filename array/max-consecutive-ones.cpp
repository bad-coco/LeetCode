class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
             int n=nums.size();
  int lastZero=-1;
        int temp=0;
        int max=0;
        for(int i=0;i<n;i++)
        {
            if(nums[i]==0)
            {
                temp=i-lastZero-1;
                if(temp>max)
                {
                    max=temp;
                }
                lastZero=i;
            }
            
          
        }
         temp=n-1-lastZero;
                if(temp>max)
                {
                    max=temp;
                }
        
        return max;
        
    }
};