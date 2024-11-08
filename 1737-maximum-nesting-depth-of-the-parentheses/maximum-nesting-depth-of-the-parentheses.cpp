class Solution {
public:
    int maxDepth(string s) {
       int n=s.length();
       int maxi=0;
       int cnt=0;
       for(int i=0;s[i];i++){
        if(s[i]=='(') 
        {
            cnt++;
            maxi=max(cnt,maxi);
        }
        else if(s[i]==')')cnt--;
       }
       return maxi; 
    }
};