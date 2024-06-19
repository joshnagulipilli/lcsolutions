class Solution {
public:
    int minDays(vector<int>& bloomDay, int m, int k) {
        int n=bloomDay.size();
        if((long long ) m * k > n) return -1;
        int low=1,high=(int)1e9;
        while(low<high){
            int mid=low+(high-low)/2;
            if(isposs(bloomDay,m,k,mid))
            {
              high=mid;
            }
            else low=mid+1;
        }
        return low;
    }
     bool isposs(vector<int>& bloomDay , int m , int k,int day){
        int ans=0;
        for(int i=0;i<bloomDay.size();i++){
            int c=0;
            while(i<bloomDay.size() && c<k && bloomDay[i]<=day){
                c++;i++;
            }
            if(c==k) {
                ans++;
                i--;
            }
            if(ans>=m) return true;
         }
         return false;
    }
};