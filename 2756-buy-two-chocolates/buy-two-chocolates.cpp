class Solution {
public:
    int buyChoco(vector<int>& prices, int money) {
        ios::sync_with_stdio(false);
        cin.tie(0);
        sort(prices.begin(),prices.end());
    int c=0 , m=money;
        for(int i=0;i<prices.size();i++){
            if(c==2) break;
            if(prices[i]<=money){
                money-=prices[i];
                c++;
            }
          }
        if(c<2) return m;
        return money;
    }
};