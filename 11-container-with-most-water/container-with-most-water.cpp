class Solution {
public:
    int maxArea(vector<int>& height) {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
        int n=height.size();
        int area;
        int ans=INT_MIN;
        int m;
        int l=0 , r=n-1;
        while(l<r){
            area=min(height[l],height[r])*(r-l);
            ans=max(area,ans);
            if(height[l]<=height[r]){
                l++;
            }
            else  {
                r--;
            }
        }
        return ans;
    }
};