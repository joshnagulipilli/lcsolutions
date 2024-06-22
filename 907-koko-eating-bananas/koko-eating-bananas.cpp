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


   long long int fun(int hours,vector<int>& v)
   {
   long long int total=0;
    for(int i=0;i<v.size();i++)
    {
        total+=ceil((double)v[i]/(double)hours);
    }
    return total;
   }



    int minEatingSpeed(vector<int>& v, int h) {
       int n=v.size();
       int high=maxelement(v,v.size());
       int low=1;
       while(low<=high)
       {
        int mid=(low+high)/2;
        long long int sol=fun(mid,v);
        if(sol<=h)
        {
        
            high=mid-1;
        }
        else low=mid+1;
       }
       return low;
    }
};