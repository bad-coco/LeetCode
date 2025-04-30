class Solution {
public:
    //  [[1,3],[4,5],[6,7],[8,9]], newInterval = [4,7]
    //   intervals = [[1,3],[6,9]], newInterval = [2,5]
    vector<vector<int>> insert(vector<vector<int>>& intervals,
                               vector<int>& newInterval) {

        int n = intervals.size();
        int i = 0;
        vector<vector<int>> result;
        while (i < n && (intervals[i][1] < newInterval[0])) {

            result.push_back(intervals[i]);
            i++;
        }
        int left = newInterval[0];
        int right = newInterval[1];
        while (i < n && (intervals[i][0] <= newInterval[1])) {
            left = min(intervals[i][0], left);
            right = max(intervals[i][1], right);
            i++;
        }
        newInterval[0] = left;
        newInterval[1] = right;
        result.push_back(newInterval);
        while (i < n) {

            result.push_back(intervals[i]);
            i++;
        }
        return result;
    }
};