class Solution {
public:


    vector<int> resultsArray(vector<vector<int>>& queries, int k) {
        int n = queries.size();
        vector<int> result;
        // vector<int> distances;
        // stack<int> distances;
        priority_queue<int> distances;
        int count = 0;
        for (int i = 0; i < n; i++) {
            vector<int> query = queries[i];

            int distance = abs(query[0]) + abs(query[1]);
            // distances.push_back(distance);
              if (distances.size() < k) {
                distances.push(distance);
            } else if (distance < distances.top()) {
                distances.pop();
                distances.push(distance);
            }

            count++;
            // cout << "count : " << count << " k: " << k << endl;
            if (count < k) {

                result.push_back(-1);

            } else {
                // sort(distances.begin(), distances.end());

                // int kth = distances[k - 1];
                // result.push_back(kth);
                 result.push_back(distances.top());
            }
        }
        return result;
    }
};