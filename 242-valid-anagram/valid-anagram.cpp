class Solution {
public:
    bool isAnagram(string s, string t) {
         int n=s.length();
         int m=t.length();
         map<char,int>m1,m2;
         for(int i=0;i<n;i++){
             m1[s[i]]++;
         }
         for(int i=0;i<m;i++){
              m2[t[i]]++;
         }
         if(m1==m2) return true;
         return false;

    }
};
auto init=[](){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return 'c';
}();