class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0) return false;
        long long temp=x;
        long long res=0;
        while(temp>0)
        {
            res=res*10+(temp%10);
            temp/=10;
        }
        return res==x;
    }
};