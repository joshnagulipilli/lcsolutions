class Solution {
public:
    int subarraySum(vector<int>& arr, int target) {
        ios::sync_with_stdio(false);
        cin.tie(0);
        cout.tie(0);
        int n=arr.size();
    int ans=0;
    for(int i=0;i<n;i++)
    {
        int sum=0;
        for(int j=i;j<n;j++)
        {
            sum+=arr[j];
            if(sum==target) ans++;
        }
    }
    return ans;
    }
};