class Solution {
public:

    bool check(int i, int j ,int n,int m){
        if(i>=0 && i<n && j>=0 && j<m) return 1;
    return 0;
    }
    vector<vector<int>> imageSmoother(vector<vector<int>>& img) {
        ios::sync_with_stdio(false);
        cin.tie(0);
        int n=img.size();
        int m=img[0].size();
        vector<vector<int>>ans(n,vector<int>(m));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                int c=1;
                int s=img[i][j];
                if(check(i+1,j,n,m)){
                    s+=img[i+1][j] ; c++;
                }

                if(check(i-1,j,n,m)){
                    s+=img[i-1][j] ; c++;
                }
                
                if(check(i,j+1,n,m)){
                    s+=img[i][j+1] ; c++;
                }
                
                if(check(i,j-1,n,m)){
                    s+=img[i][j-1] ; c++;
                }
                
                if(check(i-1,j-1,n,m)){
                    s+=img[i-1][j-1] ; c++;
                }
                
                if(check(i+1,j+1,n,m)){
                    s+=img[i+1][j+1] ; c++;
                }
                 if(check(i-1,j+1,n,m)){
                    s+=img[i-1][j+1] ; c++;
                }
                
                if(check(i+1,j-1,n,m)){
                    s+=img[i+1][j-1] ; c++;
                }
                ans[i][j]=s/c;
            }
        }
     return ans;
    }
};