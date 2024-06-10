class Solution {
public:
    int heightChecker(vector<int>& heights) {
       int c=0;
       vector<int>v;
       for(auto i:heights){
        v.push_back(i);
       }
       sort(v.begin(),v.end());
       for(int i=0;i<heights.size();i++){
        if(heights[i]!=v[i])
        { c++;}
       }
        return c;
    }
};