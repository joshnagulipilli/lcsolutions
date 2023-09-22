class Solution {
public:
    bool isSubsequence(string s, string t) {
        int ptr=0;
        for(int i=0;i<t.length();i++){
            if(s[ptr]==t[i]) {
                ptr++;
            }
        }
        if(ptr==s.length()) return 1;
        return 0;
    }
};