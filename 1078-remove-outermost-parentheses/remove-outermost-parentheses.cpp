class Solution {
public:
    string removeOuterParentheses(string s) {
        stack<char>st;
        string x="";
        for(int i=0;s[i];i++){
            if(s[i]=='(' ){
                if(st.size()>0){
                    x+='(';
                }
                st.push('(');
            }
            else if(s[i]==')'){
                if(st.size()>1){
                    x+=')';
                }
                st.pop();
            }
        }
        return x;
    }
};