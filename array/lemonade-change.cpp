class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        long long int n = bills.size();
        long long int rs5 = 0;
        long long int rs10 = 0;

        for (long long int i = 0; i < n; i++) {

            if (bills[i] == 5) {
                rs5 += 1;
            }

            else if (bills[i] == 10) {
                if (rs5) {
                    rs5 -= 1;
                    rs10 += 1;

                } else {
                    return false;
                }

            }

            else if (bills[i] == 20) {

                if (rs5 && rs10) {
                    rs5 -= 1;
                    rs10 -= 1;
                } else if (rs5 >= 3) {
                    rs5 -= 3;
                } else
                    return false;
            }
        }
        return true;
    }
};