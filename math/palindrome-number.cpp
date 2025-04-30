#include<string>
class Solution {
public:
    // Using string

    bool isPalindrome(int x) {
        if (x < 0)
            return false;

        string s1 = to_string(x);
        string s2 = to_string(x);
        reverse(s1.begin(),s1.end());
        if (s1 == s2)
            return true;
        return false;
    }
};