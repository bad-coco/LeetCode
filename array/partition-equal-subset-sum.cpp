class Solution {
public:
    bool canPartition(vector<int>& arr) {
        int n = arr.size();
        int total = 0;
        for (int i = 0; i < n; i++) {
            total += arr[i];
        }
        if (total % 2 != 0) {
           

            return false;
        }

        int k = total / 2;

        vector<vector<int>> dp(n + 1, vector<int>(k + 1));

        for (int w = 0; w <= k; w++) {
            dp[0][w] = false;
        }

        for (int i = 0; i <= n; i++) {
            dp[i][0] = true;
        }

        for (int i = 1; i <= n; i++) {
            for (int w = 1; w <= k; w++) {

                int element = arr[i - 1];
                if (element <= w) {
                    dp[i][w] = dp[i - 1][w - element] || dp[i - 1][w];

                } else {
                    dp[i][w] = dp[i - 1][w];
                }
            }
        }
        return dp[n][k];
    }
};