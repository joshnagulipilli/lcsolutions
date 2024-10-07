class Solution {
public:
    int minLength(string s) {
        //  int n=s.length();
        //  int i=0;
        //  string str="";
        //  while(i<s.length())
        //  {
        //     cout<<i<<" ";
        //     if(s[i]=='A' && s[i+1]=='B'   || s[i]=='C' && s[i+1]=='D')
        //     {
                 
        //         str=s.substr(0,i);
        //         str+=s.substr(i+2);
        //         s=str;
        //         cout<<str;
        //         str="";
        //         if(i!=0 )i--;
        //     }
        //     else i++;
        //  }
        //  return s.length();
        stack<int>st;
        int i=0;
        while(i<s.length())
        {
            if(st.empty())
            {
                st.push(s[i]);
            }
            else{
                if((s[i]=='B' && st.top()=='A') || (s[i]=='D' && st.top()=='C'))
            {
                st.pop();
            }
            else st.push(s[i]);
            }
            i++;
        }
        return st.size();
    }
};