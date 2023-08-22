class Solution {
public:
    string convertToTitle(int columnNumber) {
        int n = columnNumber;
        string s="";
        while(n>0){
          char p = 'A' + (n-1) % 26;
          s=p + s;
          n=(n-1)/26;
        }
        return s;
    }
};