class Solution {
public:
    int strStr(string haystack, string needle) {
        int l1= haystack.size(), l2= needle.size();
  
        int result=-1;
        
        if(l2>l2) return result;
        int index1=0,index2=0;

        while(index1<l1)
        {
            if(haystack[index1]==needle[index2])
            {
               index1++;
                index2++;
            }
            else {
                 index1++;
                index2=0;
            }
             
              if(index2==l2)
              {
                return index1-l2;
              }

        }
        return result;
    }
};

// haystack = "sadbutsad", needle = "sad"
// haystack = "sbutsad", needle = "sad"