class Solution {
public:
    long long coloredCells(int n) {
        long long ans=1;
        int p=4;
        for(int i=2;i<=n;i++){
            ans+=p;
            p+=4;
        }
        return ans;
    }
};