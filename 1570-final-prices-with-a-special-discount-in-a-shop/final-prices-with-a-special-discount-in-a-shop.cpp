class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        int n=prices.size();
        vector<int>ans(n);
        for(int i=0;i<n-1;i++){
            int flag=1;
            for(int j=i+1;j<n;j++){
                if(prices[j]<=prices[i]){
                    ans[i]=prices[i]-prices[j];
                    flag=0;
                    break;
                }
            }
            if(flag==1){
                ans[i]=prices[i];
            }
        }
        ans[n-1]=prices[n-1];
        return ans;
    }
};