class Solution {
public:
    int maxArea(vector<int>& height) {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
        int n=height.size();
        int  maxi=INT_MIN;
        int area;
        int left=0;int right=n-1;
        while(left<right){
            area=min(height[left],height[right]) * (right-left);
            maxi=max(area,maxi);
            if(height[left]<height[right]) left++;
            else right--;
        }
        return maxi;

    }
};