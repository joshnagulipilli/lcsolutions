class Solution {
public:
    int maxSubArray(vector<int>& nums) {
       int n=nums.size();
       int maxi=INT_MIN;
       int sum=0;
       for(int i=0;i<n;i++){
           sum=sum+nums[i];
            maxi=max(sum,maxi);
           if(sum<0){
               sum=0;
           }
          
           
       }
          return maxi; 
    }
};
auto init = []()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return 'c';
}();