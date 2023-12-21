class Solution {
public:
    int singleNumber(vector<int>& nums) {
        ios::sync_with_stdio(false);
        cin.tie(0);
        int x1=0;
        if(nums.size()==1) return nums[0];
        for(int i=0;i<nums.size();i++){
            x1= x1^nums[i];
        }
        return x1;
    }
};