class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int n=grid.size();
        vector<int>ans(2),v(n*n);
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                v.push_back(grid[i][j]);

            }
        }
        sort(v.begin(),v.end());
        //to find repeating character
        for(int i=1;i<v.size();i++)
        {
            if(v[i]==v[i-1]) ans[0]=v[i];
            if(v[i]-v[i-1] > 1) ans[1]=v[i]-1;
        }
        //to find missing number
        if(ans[1]==0) {
            ans[1]=n*n;
        }
       return ans;
        
         
    }
};