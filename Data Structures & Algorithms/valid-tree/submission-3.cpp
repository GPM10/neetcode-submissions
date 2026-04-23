class Solution {
public:
    bool validTree(int n, vector<vector<int>>& edges) {
        if(edges.size()>n-1){
            return false;
        }
        vector<vector<int>>adj(n);
        for(const auto edge:edges){
            adj[edge[0]].push_back(edge[1]);
            adj[edge[1]].push_back(edge[0]);

        }
        unordered_set<int>visit;
        queue<pair<int,int>>q;
        visit.insert(0);
        q.push({0,-1});

        while(!q.empty()){
            auto [node,parent]=q.front();
            q.pop();
            for(auto nei:adj[node]){
                if(nei==parent){
                    continue;
                }
                if(visit.count(nei)){
                    return false;
                }
                else{
                visit.insert(nei);
                q.push({nei,node});}
            }
        }
    return visit.size()==n;


    }
};
