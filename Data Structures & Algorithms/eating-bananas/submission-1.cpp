class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {

        int l=1;
        int r = *max_element(piles.begin(), piles.end());

        int res=0;
        while(l<=r){
            int k=l+(r-l)/2;
            long long total_time=0;
            for(int p:piles){
                total_time+=ceil((double)p / k);

            }
            if(total_time<=h){
                res=k;
                r=k-1;
            }
            else{
                l=k+1;
            }
        }
        return res;
        
    }
};
