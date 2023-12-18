class Solution {
public:
    int trap(vector<int>& height) {
    vector<int>pre(height.size()),suff(height.size());
    int maxi=height[0];
    for(int i=0;i<height.size();i++){
        if(maxi<height[i]) {
            maxi=height[i];
        }
        pre[i]=maxi;
    }      
    maxi=height[height.size()-1];
    for(int i=height.size()-1;i>=0;i--){
        if(maxi<height[i]) maxi=height[i];

        suff[i]=maxi;
    } 
    int sol=0;
    for(int i=0;i<height.size();i++){
        sol+=((min(pre[i],suff[i]))-height[i]);
    }
    return sol;
 }
};