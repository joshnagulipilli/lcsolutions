class Solution {
public:
    int oddCells(int n, int m, vector<vector<int>>& indices) {
        int ans=0;
        vector<vector<int>>v(n,vector<int>(m,0));
        for(int i=0;i<indices.size();i++)
        {
            int a = indices[i][0];
            // int b=indices[i][1];
            for(int j=0;j<n;j++)
            {
                for(int k=0;k<m;k++)
                {
                    if(j==a) v[j][k]++;
                }
            }
        }
        for(int i=0;i<indices.size();i++)
        {
            // int a = indices[i][0];
            int b=indices[i][1];
            for(int j=0;j<n;j++)
            {
                for(int k=0;k<m;k++)
                {
                    if(k==b) v[j][k]++;
                }
            }
        }

        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cout<<v[i][j]<<" ";
                if(v[i][j]%2==1) 
                {

                    ans++;
                }
            }
            cout<<endl;
        }
        return ans;
    }
};