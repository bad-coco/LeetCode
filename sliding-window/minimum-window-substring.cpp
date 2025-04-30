class Solution {
public:
    string minWindow(string s, string t) {
        unordered_map<char, int> mp;
        int n = s.size();
        int minW = INT_MAX;
        string res = "";
        int i = 0, j = 0;
        int count = 0;
        int start = 0;
        for (char c : t) {
            mp[c]++;
            if (mp[c] == 1) {
                count++;
            }
        }

        while (j < n) {
            if (mp.find(s[j]) != mp.end()) {
                mp[s[j]]--;

                if (mp[s[j]] == 0) {
                    --count;
                }
            }

            if (count > 0) {
                j++;
            } else if (count == 0) {

                while (count == 0) {

                    if (minW > (j - i + 1)) {
                        minW = (j - i + 1);
                        start = i;
                    }
                    if (mp.find(s[i]) != mp.end()) {
                        mp[s[i]]++;

                        if (mp[s[i]] == 1) {
                            count++;
                        }
                    }
                    i++;
                }
                j++;
            }
        }
        return minW == INT_MAX ? "" : s.substr(start, minW);
    }
};