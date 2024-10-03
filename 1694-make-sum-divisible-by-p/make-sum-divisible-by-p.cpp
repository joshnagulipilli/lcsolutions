class Solution {
public:
    int minSubarray(vector<int>& nums, int p) {
        int n=nums.size();
        long sum=0;
        for(auto i:nums)
        {
            sum+=i;
        }
       
        int rem=sum%p;
        if(rem==0) return 0;

        unordered_map<int,int>mp;
        mp[0]=-1;
        int len=n;
        int i=0;
        long c=0;
       
        while(i<n)
        {
            c+=nums[i];
            long long r=c%p;
            long long s=(r-rem+p)%p;
            if(mp.find(s)!=mp.end())
            {
                len=min(len,i-mp[s]);
            }
            mp[r]=i;
            i++;
        }
        return len == n ? -1 : len ;
    }
};