class Solution {
public:
    int majorityElement(vector<int>& v) {
        ios::sync_with_stdio(false);
        cin.tie(0);
        int n=v.size();
        int cnt=0;
        int el;
        for(int i=0;i<n;i++){
            if(cnt==0){             
                el=v[i];
                cnt++;
            } 
            else if(el==v[i]) cnt++;
            else cnt--;
        }
        return el;
    }
};