class Solution {
public:
    bool rotateString(string s, string goal) {
       if(s.length()!=goal.length()) return false;
       int n=s.size();
       while(n--){
        if(s==goal) return true;
         char ch = s[0];
         for(int j=1;j<s.size();j++){
                 s[j-1]=s[j];
         }
         s[s.size()-1]=ch;
       }
       return false;
    }
};