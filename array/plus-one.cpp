class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();
        int carry = 1;

        for (int i = n - 1; i >= 0; i--) {
            if (carry == 0) {
                break;
            }
            int sum = digits[i] + carry;
            digits[i] = sum % 10;
            carry = sum / 10;
        }
        if (carry) {
            digits.insert(digits.begin(), 1);
        }
        return digits;
    }
};