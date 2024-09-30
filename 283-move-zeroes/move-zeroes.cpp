class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        ios::sync_with_stdio(false);
        cin.tie(0);
        int c=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==0)
            {
                c++;
            }
            else 
            {
                swap(nums[i],nums[i-c]);
            }
        }
    }
};