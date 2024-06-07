class Solution {
public:
    string replaceWords(vector<string>& dictionary, string sentence) {
        unordered_set<string>st(dictionary.begin(),dictionary.end());
        int n=sentence.size();
        int i=0;
        string ans="";
        while(i<n){
            string word="";
            bool skip=false;
            while(i<n && sentence[i]!=' ')
            {
                if(skip) {i++; continue;}
                word+=sentence[i];
                i++;
                if(st.find(word)!=st.end()){
                    // ans+=word;
                    skip=true;
                }
            }
                ans+=word;
                if(i<n && sentence[i]==' '){
                    ans+=" ";
                }
                i++;
            }
            return ans;
        
    }
};