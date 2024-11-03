class Solution {
public:
    bool rotateString(string s, string goal) {
        int n=s.size();
        while(n--)
        {
            char temp = s[0];
            for(int i=1;i<s.size();i++)
            {
                s[i-1]=s[i];
            }
            s[s.size()-1]=temp;
            if(s==goal) return true;
            cout<<s<<endl;
        }
        return false;
    }
};