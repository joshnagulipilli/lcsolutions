class Solution {
public:
    int minPairSum(vector<int>& nums) {
        int n=nums.size();
        int maxsum=INT_MIN;
     sort(nums.begin(),nums.end());
     for(int i=0;i<n/2;i++){
         maxsum=max(maxsum,nums[i]+nums[n-i-1]);
     }
     return maxsum;
    }
};