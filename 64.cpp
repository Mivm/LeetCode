class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        if(grid.size()==0) return 0;
        for(int i=0;i<grid.size();++i){
            for(int j=0;j<grid[0].size();++j){
                if(i==0 && j==0){  // First element
                    grid[i][j]=grid[i][j];
                }
                else if(i==0 && j!=0){ // First row
                    grid[i][j]=grid[i][j]+grid[i][j-1];
                }
                else if(i!=0 && j==0){ // First column
                    grid[i][j]=grid[i][j]+grid[i-1][j];
                }
                else{ 
                    grid[i][j]=min(grid[i-1][j],grid[i][j-1])+grid[i][j];
                }
                
            }
        }
        
        return grid[grid.size()-1][grid[0].size()-1];
    }
};
