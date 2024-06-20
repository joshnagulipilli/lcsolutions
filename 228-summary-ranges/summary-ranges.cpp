class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string>ans={};
        if(nums.size()==1) return {to_string(nums[0])};
        if(nums.size()==0) return {};
        int i=0,j;
        string temp;
        while( i<nums.size())
        {
            j=i+1;
            while(j<nums.size() && nums[j-1]+1 == nums[j]) j++;
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