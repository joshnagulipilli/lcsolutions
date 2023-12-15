class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
       vector<vector<int>>mergeintervals;
       sort(intervals.begin(),intervals.end()); // o(nlogn) + o(n)
       if(intervals.size()==0){
           return mergeintervals;
       }
       vector<int> tempintervals = intervals[0];
       for(auto it:intervals){
           if(it[0] <= tempintervals[1])
           {
               tempintervals[1]  = max(it[1] ,tempintervals[1]);
           }
           else{
                   mergeintervals.push_back(tempintervals);
                   tempintervals=it;  
           }
       }
       mergeintervals.push_back(tempintervals);
       return mergeintervals;
    }
};
auto init =[](){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return 'c';
}();

