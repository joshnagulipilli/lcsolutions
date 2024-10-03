class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        int n=nums.size();
        int sum=0;
        int c=0;
        unordered_map<int,int>presum;
        presum[0]=1;
        int i=0;
        while(i<n){
            sum+=nums[i];
            int rem=((sum%k)+k)%k;
            // if(rem<0) rem+=k;
            if(presum[rem]!=0) c+=presum[rem];
            presum[rem]++;
            i++;
        }
        return c;
    }
};