class Solution {
public:
    int longestPalindrome(string s) {
            unordered_map<char,int>mp;
            int c=0;
            int ans=0;
            for(int i=0;s[i];i++){
                mp[s[i]]++;
            }
            // if(mp.size()==1) return s.size();
            int odd=0;
            for(auto i:mp){
                if(i.second%2==1){
                    odd++;
                    ans+=(i.second-1);
                }
                else {
                    ans+=i.second;
                }
            }
            if(odd>=1) return ans+1;
            
            return ans;
        }
};