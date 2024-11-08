class Solution {
public:
    string largestOddNumber(string num) {
        int n=num.length();
        string str="";
        int maxi=-1;
        string ans="";
        for(int i=0;num[i];i++){
            
            int p = num[i] - '0';
            str+=num[i];
            if(p!=0 && p%2 == 1){
                 ans=str;
               }
            
        }
        return ans;
    }
};