class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        sort(people.begin(),people.end());
        int l=0;
        int r=people.size()-1;
        int res=0;
        int remain=0;
        while(l<=r){
            if(l<=r&&people[r]<=limit){
                remain=limit-people[r];
                res++;
                r--;

            }
            if(l<=r && remain>=people[l]){
                l++;
            }
        }
        return res;
        
    }
};