class Solution {
public:

    int fun1(vector<int>& nums,int low,int high,int x)
    {
        int ans=nums.size() ;
        while(low<=high)
        {
            int mid=(low+high)/2;
            if(nums[mid]>=x)
            {
                high=mid-1;
                ans=mid;
            }
            else
            {
                low=mid+1;
            }
        }
        return ans;
    }

    int fun(vector<int>& nums,int low,int high,int x)
    {
        int ans=nums.size();
        while(low<=high)
        {
            int mid=(low+high)/2;
            if(nums[mid]>x)
            {
                ans=mid;
                high=mid-1;
            }
            else    low=mid+1;
        }
        return ans;
    }


    vector<int> searchRange(vector<int>& nums, int k) {
       int n=nums.size();
       int lb=fun1(nums,0,n-1,k);
       if(lb==n || nums[lb]!=k) return {-1,-1};
       return {lb,fun(nums,0,n-1,k)-1};

    }
};