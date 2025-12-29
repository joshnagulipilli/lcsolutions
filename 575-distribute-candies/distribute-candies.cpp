class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        int n=candyType.size();
        unordered_set<int>s;
        for(int i=0;i<n;i++){
            s.insert(candyType[i]);
        }
        if(s.size()<=(n/2))  return s.size();
        return n/2;
    }
};