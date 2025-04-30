class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        //-1 2 1 -4
        //-4 -1 1 2 //1 target
        //minC maxC;
        int minC=-2222;
        int maxC=2222;
        sort(nums.begin(),nums.end());
        int n=nums.size();
        for(int i=0;i<n-2;i++)
        {
            int j=i+1;
            int k=n-1;
            while(j<k)
            {
                int sum=nums[i]+nums[j]+nums[k];
                if(sum==target)
                    return sum;
                else if(sum<target) //-3<1 // -2222
                {
                    if(sum>minC)
                        minC=sum;
                    j++;
                }
                else //4>1 //2222
                {
                    if(sum<maxC)
                        maxC=sum;
                   k--; 
                }
                
            }
        }
        if(target-minC>maxC-target)
            return maxC;
        else return minC;
    }
};