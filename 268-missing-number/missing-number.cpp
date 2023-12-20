class Solution {
public:
    int missingNumber(vector<int>& nums) {
        ios::sync_with_stdio(false);
        cin.tie(0);
        sort(nums.begin(),nums.end());
        int i;
        for(i=0;i<nums.size();i++){
            if(nums[i]==i) continue;
            else return i;
        }
        return i;
    }
};