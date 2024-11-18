class Solution {
public:
    bool checkValidString(string s) {
        int len=s.size()-1;
        int x=0,y=0;
        for(int i=0; i<=len ;i++){
            if(s[i]=='*' || s[i]=='(') x++;
            else x--;
            if(s[len-i]=='*' || s[len-i]==')') y++;
            else y--;
            if(x < 0 || y < 0) return false;
        }
        return true;
    }
};