class StockSpanner {
public:
    // vector<int> prices;
    int n;
    stack<pair<int, int>> st;
    StockSpanner() {
        n=0;
    }

    int next(int price) {
        // prices.push_back(price);
         n++;
        int result = 0;
        while (!st.empty() && st.top().first <= price) {
            st.pop();
        }
        if (st.empty()) {
            result = n;
        } else if (st.top().first > price) {
            result = (n - 1) - st.top().second;
        }
        st.push({price, n - 1});

        return result;
    }
};
