class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        stack<int> st;
        int n=prices.size();
        vector<int> result(n,0);
        
        for(int i=n-1;i>=0;i--)
        {
            while(!st.empty() && st.top()>prices[i])
            {
                st.pop();

            }

            if(st.empty())
            {
                result[i]=prices[i];
            }
            else if(st.top()<=prices[i])
            {
                result[i]=prices[i]-st.top();
            }
            st.push(prices[i]);

        }
        return result;
        
    }
};