class Solution {
public:
    vector<int> diffWaysToCompute(string s) {
        vector<int>res;
        int n=s.size();
        for(int i=0;i<n;i++)
        {
            if(s[i]=='+' || s[i]=='-' || s[i]=='*')
            {
                vector<int>left = diffWaysToCompute(s.substr(0,i));
                vector<int>right = diffWaysToCompute(s.substr(i+1));
                for(int a : left)
                {
                    for(int b : right)
                    {
                        if(s[i]=='+') res.push_back(a+b);
                        else if(s[i]=='-') res.push_back(a-b);
                        else res.push_back(a*b);
                    }
                }
            }
        }
        if(res.empty()) res.push_back(stoi(s));
        return res;
    }
};