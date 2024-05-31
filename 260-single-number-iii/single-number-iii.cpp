class Solution {
public:

    void brute(vector<int>& nums,vector<int>& ans){
        unordered_map<int,int>mp;
        for(auto i:nums){
            mp[i]++;
        }
        for(auto i:mp){
            if(i.second==1)
            {
                ans.push_back(i.first);
            }
            
                
        }
    }

    vector<int> singleNumber(vector<int>& nums) {
        vector<int>ans;
        brute(nums,ans);
        return ans;
    }
};