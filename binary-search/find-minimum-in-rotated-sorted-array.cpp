class Solution {
public:
    int findMin(vector<int>& arr) {
        int n = arr.size();
        int low = 0, high = n - 1;
        int minNum = INT_MAX;
        // while (low <= high) {
        //     int mid = low + (high - low) / 2;
        //     if (arr[mid] < minNum) {
        //         minNum = arr[mid];
        //     }
        //     if (arr[low] <= arr[mid]) {
        //         minNum = arr[low] < minNum ? arr[low] : minNum;
        //         low = mid + 1;
        //     } else {
        //         minNum = arr[mid] < minNum ? arr[mid] : minNum;
        //         high = mid - 1;
        //     }

        // }
        //  return minNum;
        while(low <= high) {
            int mid = low + (high - low) / 2;

            if (arr[mid] > arr[high]) {
                low = mid + 1;
            } else {
                high = mid-1;
            }
        }
        return arr[low];
    }
};