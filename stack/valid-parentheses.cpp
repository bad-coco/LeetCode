class Solution {
public:
    bool isValid(string s) {
        int n = s.size();
        stack<int> st;
        unordered_map<char, char> mp;
        mp['}'] = '{';
        mp[')'] = '(';
        mp[']'] = '[';

        for(int i=0;i<n;i++)
        {
            char x=s[i];
            if(mp.count(x))
            {
                 
                if( st.empty() || mp[x]!=st.top() )
                {
                    return false;
                }
                else{
                    st.pop();
                }

            }
            else{
                st.push(x);
            }
        }
        if(st.size()>0)
        {
            return false;
        }
        return true;
    }
};