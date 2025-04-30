class Solution {
public:
    
    void moveZeroes(vector<int>& nums) {
        int n=nums.size();
        int j=1;
        int i=0;
       while(i<n && j<n)
        {
            if(nums[i]==0)
            {
              
           
                   if(nums[j]!=0 )
                   {
                       nums[i]=nums[j];
                       nums[j]=0;
                       i++;
                   }
                  else{
                      j++;
                  }
              
                
            }
           else{
               i++;
             if(j<=i)
                 j=i+1;
           }
        }
    }
};