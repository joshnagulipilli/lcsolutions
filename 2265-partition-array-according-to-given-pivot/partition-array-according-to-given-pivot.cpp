class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int>v1,v2,v3;
        for(int i=0;i<nums.size();i++){
            if(nums[i]<pivot) v1.push_back(nums[i]);
            else if(nums[i]==pivot) v2.push_back(nums[i]);
            else if(nums[i]>pivot) v3.push_back(nums[i]);
        }
    
        int it=0;
        if(v1.size()!=0) {
            int p=0;
          while(p<v1.size()){
             nums[it]=v1[p];
             p++;it++;
          }
        }
        if(v2.size()!=0){
           int q=0;
          while(q<v2.size()){
             nums[it]=v2[q];
             q++;it++;
          }
        }
        if(v3.size()!=0){
          int pt=0;
          while(pt<v3.size()){
             nums[it]=v3[pt];
             pt++;it++;
          }
        }
        return nums;
    }
};