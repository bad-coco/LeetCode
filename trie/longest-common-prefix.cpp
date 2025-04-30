class Solution {
public:
    string check(string &s,string strs,int &n)// flower flow 5
    {
        if(strs.find(s)==0)
            return s;
        else if(n==0)
            return s="";
        else{
            
            s=s.substr(0,n-1);
            n=n-1;
            check(s,strs,n);
        }
        return s;
    }
    
    string longestCommonPrefix(vector<string>& strs) {
        string s=strs[0];
        int n=s.size();
        
        for(int i=1;i<strs.size();i++)
        {
           s= check(s,strs[i],n);
            if(s=="")
                break;
        }
       return s;
            
    }
};