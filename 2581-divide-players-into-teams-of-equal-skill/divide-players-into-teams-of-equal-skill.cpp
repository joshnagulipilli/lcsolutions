class Solution {
public:
    long long dividePlayers(vector<int>& skill) {
        int n=skill.size();
        if(n==2) {
            return skill[0]*skill[1];
        }
        sort(skill.begin(),skill.end());
        long long target = skill[0]+skill[n-1];
        long long ans=0;
        int i=0,j=n-1;
        while(i<j)
        {
            int r=skill[i]+skill[j];
            if(r==target)
            {
                ans+=(skill[i]*skill[j]);
                i++;
                j--;
            }
            else return -1;
        }
        return ans;
    }
};