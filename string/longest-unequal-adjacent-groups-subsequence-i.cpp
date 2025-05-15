class Solution {
public:
    vector<string> getLongestSubsequence(vector<string>& words, vector<int>& groups) {
        int n = words.size();
        vector<string> result;

        if (n == 0) return result;

        result.push_back(words[0]);
        int lastGroup = groups[0];

        for (int i = 1; i < n; ++i) {
            if (groups[i] != lastGroup) {
                result.push_back(words[i]);
                lastGroup = groups[i];
            }
        }

        return result;
    }
};
