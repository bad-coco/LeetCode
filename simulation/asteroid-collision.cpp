class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        // put the values in stack if the number are positive
        // if number is negative -> stack is empty (put it in stack)
        // not empty but positive -> if the while ( abs(of current ) > stack.top
        // && stack is not empty)

        stack<int> st;
        int n = asteroids.size();
        for (int i = 0; i < n; i++) {
            if (asteroids[i] > 0) {
                st.push(asteroids[i]);
            } else {

                while (!st.empty() && st.top() < abs(asteroids[i]) && st.top()>0) {
                    st.pop();
                }
                if (st.empty() || st.top() < 0) {
                    st.push(asteroids[i]);
                  
                }
                else if(abs(asteroids[i]) == st.top()) {
                    st.pop();
                }
            }
        }
        int resultSize = st.size();

        vector<int> result(resultSize);
        resultSize--;
        while (!st.empty()) {
            result[resultSize--] = st.top();
            st.pop();
        }
        return result;
    }
};