class Solution {
public:
    bool isAnagram(string s, string t) {
        int n=s.size();
        int n2= t.size();

        if(n!=n2)
        {
            return false;
        }

        vector<int> vect(26,0);
        for(int i=0;i<n;i++)
        {
            vect[s[i]-'a']++;
            vect[t[i]-'a']--;
        }

        for(int num:vect)
        {
            if(num!=0)
            {
                return false;
            }
        }
        return true;

        
        
    }
};