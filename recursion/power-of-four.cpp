class Solution {
public:
    bool isPowerOfFour(int n) {
        if(n<=0){
            return false;
        }
        int x= log(n)/log(4);
        if(pow(4,x)==n){
            return true;
        }
        else{
            return false;
        }
    }
};
// 4 power x = n
// log (4^x) = logn
// x log4 = logn
// x =logn/log4