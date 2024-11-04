class Solution {
public:
    string compressedString(string word) {
        int n=word.size();
        int count=0,i=0,j=0;
        string comp="";
        while(j < n){
            count = 0;
            while(j < n && count < 9 && word[i] == word[j])
            {
                j++;
                count++;
            }
            comp+=to_string(count) ;
            comp+=word[i];
            i=j;
        }
        return comp;
    }
};