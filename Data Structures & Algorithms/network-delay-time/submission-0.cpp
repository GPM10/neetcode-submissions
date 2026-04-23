class Solution {
public:
    int networkDelayTime(vector<vector<int>>& times, int n, int k) {
        unordered_map<int, vector<pair<int,int>>> edges;
        for(const auto&time:times){
            edges[time[0]].emplace_back(time[1],time[2]);
           }
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<>> minHeap;
        minHeap.push({0,k});
        set<int>visit;
        int t=0;
        while(!minHeap.empty()){
            auto curr=minHeap.top();
            minHeap.pop();
            int w1=curr.first;
            int n1=curr.second;
            if(visit.count(n1)){
                continue;
            }
            visit.insert(n1);
            t = w1;
            for(const auto&next:edges[n1]){
                int n2=next.first;
                int w2=next.second;
                if(!visit.count(n2)){
                    minHeap.push({w1+w2,n2});
                }
            }


        }
        return visit.size()==n?t:-1;
    }
};
