class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int n = nums.size();
        int ans=1 , c=1;
        for(int i=0;i<n-1;i++){
            if(nums[i+1]>nums[i]){
                c++;
            }
            else c=1;
            ans=max(ans,c);
        }
        c=1;
        for(int i=0;i<n-1;i++){
            if(nums[i]>nums[i+1]){
                c++;
            }
            else c=1;
            ans=max(ans,c);
        }
        return ans;
    }
};