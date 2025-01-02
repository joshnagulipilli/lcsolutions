class Solution {
public:
    vector<int> vowelStrings(vector<string>& words, vector<vector<int>>& queries) {
        int n=words.size();
        vector<int>ans(n);
        unordered_set<char> vowels{'a','e' ,'i' , 'o' ,'u'};
        int c=0;
        for(int i=0;i<n;i++){
            string currWord = words[i];
            if(vowels.count(currWord[0]) && vowels.count(currWord[currWord.size()-1])){
                c++;
            }
            ans[i]=c;
        }
        vector<int>res;
        for(int i=0;i<queries.size();i++){
            int x;
            if(queries[i][0]!=0)
              x = ans[queries[i][1]] - ans[queries[i][0] - 1];
            else
               x = ans[queries[i][1]];
            res.push_back(x);
        }
        for(auto it:ans){
            cout<<it<<" ";
        }
        return res;
    }
};