class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int n = nums2.size();
        int num1Size = nums1.size();

        vector<int> result(num1Size, -1);

        unordered_map<int, int> mp;
        stack<int> st;
        for (int i = n - 1; i >= 0; i--) {
            while (!st.empty() && st.top() <= nums2[i]) {
                st.pop();
            }
            if (st.empty()) {
                mp[nums2[i]] = -1;
            } else if (st.top() > nums2[i]) {
                mp[nums2[i]] = st.top();
            }
            st.push(nums2[i]);
        }
        for(int i=0;i<num1Size;i++)
        {
            result[i]=mp[nums1[i]];
        }
        return result;
    }
};