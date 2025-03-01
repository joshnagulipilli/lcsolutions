class Solution {
public:
    vector<int> applyOperations(vector<int>& nums) {
        for(int i=1;i<nums.size();i++){
            if(nums[i]==nums[i-1]) {
                nums[i-1]=(2*nums[i-1]);
                nums[i]=0;
            }
        }
        int i=0,j=0;
        for(int it=0;it<nums.size();it++){
            if(nums[it]==0){
                i=it;
                break;
            }
        }
        j=i+1;
        while(j<nums.size()){
          if(nums[j]!=0 && nums[i]==0){
            swap(nums[i],nums[j]);
            i++;j++;
          }
          else{
            j++;
          }
        }
        return nums;
    }
};