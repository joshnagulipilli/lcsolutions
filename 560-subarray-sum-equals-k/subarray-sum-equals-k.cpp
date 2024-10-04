class Solution {
public:
    int subarraySum(vector<int>& arr, int target) {
        ios::sync_with_stdio(false);
        cin.tie(0);
        cout.tie(0);
        int n=arr.size();
        unordered_map<int,int>mp;
        mp[0]=1;
        int sum=0,c=0;
        for(int i=0;i<n;i++)
        {
            sum+=arr[i];
            int t=sum-target;
            c+=mp[t];
            mp[sum]+=1;
        }
        return c;
    }
};