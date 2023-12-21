class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int x1=0;
        if(nums.size()==1) return nums[0];
        for(int i=0;i<nums.size();i++) x1= x1^nums[i];
        return x1;
    }
};