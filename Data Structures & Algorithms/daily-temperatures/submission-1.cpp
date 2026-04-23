class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        vector<int>res(temperatures.size(),0);
        stack<pair<int,int>>st;//temp,index
        for(int i=0;i<temperatures.size();i++){
            int temp=temperatures[i];
            while(!st.empty()&&temp>st.top().first){
                pair<int,int>tem=st.top();
                st.pop();
                res[tem.second]=i-tem.second;

            }
            st.push({temp,i});
        }
        return res;
        
    }
};
