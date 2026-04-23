class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        vector<int>res(26,0);
        for(char c:tasks){
            res[c-'A']+=1;
        }
        priority_queue<int> maxHeap;
        for(int num:res){
            if(num>0){
                maxHeap.push(num);

            }

        }
        int time=0;
        queue<pair<int,int>>q;
        while(!q.empty()||!maxHeap.empty()){
            time++;
            if(maxHeap.empty()){
                time=q.front().second;
            }else{
                int cnt=maxHeap.top()-1;
                maxHeap.pop();
                if(cnt>0){
                    q.push({cnt,time+n});
                }

            }
            if(!q.empty()&&q.front().second==time){
                maxHeap.push(q.front().first);
                q.pop();
            }
        }
        return time;
        
    }
};
