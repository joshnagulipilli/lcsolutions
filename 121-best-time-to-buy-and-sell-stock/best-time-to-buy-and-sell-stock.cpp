class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int m=prices[0],ans=0;
        for(auto i:prices){
            if(m>i) m=i;
            ans=max(ans,abs(m-i));
        }
        return ans;
    }
};