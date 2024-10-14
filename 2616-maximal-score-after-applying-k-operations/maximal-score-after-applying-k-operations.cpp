class Solution {
public:
    long long maxKelements(vector<int>& nums, int k) {
        int n=nums.size();
        priority_queue<int>pq;
        for(int i=0;i<n;i++)
        {
            pq.push(nums[i]);
        }
        long long score=0;
        while(k-- && !pq.empty())
        {
            score+=pq.top();
            int p=pq.top();
            cout<<p<<" ";
            pq.pop();
            p=ceil(static_cast<double>(p)/3);
            cout<<p<<endl;
            pq.push(p);
        }
        return score;
    }
};