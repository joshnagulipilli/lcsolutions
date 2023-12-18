class Solution {
public:
    int maxSubArray(vector<int>& nums) {
       int n=nums.size();
       int maxi=INT_MIN;
       int sum=0;
       int start;
       int ansstart=-1 , ansend=-1;
       for(int i=0;i<n;i++){
        //    if(sum==0) start=i;
           sum=sum+nums[i];
           if(maxi<sum) {
               maxi=sum;
            //    ansstart=start;
            //    ansend=i;
           }
            // maxi=max(sum,maxi);
            if(sum<0){
               sum=0;
           }  
       }
    
    //    cout<<ansstart<<" "<<ansend<<endl;
          return maxi; 
    }
};
auto init = []()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return 'c';
}();