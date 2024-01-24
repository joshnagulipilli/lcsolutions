class Solution {
public:
    int search(vector<int>& nums, int x) {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
        int n=nums.size();
        int low=0;
        int high=n-1;
        while(low<=high){
            int mid=low+(high-low/2);
            if(nums[mid]==x) return mid;
            if(nums[low]<=nums[mid]){
                if(nums[low]<=x && x<=nums[mid]){
                    high=mid-1;
                }
                else low=mid+1;
            }
            else{
                if(nums[mid]<=x && x<=nums[high]){
                    low=mid+1;
                }
                else high=mid-1;
            }
        }
    return -1;
    }
};