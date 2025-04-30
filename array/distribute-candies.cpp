class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        set<int> candt;
        int n=candyType.size();
        for(int i=0;i<n;i++)
            candt.insert(candyType[i]);
        
        if(candt.size()<=n/2)
            return candt.size();
        else
            return n/2;
        
    }
};