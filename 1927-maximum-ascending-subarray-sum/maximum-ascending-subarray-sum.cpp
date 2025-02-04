class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
        int n=nums.size();
        int sum=nums[0];
        int maxi=0;
        for(int i=1;i<n;i++){
            if(nums[i]>nums[i-1]){
                sum+=nums[i];
                cout<<sum<<" ";
            }
            else{
                maxi=max(sum,maxi);
                sum=0;
                sum+=nums[i];
                cout<<sum<<" ";
            }
        }
        maxi=max(sum,maxi);
        return maxi;
    }
};