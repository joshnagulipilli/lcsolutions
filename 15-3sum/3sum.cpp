class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>>ans; // to store answer without duplicates
        // set<vector<int>st;  
        sort(nums.begin(),nums.end()); // sorting the array
        // solve by using three pointers 
        for(int i=0;i<nums.size();i++){
            // when i index is greater than 0 and the element used previous same then increment i value
            if(i>0 && nums[i]==nums[i-1]) continue;
             int j=i+1; // next element of i index
             int k=nums.size()-1; // last element as k 
             while(j<k){ // always j index should be lessar than the k
                 int sum=nums[i]+nums[j]+nums[k];
                 if(sum<0) j++; // in sorted array of sum is greater than 0 then move index j to j+1;
                 else if(sum>0) k--; // if lessar k to k-1
                 else{
                     vector<int>temp={nums[i],nums[j],nums[k]};
                     ans.emplace_back(temp);
                     j++; // current elements are included so increment and dcrement k and j by one
                     k--;
                     while(j<k && nums[j]==nums[j-1]) j++;  
                     // if current included elements and next elements are same then move by 1
                     while(j<k && nums[k]==nums[k+1]) k--;

                 }
             }

        }
        return ans;

    }
};
auto init = []()
{ 
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    return 'c';
}();