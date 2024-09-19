class Solution {
public:
    int oddCells(int n, int m, vector<vector<int>>& indices) {
        int ans=0;
        vector<vector<int>>v(n,vector<int>(m,0));
        for(int i=0;i<indices.size();i++)
        {
            int row = indices[i][0];
            int col = indices[i][1];
            for(int j=0;j<m;j++)
            {
                v[row][j]++;
            }
                for(int j=0;j<n;j++)
                {
                 v[j][col]++;
                }
            }
        
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                // cout<<v[i][j]<<" ";
                if(v[i][j]%2==1) 
                {
                    ans++;
                }
            }
            // cout<<endl;
        }
        return ans;
    }
};