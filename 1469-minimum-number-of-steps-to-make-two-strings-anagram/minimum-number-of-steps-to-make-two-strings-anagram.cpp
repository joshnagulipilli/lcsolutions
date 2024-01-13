class Solution {
public:
    int minSteps(string s, string t) {
        unordered_map<char,int>m1;
        int cnt=0;
        for(int i=0;i<s.size();i++){
            m1[s[i]]++;
        }
        for(int i=0;i<t.size();i++){
            if(m1[t[i]]==0)
            {
                cnt++;
            }
            else 
            m1[t[i]]--;

        }
        int count=0;
        for(auto i:m1){
            count+=i.second;
        }
     
        return cnt;
    }
};