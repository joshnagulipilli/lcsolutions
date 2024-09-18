class Solution {
public:
    string largestNumber(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end(),[&](auto a , auto b){
            string p=to_string(a);
            string q=to_string(b);
            if(p+q > q+p)
            { return true;}
            return false;
        });
        if(to_string(nums[0])=="0") return "0";
        string ans="";
        for(auto it:nums)
        {
            ans+=to_string(it);
        }
        return ans;
    }
};