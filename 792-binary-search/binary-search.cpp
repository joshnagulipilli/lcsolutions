class Solution {
public:

    int search(vector<int>& nums, int target) {
        ios::sync_with_stdio(0);
        int n=nums.size();
        int low=0,high=n-1;
        while(low<=high)
        {
            int mid=(low+high) >> 1;
            if(nums[mid]==target) return mid;
            else if(nums[mid]>target) high=mid-1;
            else low=mid+1;
        }
        return -1;
    }
};