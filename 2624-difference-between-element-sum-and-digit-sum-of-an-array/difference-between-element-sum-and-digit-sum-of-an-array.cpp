class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int sum=0,digit=0;
        for(auto it:nums)
        {
            sum+=it;
            if(it>9)
            {
                while(it>0)
                {
                    digit+=(it%10);
                    it/=10;
                }
            }
            else digit+=it;
        }
        return abs(sum-digit);
    }
};