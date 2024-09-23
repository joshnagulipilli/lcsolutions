class Solution {
public:
unordered_map<int,int>dp;
 unordered_map<string,int>mp;
    int fun(string& s,int ind)
    {
        if(ind>=s.size())
        {
            return 0;
        }
        if(dp.find(ind)!=dp.end())
        {
            return dp[ind];
        }
        int ans=INT_MAX;
        string str="";
        for(int i=ind;i<s.size();i++)
        {
            str+=s[i];
            if(mp[str]!=0)
            {
                ans=min(ans,fun(s,i+1));
            }
        }
        ans=min(ans,1+fun(s,ind+1));
        dp[ind]=ans;
        return dp[ind];
    }

    int minExtraChar(string s, vector<string>& dic) {
        for(auto& i:dic)
        {
            mp[i]++;
        }
        return fun(s,0);
    }
};