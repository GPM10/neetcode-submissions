class Solution {
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        vector<int>indegree(numCourses,0);
        vector<vector<int>>mapping(numCourses);

        for(auto&preq:prerequisites){
            indegree[preq[1]]++;
            mapping[preq[0]].push_back(preq[1]);
        }
        queue<int>q;
        for(int i=0;i<numCourses;i++){
            if(indegree[i]==0){
                q.push(i);
            }
        }
        int finish=0;
        while(!q.empty()){
            int curr=q.front();
            q.pop();
            finish++;

            for(int nei:mapping[curr]){
                indegree[nei]--;
                if(indegree[nei]==0){
                    q.push(nei);
                }
            }

        }
        return numCourses==finish;
        
    }
};
