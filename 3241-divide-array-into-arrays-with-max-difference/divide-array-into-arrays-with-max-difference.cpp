class Solution {
public:
    vector<vector<int>> divideArray(vector<int>& nums, int k) {
        ios::sync_with_stdio(false);
        cin.tie(0);
        int n=nums.size();
        sort(nums.begin(),nums.end());
        vector<vector<int>>ans;
        for(int i=0;i<n;i+=3){
           if(nums[i+2]-nums[i]>k) return {};
           ans.push_back({nums[i],nums[i+1],nums[i+2]});
           
        }
        return ans;
    }
};