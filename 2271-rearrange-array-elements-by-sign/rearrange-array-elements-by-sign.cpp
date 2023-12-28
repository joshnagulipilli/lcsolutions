class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        ios::sync_with_stdio(false);
        cin.tie(0);
        int n=nums.size();
        vector<int>v(n);
        int p=0,q=1;
        for(int i=0;i<n;i++){
            if(nums[i]>0){
                v[p]=nums[i];
                p+=2;
            }
            else{
                v[q]=nums[i];
                q+=2;
            }
        }
        return v;
    }
};