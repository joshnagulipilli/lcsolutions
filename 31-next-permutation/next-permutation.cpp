class Solution {
public:
    void nextPermutation(vector<int>& a) {
        std::ios_base::sync_with_stdio(false);
        cin.tie(0);
        int n=a.size();
        int ind=-1;
        for(int i=n-2;i>=0;i--){
            if(a[i]<a[i+1]){
                ind=i;
                break;
            }
        }
        if(ind==-1){
            reverse(a.begin(),a.end());
            
        }
        else{
        for(int i=n-1;i>=0;i--){
            if(a[i]>a[ind]){
                swap(a[i],a[ind]);
                break;
            }
        }
        reverse(a.begin()+ind+1,a.end());
        }
    }
};