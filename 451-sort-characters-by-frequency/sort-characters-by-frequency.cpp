class Solution {
public:
    string frequencySort(string s) {
        int n=s.length();
        unordered_map<char,int>mp;
        for(int i=0;s[i];i++) mp[s[i]]++;
        vector<pair<int,char>>v;
        for(auto it:mp)
        {
            v.push_back({it.second,it.first});
        }
        sort(v.begin(),v.end(),   
        [](auto a , auto b){
            return a.first>b.first;
            });
        string ans="";
        for(auto it:v)
        {
            for(int i=0;i<it.first;i++)
            {
                ans.push_back(it.second);
            }
        }
        return ans;
    }
};