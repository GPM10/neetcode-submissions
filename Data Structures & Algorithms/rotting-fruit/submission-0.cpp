class Solution {
public:
    int rows = 0;
    int cols = 0;
    int fresh = 0;
    int time = 0;
    queue<pair<int, int>> q;

    int orangesRotting(vector<vector<int>>& grid) {

        rows = grid.size();
        cols = grid[0].size();

        
        fresh = 0;
        time = 0;
        while(!q.empty()) q.pop();

        for(int r = 0; r < rows; r++){
            for(int c = 0; c < cols; c++){
                if(grid[r][c] == 1){
                    fresh++;
                }
                else if(grid[r][c] == 2){
                    q.push({r, c});
                }
            }
        }

        vector<pair<int, int>> directions = {
            {0,1}, {0,-1}, {1,0}, {-1,0}
        };

        while(fresh > 0 && !q.empty()){

            int length = q.size();

            for(int i = 0; i < length; i++){

                auto curr = q.front();
                q.pop();

                int row = curr.first;
                int col = curr.second;

                for(int d = 0; d < 4; d++){

                    int r = row + directions[d].first;
                    int c = col + directions[d].second;

                    if(r >= 0 && r < rows &&
                       c >= 0 && c < cols &&
                       grid[r][c] == 1){

                        grid[r][c] = 2;
                        q.push({r, c});
                        fresh--;
                    }
                }
            }

            time++;
        }

        return fresh == 0 ? time : -1;
    }
};