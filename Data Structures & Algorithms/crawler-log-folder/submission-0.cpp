class Solution {
public:
    int minOperations(vector<string>& logs) {
        int res=0;

        for(auto &log:logs){
            if(log=="./"){
                continue;
            }
            else if(log=="../"){
                res=max(res-1,0);
            }
            else{
                res++;
            }

        }
        return res;
    }
};