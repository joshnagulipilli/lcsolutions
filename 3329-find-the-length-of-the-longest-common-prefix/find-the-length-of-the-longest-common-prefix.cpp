class Solution {
public:
    int longestCommonPrefix(vector<int>& arr1, vector<int>& arr2) {
        int ans=0;
        unordered_map<string,int>prefixMap;
        for(int num:arr1)
        {
            string p=to_string(num);
            string str="";
            for(auto ch:p)
            {
                str+=ch;
                prefixMap[str]++;
            }
        }

        for(int num : arr2)
        {
            string s = to_string(num);
            string st = "";
            for(auto ch : s)
            {
                st+=ch;
                if(prefixMap.find(st)!=prefixMap.end())
                {
                    int n = st.length();
                    ans=max(ans,n);
                }
            }
        }
        return ans;
    }
};