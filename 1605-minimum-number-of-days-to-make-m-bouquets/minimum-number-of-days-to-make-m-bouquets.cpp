class Solution {
public:

  bool isposs(vector<int>& v,int mid,int m,int k)
    {
        int n=v.size();
        int c=0,ans=0;
        for(int i=0;i<n;i++)
        {
            if(v[i]<=mid) c++;
            else {
    
                ans+=(c/k);
                c=0;
            }
        }
        ans+=(c/k);
        return ans>=m;
    }


    int minDays(vector<int>& bloomDay, int m, int k) {
       int n=bloomDay.size();
       int high=*max_element(bloomDay.begin(),bloomDay.end());
       int low=*min_element(bloomDay.begin(),bloomDay.end());
       int ans=high;
       long long val=m*1ll * k* 1ll;
       if(n < val) return -1;
       while(low<=high)
       {
        int mid=(low+high)/2;
        if(isposs(bloomDay,mid,m,k))
        {
            ans=mid;
            high=mid-1;
        }
        else low=mid+1;
       }
        return ans;
    }  
};