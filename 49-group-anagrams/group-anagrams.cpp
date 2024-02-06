class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        ios::sync_with_stdio(false);
        cin.tie(0);
         vector<vector<string>>ans;
         unordered_map<string,vector<string>>mpp;
         for(const string& s:strs){
             string p = s;
             ranges::sort(p);
             mpp[p].push_back(s);
         }
         for(auto& [_,it]:mpp)
         {
             ans.push_back(it);
         }
         return ans;
    }
};