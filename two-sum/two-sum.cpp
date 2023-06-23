class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
     vector<int>v;
    map<int,int>m;
    for(int i=0;i<nums.size();i++){
             int t=target-nums[i];
             if(m[t]!=0){
                 return {i,m[t]-1};
             }
             else
             {
                 m[nums[i]]=i+1;
             }
    }
    return {};
    }
};