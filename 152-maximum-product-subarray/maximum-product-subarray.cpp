class Solution {
public:
    int maxProduct(vector<int>& nums) {
         int maxi=INT_MIN;
         
         int pref=1,suff=1;
         for(int i=0;i<nums.size();i++){
              if(pref==0) pref=1;
                   if(suff==0) suff=1;

                   pref=pref*nums[i];
                   suff=suff*nums[nums.size()-i-1];

                   maxi=max(maxi,max(pref,suff));
         }
            return maxi;
         }
};
auto init = []()
{ 
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    return 'c';
}();
