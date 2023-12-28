class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        ios::sync_with_stdio(false);
        cin.tie(0);
        cout.tie(0);
        int n=nums.size();
        map<int,int>mapp;
        mapp[0]=1;
        int sum=0, c=0;
        for(int i=0;i<n;i++){
            sum+=nums[i];
            int p=sum-k;
            c+=mapp[p];
            mapp[sum]+=1;
        } 
        return c;

    }
};