class Solution {
public:
    string frequencySort(string s) {
        int n=s.length();
        unordered_map<char,int>mp;
        for(auto it:s){
            mp[it]++;
        }
        vector<pair<int,char>>ans;
        for(auto it:mp){
            ans.push_back({it.second,it.first});
            
        }
       
        sort(ans.begin(),ans.end(),[](auto a,auto b){
            return a.first > b.first;
        });
         for(auto it:ans){
            cout<<it.first<<" "<<it.second<<endl;
        }
        string str ="";
        for(auto it:ans){
            for(int i=0;i<it.first;i++){
                str.push_back(it.second);
            }
        }
        return str;
    }
};