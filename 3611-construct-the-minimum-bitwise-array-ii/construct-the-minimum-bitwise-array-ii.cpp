class Solution {
public:
    vector<int> minBitwiseArray(vector<int>& nums) {
        int n=nums.size();
        vector<int>ans(n,-1);
        for(int i=0;i<n;i++)
        {
            int num=nums[i];
            if(num%2==0) continue;
            int el=num;
            int cnt=0;
            //move towards left until set bits
            while((num & 1)==1)
            {
                cnt++;
                num = num>>1; // shifting elements to left to find next bit is 1 or not
            }
            int p = el - (1 << (cnt - 1));
            ans[i] = p;
        }
        return ans;
    }
};