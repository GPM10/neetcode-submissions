class Solution {
public:
    bool isHappy(int n) {
        int slow=n;
        int fast=squares(n);
        while(slow!=fast){
            fast=squares(fast);
            fast=squares(fast);
            slow=squares(slow);
            
        }
        return fast==1;

        
    }
    int squares(int n){
        int output=0;
        while(n>0){
            output+=(n%10)*(n%10);
            n/=10;
        }
        return output;
    }

};
