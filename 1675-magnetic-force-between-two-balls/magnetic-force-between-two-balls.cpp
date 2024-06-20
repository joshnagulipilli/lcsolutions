class Solution {
public:
    bool fun(int mid,vector<int>& arr,int m)
    {
        int c=1,ind=0;
        for(int i=1;i<arr.size();i++)
        {
            if(arr[i]-arr[ind]>=mid)
            {
                ind=i;
                c++;
            }
        }
        return c>=m;
    }
    int maxDistance(vector<int>& position, int m) {
        int n=position.size();
        sort(position.begin(),position.end());
        int l=0,r=*max_element(position.begin(),position.end());
        int sol=-1;
        while(l<=r)
        {
            int mid=l+(r-l)/2;
            if(fun(mid,position,m))
            {
                sol=mid;
                l=mid+1;
            }
            else 
            {
                r=mid-1;
            }
        }
        return sol;
    }
};