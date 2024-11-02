class Solution {
public:
    bool isCircularSentence(string sentence) {
        stack<char>st;
        int n=sentence.size();
        if(sentence[0]!=sentence[n-1]) return false;
        int c=0;
        for(int i=0;sentence[i];i++)
        {
            if(sentence[i]!=' ' || st.empty())
            {
                if(c==1 && st.top()!=sentence[i]) 
                {
                    return false;
                }
                st.push(sentence[i]);
                c=0;
            }
            if(sentence[i]==' ')
            {
                c=1;
            }

        }
         
        return true;
    }
};