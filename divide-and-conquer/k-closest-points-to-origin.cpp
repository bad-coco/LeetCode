class Solution {
    typedef pair<int, int> pint;

public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        priority_queue<pint> pq;
        vector<vector<int>> result;
        int n = points.size();

        for (int i = 0; i < n; i++) {
            int x = points[i][0];
            int y = points[i][1];
            int distance = (x * x) + (y * y);
            pq.push({distance, i});
            if (pq.size() > k) {
                pq.pop();
            }
        }
        while (pq.size() > 0) {
            int index = pq.top().second;
            result.push_back({points[index][0], points[index][1]});
            pq.pop();
        }

        return result;
    }
};