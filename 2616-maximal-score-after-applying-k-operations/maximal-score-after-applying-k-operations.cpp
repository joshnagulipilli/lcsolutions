class Solution {
public:
    long long maxKelements(vector<int>& nums, int k) {
        priority_queue<int>pq;
        for(auto it:nums)
        {
            pq.push(it);
        }
        long long score=0;
        while(k--)
        {
            
            double p=pq.top(); // to get  ceil value correct
            pq.pop();
            score+=p;
            // cout<<p<<" ";
            // p=ceil(static_cast<double>(p)/3); if double not used
            p=ceil(p/3);
            // cout<<p<<endl;
            pq.push(p);
        }
        return score;
    }
};