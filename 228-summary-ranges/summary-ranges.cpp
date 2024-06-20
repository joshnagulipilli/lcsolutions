class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        int n=nums.size();
        vector<string>ans;
        if(n==1) return {to_string(nums[0])};
        if(n==0) return {};
        int i=0,j;
        string temp;
        while( i<n)
        {
            j=i+1;
            while(j<n && nums[j-1]+1 == nums[j]) j++;
            if(j-i > 1) {
                temp=(to_string(nums[i])+"->"+to_string(nums[j-1]));
                ans.push_back(temp);
            }
            else 
            {
               temp=to_string(nums[i]);
               ans.push_back(temp);
            }
            i=j;
        }
        return ans;
    }
};