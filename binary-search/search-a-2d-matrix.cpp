class Solution {
public:
    bool searchMatrix(vector<vector<int>>& mat, int x) {
        int m=mat[0].size();
        int n=mat.size();
        // cout<<"n is: "<<n<<endl;
        // cout<<"m is: "<<m<<endl;

       for(int i=0;i<n;i++)
	  {
	      for(int j=0; j<m;j++)
	      {
	       if(mat[i][j]==x)
	       return true;
	       if(i+1<n)
	       {
	           if(mat[i+1][j]<x)
	           {
	               break;
	           }
	       }
	       
	      }
	  }
	  return false;
    }
};