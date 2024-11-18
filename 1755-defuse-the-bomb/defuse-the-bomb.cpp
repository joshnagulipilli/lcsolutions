class Solution {
public:
    vector<int> decrypt(vector<int>& code, int k) {
        vector<int>ans;
        int n=code.size();
        for(int i=0;i<n;i++){
            int c=0;
            if(k>0){
                for(int j=1;j<=k;j++){
                    c+=code[(i+j)%n];
                }   
            }
            if(k<0){
                int p=(-1)*k;
                for(int j=1;j<=p;j++){
                    if(i-j>=0){
                        c+=code[i-j];
                    }
                    else{
                        c+=code[n+(i-j)];
                    }
                }
            }
            ans.push_back(c);
        }
        return ans;
    }
};