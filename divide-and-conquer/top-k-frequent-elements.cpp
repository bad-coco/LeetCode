class Solution {
    typedef pair<int,int> pint; 
    // {count, number}
public:

    vector<int> topKFrequent(vector<int>& nums, int k) {
         vector<int> result;
        priority_queue<pint, vector<pint>, greater<pint>> pq;
        unordered_map<int,int> mp;

        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]]++;
        }

       for(auto item: mp)
       {
        int number = item.first;
        int count = item.second;
        // cout<< " number: "<<number<< ", count "<<count<<endl;
        pq.push({count, number});
        if(pq.size()>k)
        {
           
            pq.pop();
        }
       }

       while(!pq.empty())
       {
        int number = pq.top().second;
        
        pq.pop();
        result.push_back(number);
       }
       return result;

        
    }
};