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
                cnt=1;
                el=v[i];
            }
            else if(el==v[i]) cnt++;
            else cnt--;
        }
        int cnt2=0;
        for(int i=0;i<n;i++){
            if(el==v[i]) cnt2++;
        }
        if(cnt2 > n/2) return el;
        return -1;
    }
};