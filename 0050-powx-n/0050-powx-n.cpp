class Solution {
public:
    double myPow(double x, int n) {
        long binNum=n; double ans=1;
        if(binNum==0){
            return 1;
        }
        if(x==0){
            return 0;
        }
        if(x==1){
            return 1;
        }
        if(x==-1 && n%2==0){
            return 1;
        }
        if(x==-1 && n%2!=0){
            return -1;
        }
        if(binNum<0){
            x=1/x;
            binNum=-binNum;
        }
        while(binNum>0){
            if(binNum%2==1){
                ans*=x;
            }
            x*=x;
            binNum/=2;
        }
        return ans;
    }
};