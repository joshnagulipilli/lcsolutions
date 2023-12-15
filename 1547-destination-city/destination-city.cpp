class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        map<string,int>m1;
        for(int i=0;i<paths.size();i++){
            m1[paths[i][0]]++;
            m1[paths[i][1]]++;
        }
    vector<string>temp;
        for(auto i:m1){
            if(i.second==1){
                temp.push_back(i.first);
            }
        }
        string ans="";
        for(int i=0;i<paths.size();i++){
            if(temp[0]==paths[i][1]) {
                ans+=temp[0];
                break;
            }
            if(temp[1]==paths[i][1]){
                ans+=temp[1];
                break;
            }
        }
        return ans;
        
    }
};