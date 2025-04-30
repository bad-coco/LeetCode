class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        unordered_map<string, function<int(int, int)>> mp = {
            {"+", plus<int>()},
            {"-", minus<int>()},
            {"*", multiplies<int>()},
            {"/", divides<int>()}};

        int n = tokens.size();
        stack<int> st;

        for (int i = 0; i < n; i++) {
            auto& token = tokens[i];
            if (mp.count(token)) {
                int num1 = st.top();
                st.pop();
                int num2 = st.top();
                st.pop();

                st.push(mp[token](num2, num1));
            } else {
                st.push(stoi(token));
            }
        }
        return st.top();
    }
};