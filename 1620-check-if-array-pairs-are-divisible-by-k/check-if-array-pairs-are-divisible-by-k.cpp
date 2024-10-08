class Solution {
public:
    bool canArrange(vector<int>& arr, int k) {
        int n=arr.size();
        vector<int>freq(k,0);
        for(int i=0;i<n;i++)
        {
            arr[i]=(arr[i]%k);
            if(arr[i]<0)
            {
                arr[i]+=k;
            }
            freq[arr[i]]++;
        }
        if(freq[0]%2!=0) 
        {
            return false;
        }
        for(int i=1;i<=k/2;i++)
        {
            if(freq[i]!=freq[k-i])
            {
               return false;
            }
        }
        return true;
    }
};