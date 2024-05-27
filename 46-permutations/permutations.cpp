class Solution {
public:

    void fun(vector<int>& arr,int mp[],vector<vector<int>>& ans,vector<int>ds){
        if(ds.size()==arr.size()){
            ans.push_back(ds);
            return;
        }
       
       for(int i=0;i<arr.size();i++)
       {
        if(!mp[i])
        {
            ds.push_back(arr[i]);
            mp[i]=1;
            fun(arr,mp,ans,ds);
            mp[i]=0;
            ds.pop_back();
        }
       }

    }


    vector<vector<int>> permute(vector<int>& nums) {
        int n=nums.size();
        int mp[n];
       for(int i=0;i<nums.size();i++) mp[i]=0;
        vector<int>ds;
        vector<vector<int>>ans;
        fun(nums,mp,ans,ds);
        return ans;

    }
};