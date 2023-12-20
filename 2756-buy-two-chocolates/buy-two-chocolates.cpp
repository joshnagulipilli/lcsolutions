class Solution {
public:
    int buyChoco(vector<int>& prices, int money) {
        sort(prices.begin(),prices.end());
    int c=0;
    int m=money;
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