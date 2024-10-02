class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
       vector<int>p=arr;
       vector<int>ans;
       sort(p.begin(),p.end());
       int last=-1;
       unordered_map<int,int>mp;
       int cnt=1;
       for(int i=0;i<arr.size();i++)
       {
            if(last!=p[i])
             {
                 mp[p[i]]=cnt;
                 cnt++;
                 last=p[i];
             }
            //  else
            //  {
            //     mp[p[i]]=i-1;
            //  }
       }
    //    for(auto it:mp)
    //    {
    //     cout<<it.second<<" "<<it.first<<endl;
    //    }
       for(int i=0;i<arr.size();i++)
       {
         ans.push_back(mp[arr[i]]);
       }
       return ans;
    }
};