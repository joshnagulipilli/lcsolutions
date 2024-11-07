class Solution {
public:
    int largestCombination(vector<int>& arr) {
        int n = arr.size();
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++){
            int j = 0;
            int ele = arr[i];
            while(ele>0){
                if(ele%2){
                    mp[pow(2,j)]++;
                }
                ele=ele/2;
                j++;
            }
        }
        int maxi=INT_MIN;
        for(auto it:mp){
            maxi=max(it.second,maxi);
        }
        return maxi;
    }
};