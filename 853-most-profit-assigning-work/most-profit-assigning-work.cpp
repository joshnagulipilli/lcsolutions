class Solution {
public:
    int maxProfitAssignment(vector<int>& d, vector<int>& p, vector<int>& w) {
        //using dp
        int maxi=0;
        for(int i=0;i<d.size();i++){
            maxi=max(maxi,d[i]);
        }
        //
        vector<int>arr(maxi+1,0);
        for(int i=0;i<d.size();i++){
            arr[d[i]]=max(arr[d[i]],p[i]);
        }
        //cummulative sum
        for(int i=1;i<=maxi;i++){
            arr[i]=max(arr[i],arr[i-1]);
        }
        int ans=0;
        for(auto it:w){
            if(it > maxi){
                ans+=arr[maxi];
            }
            else {
                ans+=arr[it];
            }
        }
        return ans;
    }
};