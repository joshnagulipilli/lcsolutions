class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        vector<string>ans;
        int n=words.size();
        for(char ch='a';ch<='z';ch++){
            int mini=INT_MAX;

            for(auto i:words){
                int c=0;
                for(auto j:i){
                    if(j==ch){
                        c++;
                    }
                }
                mini=min(mini,c);
            }
            for(int i=0;i<mini;i++){
                ans.push_back(string(1,ch));
            }
        }
        return ans;
    }
};