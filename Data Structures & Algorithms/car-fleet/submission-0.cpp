class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        int n=position.size();
        vector<pair<int,int>>pair;

        for(int i=0;i<n;i++){
            pair.push_back({position[i],speed[i]});
        }
        sort(pair.rbegin(),pair.rend());
        stack<double>st;
        int fleet=0;
        for(auto& p:pair){
            double time=((double)(target - p.first) / p.second);
            if(st.empty()||time>st.top()){
                fleet++;
                st.push(time);
            }
            
        }
        return fleet;

        }
        
    
};
