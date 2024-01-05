class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        int n=nums.size();
        int t=0;
        for(int i=0;i<n;i++){
            if(lower_bound(nums.begin(),nums.begin()+t,nums[i])==nums.begin()+t){
                nums[t++]=nums[i];
            }
            else{
                *(lower_bound(nums.begin(),nums.begin()+t,nums[i]))=nums[i];
            }
        }
        return t;
    }
};