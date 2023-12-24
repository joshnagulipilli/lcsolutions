class Solution {
public:
    int minOperations(string s) {
        int n=s.length();
        char c='0';
        int i=0;
        int res=0,ans=0;
        while(i<n){
            if(s[i]!=c){
                res++;
            }
            if(c=='0') c='1';
            else c='0';
            i++;
        }
        int j=0;
        c='1';
        while(j<n){
            if(s[j]!=c){
                ans++;
            }
            if(c=='0') c='1';
            else c='0';
            j++;
        }
        cout<<res<<" "<<ans;
         return min(res,ans);
    }
};