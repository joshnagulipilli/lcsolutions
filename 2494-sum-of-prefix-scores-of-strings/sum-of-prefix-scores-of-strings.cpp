struct Node{
    unordered_map<char,pair<int,Node*>>mp;
    bool is_end = false;
};

class Trie{
public:
    Node *root;
    Trie(){
        root=new Node();
    }
public:
    void insert(string s){
        Node *curr = root;
        for(int i=0;i<s.size();i++)
        {
            if(curr->mp.find(s[i])==curr->mp.end())
            {
                curr->mp[s[i]].second = new Node();
            }
            curr->mp[s[i]].first++;
            curr=curr->mp[s[i]].second;
        }
        curr->is_end = true;
        return ;
    }
    
    int fun(string s)
    {
        Node *curr= root;
        int cnt=0;
        for(int i=0;i<s.size();i++)
        {
            if(curr->mp.find(s[i])==curr->mp.end())
            {
                break;
            }
            cnt+=curr->mp[s[i]].first;
            curr=curr->mp[s[i]].second;
        }
        return cnt;
    }

};

class Solution {
public:
    vector<int> sumPrefixScores(vector<string>& words) {
        Trie t;
        for(auto& word:words)
        {
            t.insert(word);
        }
        vector<int>ans;
        for(int i=0;i<words.size();i++)
        {
            int temp = t.fun(words[i]);
            ans.push_back(temp);
        }
        return ans;
    }
};