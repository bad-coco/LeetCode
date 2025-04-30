class Solution {
public:
    int mySqrt(int x) {
        if (x == 0)
            return 0;
        long long result = 1;
        long long lastSquare = 1;
        long long lastSquareIndex = 1;
        for (long long i = 1; i < 100000; i++) {
            result = i * i;
            if (result == x)
                return i;
            else if (result < x) {
                lastSquareIndex = i;
                lastSquare = result;
            } else if (result > x)
                break;
        }
        return lastSquareIndex;
    }
};
//
// x =8
//
// 1*1  = 1
// 2*2. =. 4
// 3*3. =. 9