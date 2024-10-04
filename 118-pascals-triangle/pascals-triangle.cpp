class Solution {
public:

  
    vector<int> fun(int row){
        long long res=1;
        vector<int>arr;
        arr.push_back(1);
        for(int col=1;col<row;col++)
        {
            res=res*(row-col);
            res=res/col;
            arr.push_back(res);
        }
        return arr;

    }
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>ans;
        for(int i=1;i<=numRows;i++)
        {
            ans.push_back(fun(i));
        }
        return ans;
        
    }
};