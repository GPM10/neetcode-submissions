class Solution {
public:
    int maxDepth(string s) {
        int res=0;
        int max_res=0;
        for(char c:s){
            if(c=='('){
                res++;

            }
            else if(c==')'){
                res--;
            }
        max_res=max(max_res,res);
        }
        return max_res;
    }
};