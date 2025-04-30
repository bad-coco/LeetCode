class Solution {
public:
    int fib(int n) {
        if (n == 0)
            return 0;
        int prev = 1, prev2 = 0;
        int curri;

        for (int i = 2; i <= n; i++) {
            curri = prev + prev2;
            prev2 = prev;
            prev = curri;
        }
        return prev;
    }
};