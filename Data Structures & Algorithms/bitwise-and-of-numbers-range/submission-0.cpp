class Solution {
public:
    int rangeBitwiseAnd(int left, int right) {
        int total=0;
        while(left<right){
            right=right&(right-1);

        }
        return right;
    }
};