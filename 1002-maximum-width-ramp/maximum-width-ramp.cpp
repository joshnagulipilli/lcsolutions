class Solution {
public:
    int maxWidthRamp(vector<int>& nums) {
       int ans=0;
       int n=nums.size();
       //find suffix 
       vector<int>suffix(n,0);
       suffix[n-1]=nums[n-1];
       for(int i=n-2;i>=0;i--)
       {
        suffix[i]=max(nums[i],suffix[i+1]);
       }
       int left=0;
       int right=1;
       //compare nums array with left index and suffix array with right index
       while(right<n)
       {
        if(nums[left]<=suffix[right])
        {
            ans=max(ans,right-left);
        }
        else {
            //move untill we get nums[i] is lessar or equal to suffix[right]
            while(left<right && suffix[right] < nums[left])
            {
                left++;
            }
        }
        right++;
       }
       return ans;
    }
};