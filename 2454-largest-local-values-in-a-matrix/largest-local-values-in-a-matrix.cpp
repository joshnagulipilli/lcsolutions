class Solution {
public:

    vector<vector<int>> largestLocal(vector<vector<int>>& grid) {
        int n=grid.size();
        vector<vector<int>>ans(n-2,vector<int>(n-2));
        for(int i=0;i<n-2;i++)
        {
            for(int j=0;j<n-2;j++)
            {
                int p=INT_MIN;
                for(int k=i;k<i+3;k++)
                {
                    for(int k1=j;k1<j+3;k1++)
                    {
                        p=max(p,grid[k][k1]);
                    }
                }
                ans[i][j]=p;
            }
        }
        return ans;
    }
};