class Solution {
public:
    int maxProfit(vector<int>& prices) {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
        int mini=prices[0];
        int maxi=INT_MIN;
        int n=prices.size();
        for(int i=0;i<n;i++)
        {
            mini=min(mini,prices[i]);
            maxi=max(maxi,prices[i]-mini);
        }
        return maxi;
    }
};

