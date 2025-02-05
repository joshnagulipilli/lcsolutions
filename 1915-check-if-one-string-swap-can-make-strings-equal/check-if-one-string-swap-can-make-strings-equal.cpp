class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        if(s1==s2) return true;
        int c=0;
        int firstFreq[26]={0};
        int secondFreq[26]={0};
        for(int i=0;s1[i];i++){
            char a = s1[i];
            char b=s2[i];
            if(a!=b)
            {
              c++;
              if(c>2) return false;
            } 
            
            firstFreq[a-'a']++;
            secondFreq[b-'a']++;
        }
        for(int i=0;i<26;i++){
            if(firstFreq[i] != secondFreq[i]) return false;
        }
        return true;
    }
};