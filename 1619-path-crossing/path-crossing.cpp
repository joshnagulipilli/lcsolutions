class Solution {
public:
    bool isPathCrossing(string path) {
        ios::sync_with_stdio(false);
        cin.tie(0);
        map<pair<int,int>,int>m;
        int i=0,j=0;
        for(auto it:path)
        {
            if(m[{i,j}]) return 1;
            m[{i,j}]++;
            if(it=='N') j++;
            else if(it=='S') j--;
            else if(it=='E') i++;
            else i--;
        }
        if(m[{i,j}]) return 1;
        return 0;
    }
};