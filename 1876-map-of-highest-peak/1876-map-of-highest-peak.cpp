class Solution {
public:
void BFS(queue<pair<int,int>>& q,vector<vector<int>>& height,vector<vector<int>>& isWater) {
    int dirs[4][2] = {{0,1},{1,0},{0,-1},{-1,0}};
     int m = isWater.size();
        int n = isWater[0].size();
    while(!q.empty()){
        auto [x,y] = q.front(); q.pop();
        for(auto & s : dirs){
            int newx = x + s[0]; int newy = y + s[1];
            if((newx >= 0 && newx < m) && (newy>=0 && newy<n) && height[newx][newy] == -1){
                height[newx][newy] = 1 + height[x][y];
                q.push({newx,newy});
            }
        }
    }
}

    vector<vector<int>> highestPeak(vector<vector<int>>& isWater) {
        int m = isWater.size();
        int n = isWater[0].size();
vector<vector<int>> height(m,vector<int>(n,-1));
  queue<pair<int,int>> q;
  for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
        if(isWater[i][j] == 1) {q.push({i,j}); height[i][j] = 0;}
    }
  }
   BFS(q,height,isWater);

return height;
    }
};