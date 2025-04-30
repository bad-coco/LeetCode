class Solution {
public:
    int findContentChildren(vector<int>& greed, vector<int>& cookieSizes) {
        int n = greed.size();
        int m = cookieSizes.size();
        sort(greed.begin(),greed.end());
        sort(cookieSizes.begin(),cookieSizes.end());

        int greedI = 0;
        int cookieI = 0;

        while(greedI<n && cookieI<m)
        {
            if(cookieSizes[cookieI]>= greed[greedI])
            {
                greedI++;
            }
            cookieI++;

        }
        
        return greedI;
    }
};
// 7 8 9 10 - g
// 5 6 7 8 - s 