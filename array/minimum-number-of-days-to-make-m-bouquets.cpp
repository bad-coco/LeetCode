class Solution {
public:
    int maxElement(vector<int>& bloomDay, int n) {
        int maxE = INT_MIN;
        for (int i = 0; i < n; i++) {
            maxE=max(maxE, bloomDay[i]);
        }
        return maxE;
    }

    int findBouquets(vector<int>& bloomDay, int n, int currentDay, int m,
                     int k) {
        int count = 0;
        int bq = 0;
        for (int i = 0; i < n; i++) {
            if (bloomDay[i] <= currentDay) {
                count++;
            } else {
                bq += count / k;
                count = 0;
                if (bq > m) {
                    return bq;
                }
            }
        }
        bq += count / k;
        return bq;
    }

    int minDays(vector<int>& bloomDay, int m, int k) {
        int n = bloomDay.size();
        
        if ((long)m * k > n) {
            return -1;
        }
         
        int maxBloomDay = maxElement(bloomDay, n);

        int low = 1, high = maxBloomDay;

        while (low <= high) {
            int mid = low + (high - low) / 2;
            int bouquetes = findBouquets(bloomDay, n, mid, m, k);
            if (bouquetes >= m) {
                
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        return low;
    }
};