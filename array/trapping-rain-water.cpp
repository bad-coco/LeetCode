class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();
        int leftMax=0;
        int rightMax=0;
        int leftI=0, rightI=n-1;
        int waterTrapped=0;
        int w=0;
       
        while(leftI<rightI)
        {
            leftMax=max(leftMax,height[leftI]);
            // cout<<"leftMax: "<<leftMax<<endl;
            rightMax=max(rightMax,height[rightI]);
            //  cout<<"rightMax: "<<rightMax<<endl;
            if(leftMax<=rightMax)
            {
                    // cout<<"leftMax -> "<<leftMax<<" is less than-> "<<rightMax<<", height[i]: "<< height[leftI]<<endl;
                  w= leftMax-height[leftI];
            }
            else{
                //  cout<<"leftMax -> "<<leftMax<<" is greater than-> "<<rightMax<<", height[rightI]: "<< height[rightI]<<endl;
                 w= rightMax-height[rightI];
            }
            if(w>0)
            {
                // cout<<"w: "<<w<<endl;
                waterTrapped=waterTrapped+w;
            }
            // int water= (min(leftMax,rightMax))-height[]
            if(rightMax<leftMax)
            {
                rightI--;
            }
            else{
                leftI++;
            }

        }
        return waterTrapped;
        
    }
};