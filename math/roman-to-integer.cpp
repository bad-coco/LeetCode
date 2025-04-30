class Solution {
public:
    int romanToInt(string s) {
        /// XIX
 
        // XI
        // last stored in result  // result= 1
        // check from n-1, if (currentVal) < value[current+1] => subtract result
        // - currentVal X = 10 , that is greater than I =1 so add. if(currentVal
        // > value[current+1] => add result + currnetVal
        /// XII
        /// VIII
        /// IV
        map<char, int> order;
        order['I'] = 1;
        order['V'] = 5;
        order['X'] = 10;
        order['L'] = 50;
        order['C'] = 100;
        order['D'] = 500;
        order['M'] = 1000;
        int n = s.size();
        char val = s[n - 1];
        int result = order[val];
        for (int i = n - 2; i >= 0; i--) {
            int current = s[i];
            int previous = s[i + 1];
 
            if (order[current] < order[previous]) {
                result -= order[current];
            } else {
                result += order[current];
            }
 
            // if(order[current] > order[previous]) {
            //     result = order[current] - order[previous];
            // }
        }
 
        return result;
    }
};