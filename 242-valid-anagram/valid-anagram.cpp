class Solution {
    private:
       int arr[26]={0};
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size()) return false;
         for(int i=0;i<s.length();i++){
             int idx = s[i]-'a';
             arr[idx]++;
         }
         for(int i=0;i<t.length();i++){
             int idx =t[i]-'a';
             arr[idx]--; 
         }

         for(int i=0;i<26;i++){
             if(arr[i]!=0) 
             return false;
         }
    return true;
    }
};
auto init=[](){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return 'c';
}();