class Solution {
public:
    int countPalindromicSubsequence(string s) {
        int n=s.length();
        unordered_map<char , pair<int,int>>mp;
        for(int i=0;i<n;i++){
            if(!mp.count(s[i])){
                mp[s[i]].first = i;
                mp[s[i]].second = i;
            }
            else{
                mp[s[i]].second = i;
            }
        }
        int c=0;
        for(auto [key , value] : mp){
            if(value.first == value.second) continue;
            c+= unordered_set<char> (s.begin() + value.first + 1 , s.begin() + value.second).size();
        }
        return c;
    }
};