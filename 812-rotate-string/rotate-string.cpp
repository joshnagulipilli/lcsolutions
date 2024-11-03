class Solution {
public:
    bool rotateString(string s, string goal) {
        int n=s.size();
        if(goal.size()!=s.size()) return false;
        while(n--)
        {
            if(s==goal) return true;
            char temp = s[0];
            for(int i=1;i<s.size();i++)
            {
                s[i-1]=s[i];
            }
            s[s.size()-1]=temp;
            
            cout<<s<<endl;
        }
        return false;
    }
};