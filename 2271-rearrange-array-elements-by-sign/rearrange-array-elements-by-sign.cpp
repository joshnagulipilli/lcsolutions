class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        ios_base::sync_with_stdio(false);
        cin.tie(0);
        int p=0,q=1;
        vector<int>ans(nums.size());
        for(int i=0;i<nums.size();i++)
        {
           if(nums[i]>0) { ans[p]=nums[i]; p+=2; }
           else { ans[q]=nums[i]; q+=2; }
        }
        return ans;
    }
};