class Solution {
public:
    int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int m) {
         int n=grumpy.size();
         int first=0,last=0;
         int maxi=0;
         for(int i=0;i<n;i++)
         {
            if(grumpy[i]==0)
            {
                first+=customers[i];
            }
            else if(i<m)
            {
                last+=customers[i];
            }
         }
         maxi=last;
         for(int i=m;i<n;i++)
         {
            last+=customers[i]*grumpy[i];
            last-=customers[i-m]*grumpy[i-m];
            maxi = max(maxi,last);
         }
         return first+maxi;
    }
};