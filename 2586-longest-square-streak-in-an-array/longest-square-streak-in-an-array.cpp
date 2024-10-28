class Solution {
public:
    int longestSquareStreak(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int>present;
        unordered_map<int,bool>vis;
        sort(nums.begin(),nums.end());
        for(auto it:nums)
        {
            present[it]++;
            vis[it]=false;
        }
        int ans=-1;
        for(auto it:nums)
        {
            long long curr=it; //multiplying 10^5
            int len=0;
            if(vis[curr]==false){
            while(present.find(curr)!=present.end()){
                curr=curr*curr;
                len++;
                vis[curr]=true;
                if(curr >=1e5) break;
            }
       }
       if(len>=2)
       {
        ans=max(ans,len);
       }

        }
        return ans;
    }
};