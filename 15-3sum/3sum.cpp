class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
       int n=nums.size();
       vector<vector<int>>ans;
       unordered_map<int,int>mp;
       sort(nums.begin(),nums.end());
       if(n< 3) return {};
       if(nums[0] > 0) return {};
       for(int i=0;i<n;i++)
       {
        mp[nums[i]]=i;
       }
       for(int i=0;i<n-2;i++)
       {
        if(nums[i]>0) break;
        for(int j=i+1;j<n-1;j++)
        {
            int rem= -1 * (nums[i]+nums[j]);
            if(mp.count(rem) && mp.find(rem)->second >j)
            {  
                ans.push_back({nums[i],nums[j],rem});
            }
            j=mp.find(nums[j])->second; // inorder to remove duplicates;

        }
        i=mp.find(nums[i])->second;
       }
       return ans;
    }
};
auto init = []()
{ 
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    return 'c';
}();