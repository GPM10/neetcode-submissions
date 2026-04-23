class Solution {
public:
    double myPow(double x, int n) {
        
        if(x==0){
            return 0;
        }
        if(n==0){
            return 1;
        }
        long long m = abs((long long)n);
        double res = 1;
        
        while(m>0){
            if(m&1){
                res*=x;

            }
            x*=x;
            m=m>>1;
        }
        if (n<0){
            return 1/res;
        }
        else{
            return res;
        }
    }
};
