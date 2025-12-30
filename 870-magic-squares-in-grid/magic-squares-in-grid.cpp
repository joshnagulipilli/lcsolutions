class Solution {
public:


    bool isMagicSquare(vector<vector<int>>& grid,int row,int col){
        bool seen[10] = {false};
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                int num = grid[row + i][col+j];
                if(num>9 | num<1) return false;
                if(seen[num]) return false;
                seen[num] = true;
            }
        }

            int diagonal1 = grid[row][col]+grid[row+1][col+1]+grid[row+2][col+2];
            int diagonal2 = grid[row+2][col]+grid[row+1][col+1]+grid[row][col+2];
            if(diagonal1 != diagonal2) return false;

            int row1 = grid[row][col]+grid[row][col+1]+grid[row][col+2];
            int row2 = grid[row+1][col]+grid[row+1][col+1]+grid[row+1][col+2];
            int row3 = grid[row+2][col]+grid[row+2][col+1]+grid[row+2][col+2];

            if (!(row1 == diagonal1 && row2 == diagonal1 && row3 == diagonal1)) {
            return false;
        }

         int col1 = grid[row][col] + grid[row + 1][col] + grid[row + 2][col];
         int col2 = grid[row][col + 1] + grid[row + 1][col + 1] + grid[row + 2][col + 1];
         int col3 = grid[row][col + 2] + grid[row + 1][col + 2] + grid[row + 2][col + 2];

        if (!(col1 == diagonal1 && col2 == diagonal1 && col3 == diagonal1)) {
            return false;
        }

        return true;


        }
    







    int numMagicSquaresInside(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        if(n<3 | m<3) return 0;
        int ans=0;
        for(int i=0;i+2<m;i++){
            for(int j=0;j+2<n;j++){
                if(isMagicSquare(grid,i,j)){
                    ans++;
                }
            }
        }
        return ans;
    }
};