class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>mapp;
        for(int i=0;i<nums.size();i++){
            int t=target-nums[i];
            if(mapp.find(t)!=mapp.end()){
                return {mapp[t],i};
            }
            else mapp[nums[i]]=i;
        } 
        return {}; 
    }
};