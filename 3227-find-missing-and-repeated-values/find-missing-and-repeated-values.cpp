class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int n=grid.size();
        vector<int>v(2) , ans(n*n);
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                ans.push_back(grid[i][j]);
            }
        }
        sort(ans.begin(),ans.end());
        for(int i=0;i<ans.size();i++)cout<<ans[i]<<" ";
        for(int i=1;i<ans.size();i++){
            if(ans[i]-ans[i-1]>1) v[1]=ans[i]-1;
            else if(ans[i]==ans[i-1]) v[0]=ans[i];
        }
        if(v[1]==0) v[1]=n*n;
        return v;
    }
};