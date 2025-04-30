class Solution {
public:
    vector<int> findAnagrams(string str, string p) {
        unordered_map<char, int> mp;
        vector<int> result;

        int n = str.size();
        int k = p.size();
        int count = 0;

        for (int i = 0; i < k; i++) {
            mp[p[i]]++;
            if (mp[p[i]] == 1) {
                count++;
            }
        }

        int i = 0, j = 0;

        while (j < n) {
            mp[str[j]]--;
            if (mp[str[j]] == 0) {
                count--;
            }

            if ((j - i + 1) < k) {
                j++;
            } else if ((j - i + 1) == k) {
                if(count==0)
                {
                    result.push_back(i);
                }

                mp[str[i]]++;
                if( mp[str[i]]==1)
                {
                    count++;
                }

                i++;
                j++;
            }
        }
        return result;
    }
};