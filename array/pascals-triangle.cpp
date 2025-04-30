class Solution {
public:
    vector<vector<int>> generate(int r) {
        vector<vector<int>> result;
        vector<int> first(1,1);
        result.push_back(first);

     for(int i=1;i<r;i++)
     {
        vector<int> row(i+1,1);  
        for(int j=1;j<i;j++)
        {
            row[j]=result[i-1][j]+result[i-1][j-1];
            
        }
        result.push_back(row);

     }   
     return result;
    }
};