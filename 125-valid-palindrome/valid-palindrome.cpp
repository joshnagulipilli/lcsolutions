class Solution {
public:
    bool isPalindrome(string s) {
        int n=s.length();
        string p="";
        for(int i=0;s[i];i++)
        {
            if((s[i]>='A' && s[i]<='Z' )  || (s[i]>='a'&& s[i]<='z') || (s[i]>='0' && s[i]<='9'))
            {
                if (s[i]>='A' && s[i]<='Z')
                 {
                    s[i]=tolower(s[i]);
                 }
                 p+=s[i];
            }
            
            
        }

        int i=0,j=p.size()-1;
        cout<<p<<endl;
        while(i<j)
        {
            if(p[i]!=p[j])  return 0;

            i++;
            j--;
        }
        return 1;
    }
};