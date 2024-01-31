class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& v) {
       stack<int>st;
       vector<int>ans(v.size(),0);
       for(int i=0;i<v.size();i++){
           while(!st.empty() && v[i]>v[st.top()])
           {
               ans[st.top()]=i-st.top();
               st.pop();
           }
           st.push(i);
       }
       return ans;
    }
};