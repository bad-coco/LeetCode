class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        //-1 0 1 2 -1 -4
        //-4 -1 -1 0 1 2
        sort(nums.begin(),nums.end());
        int n=nums.size();
        set<vector<int>> unqV;
        
        for(int i=0;i<n-2;i++)//last element for i can be last third or else index out of bound
        {
            int j=i+1;
            int k=n-1;
            while(j<k)
            {
                int sum=nums[i]+nums[j]+nums[k];
                if(sum==0)
                {
                    vector<int> tripleint={nums[i],nums[j],nums[k]};
                    unqV.insert(tripleint);
                    j++;
                    k--;
                }
                else if(sum<0)
                {
                    j++;
                }
                else k--;
            }
            
        }
        vector<vector<int>> finres;
        for(auto vect:unqV)
        {
            finres.push_back(vect);
        }
        return finres;
    }
};