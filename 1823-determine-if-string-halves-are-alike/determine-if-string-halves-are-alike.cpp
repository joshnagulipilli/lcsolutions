class Solution {
public:
    bool halvesAreAlike(string s) {
        int n=s.length();
        string str1="";
        string str2="";
        for(int i=0;i<n/2;i++){
            str1+=s[i];
            str2+=s[n-i-1];
        }
        int c=0,d=0;
        for(int i=0;i<str1.size();i++){
            if(str1[i]=='A' || str1[i]=='a' || str1[i]=='E' ||str1[i]=='e' || str1[i]=='I' || str1[i]=='i' || str1[i]=='O' ||str1[i]=='o' || str1[i]=='U' || str1[i]=='u'){
                c++;
            }
        }
        for(int i=0;i<str2.size();i++){
            if(str2[i]=='A' || str2[i]=='a' || str2[i]=='E' ||str2[i]=='e' || str2[i]=='I' || str2[i]=='i' || str2[i]=='O' ||str2[i]=='o' || str2[i]=='U' || str2[i]=='u'){
                d++;
            }
        }
        return c==d;
    }
};