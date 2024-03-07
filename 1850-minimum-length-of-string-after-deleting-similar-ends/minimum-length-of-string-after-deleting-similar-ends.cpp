class Solution {
public:
    int minimumLength(string s) {
        int n=s.length();
        int left=0,right=n-1;
        char temp;
        while(left<right && s[left]==s[right])
        {
          temp = s[left];

          while(left<=right && s[left]==temp)
          {
              left++;
          }
          while(left<=right && s[right]==temp)
          {
              right--;
          }
        }
        return right-left+1;
    }
};