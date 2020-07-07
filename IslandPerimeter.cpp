class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int res=0, n=grid.size();
        for(int i=0; i<n;i++)
        {
            for(int j=0;j<grid[0].size();j++)
            {
                if(grid[i][j]==1)
                {
                    if(i-1 < 0 || grid[i-1][j]==0)
                    ++res;
                    if(j-1 < 0 || grid[i][j-1]==0)
                    ++res;
                    if(i+1 >= n || grid[i+1][j]==0 )
                    ++res;
                    if(j+1 >= grid[0].size() || grid[i][j+1]==0)
                    res += 1;
                }                
            }
        }
        return res;
    }
};
