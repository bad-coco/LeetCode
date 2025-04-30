class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int min=prices[0];
        int maxProfit=0;
        int temp;
        for(int i=1;i<n;i++)
        {
             if(prices[i]<min)
            {
                min=prices[i];
                
            }
            if(prices[i]>min)
            {
                 temp=(prices[i]-min);
                 if(maxProfit<temp)
                 {
                     maxProfit=temp;
                 }
            }
            
        }
        return maxProfit;
                    
    }
};