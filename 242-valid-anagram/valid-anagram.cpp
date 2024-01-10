class Solution {
    private:
       int arr[26]={0};
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size()) return false;
       map<int,int>m1,m2;
       for(int i=0;i<s.size();i++)
       {
           m1[s[i]]++;
       }
       for(int i=0;i<t.size();i++){
           m2[t[i]]++;
       }
       return m1==m2;
    }
};
auto init=[](){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return 'c';
}();