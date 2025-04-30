class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int n=arr.size();
        vector<int> result(n,0);
        int maxElement=-1;
        for(int i=n-1;i>=0;i--)
        {
            result[i]=maxElement;
            if(arr[i]>maxElement)
            {
                maxElement=arr[i];
            }
        }
        return result;
        
    }
};