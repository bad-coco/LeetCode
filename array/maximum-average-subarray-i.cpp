class Solution {
public:
    double findMaxAverage(vector<int>& arr, int k) {
        int maxS = INT_MIN;
        int n = arr.size();
        int i = 0, j = 0;
        int sum = 0;
        while (j < n) {
            sum += arr[j];
            if ((j - i + 1) < k) {
                j++;
            } else if ((j - i + 1) == k) {
                maxS = max(maxS, sum);
                sum=sum-arr[i];
                i++;
                j++;
            }
        }
        return (double)maxS/k;
    }
};