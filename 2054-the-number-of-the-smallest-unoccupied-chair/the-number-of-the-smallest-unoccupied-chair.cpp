class Solution {
public:
    int smallestChair(vector<vector<int>>& times, int targetFriend) {
        vector<int>chairs(times.size(),-1);
        int t=times[targetFriend][0];
        sort(times.begin(),times.end());
        for(auto time:times)
        {
            int arrival=time[0];
            int dept=time[1];
            for(int i=0;i<times.size();i++)
            {
                if(chairs[i]<=arrival)
                {
                    chairs[i]=dept;
                    if(arrival==t)
                    {
                        return i;
                    }
                    break;
                }
            }
        }
        return -1;
    }
};