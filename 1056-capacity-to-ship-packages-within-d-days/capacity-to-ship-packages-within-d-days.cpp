class Solution {
public:

   int check(vector<int>& w,int cap)
   {
    int n=w.size();
    int days=1,load=0;
    for(int i=0;i<n;i++)
    {
        if(load+w[i]>cap)
        {
            days++;
            load=w[i];
        }
        else {
            load+=w[i];
        }
    }
    return days;
   }


    int shipWithinDays(vector<int>& w, int d) {
        int n=w.size();
        int sum=0;
        int high=accumulate(w.begin(),w.end(),sum);
        int low=*max_element(w.begin(),w.end());
        while(low<=high)
        {
            int mid=(low+high)/2;
            if(check(w,mid)<=d)
            {
                high=mid-1;
            }
            else low=mid+1;
        }
        return low;
    }
};