class Solution {
public:
    int maxRemoval(vector<int>& nums, vector<vector<int>>& queries) {
        int n = nums.size();
        int q = queries.size();

        // Step 1: Calculate initial coverage from all queries
        vector<int> coverage(n, 0);
        for (const auto& query : queries) {
            for (int i = query[0]; i <= query[1]; ++i) {
                coverage[i]++;
            }
        }

        // Step 2: If any index has less coverage than needed, return -1
        for (int i = 0; i < n; ++i) {
            if (coverage[i] < nums[i]) return -1;
        }

        // Step 3: Try removing each query one by one and count how many we can remove
        int removed = 0;
        for (int i = 0; i < q; ++i) {
            const auto& query = queries[i];
            bool canRemove = true;
            // Temporarily remove this query
            for (int j = query[0]; j <= query[1]; ++j) {
                coverage[j]--;
            }
            // Check if still valid
            for (int j = 0; j < n; ++j) {
                if (coverage[j] < nums[j]) {
                    canRemove = false;
                    break;
                }
            }
            if (canRemove) {
                removed++;
            } else {
                // Restore it
                for (int j = query[0]; j <= query[1]; ++j) {
                    coverage[j]++;
                }
            }
        }

        return removed;
    }
};
