class Solution {
public:
    vector<int> maximumBeauty(vector<vector<int>>& items, vector<int>& queries) {
        sort(items.begin(),items.end());
        // for(int i=0;i<items.size();i++)
        // {
        //     cout<<items[i][0]<<" "<<items[i][1]<<endl;
        // }
        int maxi=items[0][1];
        for(auto &it:items){
            maxi =  max(maxi, it[1]);
            it[1] = maxi;
        }
        vector<int>ans;
        int n = items.size();
        for(int key : queries){
            int low = 0;
            int high = n - 1;
            int c=0;
            while(low<=high){
                int mid = (low + high)/2;
                if(items[mid][0] <= key){
                    c = mid+1; //remember the index
                    low=mid+1;
                }
                else high=mid-1;
            }
            if(c==0){
                ans.push_back(0);
            }
            else{
                ans.push_back(items[c-1][1]); // maximum 
            }
        }
        return ans;
    }
};