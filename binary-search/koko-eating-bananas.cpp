class Solution {
public:
    int findMaxElement(vector<int>& piles, int n) {
        int max = INT_MIN;
        for (int i = 0; i < n; i++) {
            if (max < piles[i]) {
                max = piles[i];
            }
        }
        return max;
    }

    bool inHourRange(vector<int>& piles, int h, int n, int eatingSpeed) {
        int monkeyTotalHour = 0;
        for (int i = 0; i < n; i++) {
            monkeyTotalHour+= ceil((double)piles[i] / (double)eatingSpeed);
            if(monkeyTotalHour>h)
            {
                return false;
            }
        }
        if (monkeyTotalHour <= h) {
            return true;
        } else
            return false;
    }

    int minEatingSpeed(vector<int>& piles, int h) {
        int n = piles.size();
        int maxElement = findMaxElement(piles, n);
        int low = 1, high = maxElement;
        int ans = INT_MAX;
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (inHourRange(piles,h,n,mid)) {
                ans = mid;
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        return ans;
    }
};