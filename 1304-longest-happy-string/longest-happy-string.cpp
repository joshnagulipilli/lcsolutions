class Solution {
public:
    string longestDiverseString(int a, int b, int c) {
        priority_queue<pair<int,char>>pq;
        string ans="";
        pq.push({a,'a'});
        pq.push({b,'b'});
        pq.push({c,'c'});
        while(pq.size())
        {
            if(pq.top().first==0) break;
            int x=pq.top().first;
            char y=pq.top().second;
            pq.pop();
            int size=ans.size();
            if(size>=2 && (ans[size-2]==ans[size-1]) && ans[size-1]==y)
            {
                int secondmax=pq.top().first;
                char secondmaxoccur=pq.top().second;
                pq.pop();
                if(secondmax==0) break;
                ans+=secondmaxoccur;
                secondmax--;
                pq.push({secondmax,secondmaxoccur});
            }
            else
            {
                ans+=y;
                x--;
            }
            pq.push({x,y});
        }
        return ans;
    }
};