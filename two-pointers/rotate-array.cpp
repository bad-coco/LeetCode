class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        if(k==0) return;
        k=k%n;
        if(k>n) return;
        
        vector<int> tempArr(n,0);
        
        for(int i=0,j=0;i<n-k;i++)
        {
         tempArr[j++]=nums[i];   
        }
        for(int i=0,j=0,x=n-k;i<n;i++)
        {
            if(i<k)
            { nums[i]=nums[x++];
            }
            else
            {
            nums[i]=tempArr[j++];
            }
        }
        
    
    }
};