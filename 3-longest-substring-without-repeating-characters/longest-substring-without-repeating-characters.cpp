class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.length();
        int l=0,r=0;
        unordered_map<char,int>m;
        int p=0;
        while( r<n){
            if(m[s[r]]==0){
                p=max(p,r-l+1);
                m[s[r]]++;
                r++;
            }
            else{
                m.erase(s[l]);
                l++;
            }
        }
        return p;
    }
};