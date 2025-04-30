class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n1=nums1.size();
        int n2=nums2.size();
        vector<int> result(n1+n2); //intializing vector for output
        //merging and sorting the vector
        merge(nums1.begin(),nums1.end(),nums2.begin(),nums2.end(),result.begin());
        
        
        int n=result.size();
        double finalRes=0;
        //checking if the final vector size is even or odd
        if(n%2!=0)
        {
            int i=n/2;
           finalRes=result[i];
        }
        else
        {
            int index1=n/2;
            int index2=index1-1;
            int sum=result[index1]+result[index2];
            finalRes=(double)sum/2;
        }
        return finalRes;
    }
};