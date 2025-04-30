class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        // if(s==" ")
        //     return 1;
        int n=s.size();
        int largest=0;
        for(int i=0;i<n;i++)
        {
            int leng=0;
            int x=i;
            unordered_map<char,int> charCount;
            while(x<n)
            {
                if(charCount[s[x]]!=1)
                {
                    charCount[s[x]]=1;
                    leng++;
                }
                else{
                   break;
                }
                largest=largest>leng?largest:leng;
                x++;
            }
        }
            return largest;
    }

};