class Solution {
public:
    int countSubstrings(string s) {
        int n=s.length();
        int right,left;
        int c=0;
        if(n==1) return 1;
        for(int i=0;i<n;i++)
        {
            int even=palindromecount(s ,i,i+1);
            int odd =palindromecount(s,i,i);
            c+=even + odd;
        }
        return c;
    }
    int palindromecount(string s , int left , int right)
    {
        int count=0;
        while(left>=0 && right<s.length() && s[left]==s[right])
        {
            --left;
            ++right;
            ++count;
        }
        return count;
    }
};