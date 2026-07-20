class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        int row = grid.size();
        int col = grid[0].size();

        
        vector<int>nums;
        for(int i = 0; i < row; i++)
        {
            for(int j = 0; j < col; j++)
            {
                nums.push_back(grid[i][j]);
            }
        }
        k = k % nums.size() ;
        reverse(nums.begin(),nums.end());
        reverse(nums.begin(),nums.begin() + k);
        reverse(nums.begin()+k, nums.end());
        int idx = 0;
        for(int i = 0; i < row; i++)
        {
            for(int j = 0; j < col; j++)
            {
                grid[i][j] = nums[idx++];
            }
            
        }
        return grid;
    }
};