class Solution {
public:
int maxelement(vector<int> &v,int n)
{
    int maxi=INT_MIN;
    for(int i=0;i<n;i++)
    {
        maxi=max(maxi,v[i]);
    }
    return maxi;
}

long long int fun(vector<int> &v, int hrs)
{
    long long int total=0;
    for(int i=0;i<v.size();i++)
    {
        total+=ceil((double)v[i]/(double)hrs);
    }
    return total;
}
    int minEatingSpeed(vector<int>& v, int h) {
        int n=v.size();
        int low=1,high= maxelement(v,n);
        while(low<=high)
        {
            int mid=low+(high-low)/2;
            long long int res=fun(v,mid);
            if(res<=h)
            {
                high=mid-1;
            }
            else low=mid+1;
        }
        return low;
    }
};