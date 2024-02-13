class Solution {
public:
bool ispal(string str)
{
    int i=0,j=str.size()-1;
    while(i<=j)
    {
        if(str[i]==str[j]) {
            i++;
            j--;
        }
        else return false;
    }
    return true;

}
    string firstPalindrome(vector<string>& words) {
        int n=words.size();
        for(int i=0;i<n;i++)
        {  
            if(ispal(words[i])) return words[i];
        }
        return "";
    }
};