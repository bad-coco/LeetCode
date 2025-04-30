#include<bits/stdc++.h>
class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n=nums.size();
        int conditionCount=n/3;
        vector<int> result;
        map<int,int> mp;
        for(int i=0;i<n;i++)
        {
            mp[nums[i]]++;
            if(mp[nums[i]]>conditionCount)
            {
                if(find(result.begin(),result.end(),nums[i])==result.end())
                result.push_back(nums[i]);
             
            }
        }
        
        
        return result;
    }
};