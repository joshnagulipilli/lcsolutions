class Solution {
public:
    long long largestPerimeter(vector<int>& nums) {
        int n=nums.size();
        long long sum=0;
        priority_queue<long long>pq;
        for(auto i:nums){
            pq.push(i);
            sum+=i;
        }
    
        while(!pq.empty())
        {
            long long x=pq.top();
              sum-=x;
            if(sum>x) return sum+x;
            pq.pop();
        }
        return -1;
    }
};