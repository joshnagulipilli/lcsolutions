class Solution {
public:

    void fun(vector<char>&s , int i){
        if(i>=s.size()/2) return ;
        swap(s[i],s[s.size()-i-1]);
        fun(s,i+1);
    }


    void reverseString(vector<char>& s) {
        fun(s,0);
        
    }
};