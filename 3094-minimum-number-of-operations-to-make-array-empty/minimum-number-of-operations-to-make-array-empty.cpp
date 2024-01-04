class Solution {
public:
    int minOperations(vector<int>& nums) {
        unordered_map<int,int>m;
        for(auto i:nums){
            m[i]++;
        }
        int cnt=0;
        for(auto i:m){
            if(i.second==1) return -1;
            else {
                cnt+=i.second/3;
                if(i.second%3!=0) cnt+=1;
            }
                
        }
        return cnt;
    }
};