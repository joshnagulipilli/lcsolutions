class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int n=nums.size();
        int sum=0,digit=0;
        for(auto it:nums)
        {
            sum+=it;
            if(it>9)
            {
                int x=it;
                while(x>0)
                {
                    digit+=(x%10);
                    x/=10;
                }

            }
            else digit+=it;
        }
        return abs(sum-digit);
    }
};