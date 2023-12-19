class Solution {
public:
    int majorityElement(vector<int>& nums) {
        ios::sync_with_stdio(false);
        cin.tie(0);
        unordered_map<int,int>m;
        for(auto i:nums)  m[i]++;
        for(auto i:m){
            if(i.second > (nums.size()/2))
            {
                return i.first;
            }
        }
        return -1;
    }
};