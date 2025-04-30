class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int n = fruits.size();

        int k = 2;
        int count = 0;
        unordered_map<int, int> mp;
        
        int maxR = 0;
        int i = 0, j = 0;
        while (j < n) {
            mp[fruits[j]]++;
            if (mp[fruits[j]] == 1) {
                count++;
            }
            if (count < k) {
                j++;
            } else if (count > k) {
                while (count > k) {
                    mp[fruits[i]]--;
                    if (mp[fruits[i]] == 0) {
                        count--;
                    }
                    i++;
                }
            }

            if (count == k) {
                maxR = max(maxR, (j - i + 1));
                j++;
            }
        }
        if(maxR==0)
        {
            return n;
        }
        return maxR;
    }
};