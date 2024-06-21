class Solution {
public:


     int fun2(vector<int>& nums,int low,int high,int x)
    {
        int last=-1;
        while(low<=high)
        {
            int mid=(low+high)/2;
            if(nums[mid]==x)
            {
                last=mid;
                low=mid+1;
            }
            else if(nums[mid]<x)
            {
                low=mid+1;
            }
            else high=mid-1;
        }
        return last;
    }


    int fun1(vector<int>& nums,int low,int high,int x)
    {
        int first=-1;
        while(low<=high)
        {
            int mid=(low+high)/2;
            if(nums[mid]==x)
            {
                first=mid;
                high=mid-1;
            }
            else if(nums[mid]<x)
            {
                low=mid+1;
            }
            else high=mid-1;
        }
        return first;
    }


    vector<int> searchRange(vector<int>& nums, int k) {
       int n=nums.size();
       int first=fun1(nums,0,n-1,k);
       if(first==-1) return {-1,-1};
       int last=fun2(nums,0,n-1,k);
       return {first,last};

    }
};