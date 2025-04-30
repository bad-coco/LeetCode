class Solution {
public:
    int largestRectangleArea(vector<int>& height) {
        int n = height.size();
        vector<int> left(n, -1);
        vector<int> right(n, -1);
        stack<pair<int, int>> st;
       
        int maxArea = INT_MIN;

        for (int i = 0; i < n; i++) {
            while (!st.empty() && st.top().first >= height[i]) {
                st.pop();
            }

            if (st.empty()) {
                left[i] = -1;
            } else if (st.top().first < height[i]) {
                left[i] = st.top().second;
            }

            st.push({height[i], i});
        }
        while(!st.empty())
        {
            st.pop();
        }

        for (int i = n - 1; i >= 0; i--) {
            while (!st.empty() && st.top().first >= height[i]) {
                st.pop();
            }

            if (st.empty()) {

                right[i] = n;
            } else if (st.top().first < height[i]) {
                right[i] = st.top().second;
            }

            st.push({height[i], i});
        }
        for (int i = 0; i < n; i++) {

            int area = height[i] * (right[i] - left[i] - 1);
            maxArea = max(maxArea, area);
        }
        return maxArea;
    }
};
