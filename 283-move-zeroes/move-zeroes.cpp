class Solution {
public:
    void moveZeroes(vector<int>& a) {
        ios::sync_with_stdio(false);
        cin.tie(0);
        int ind=-1;
        for(int i=0;i<a.size();i++)
        {
            if(a[i]==0) {
                ind=i;
                break;
            }
        }
        if(ind==-1) return  ;
        for(int i=ind+1;i<a.size();i++)
        {
            if(a[i]!=0)
            {
                swap(a[i],a[ind]);
                ind++;
            }
        }
    }
};