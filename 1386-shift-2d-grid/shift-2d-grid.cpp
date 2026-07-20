class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        int row = grid.size();
        int col = grid[0].size();
        int n = row * col;
        k = k % n;
        
        // Create a result grid of the same size
        vector<vector<int>> result(row, vector<int>(col));
        
        for (int i = 0; i < row; i++) {
            for (int j = 0; j < col; j++) {
                // Find the new 1D index
                int new_flat_idx = (i * col + j + k) % n;
                
                // Convert back to 2D coordinates
                int new_r = new_flat_idx / col;
                int new_c = new_flat_idx % col;
                
                result[new_r][new_c] = grid[i][j];
            }
        }
        
        return result;
    }
};