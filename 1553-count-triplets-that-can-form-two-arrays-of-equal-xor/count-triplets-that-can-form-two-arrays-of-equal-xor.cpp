class Solution {
public:
    int countTriplets(vector<int>& arr) {
        int n=arr.size();
        int c=0;
        for(int i=0;i<n;i++)
        {
            int a=0;     
            for(int j=i+1;j<n;j++)
            {  
                int b=0;
                 a^=arr[j-1];
                    for(int k=j;k<n;k++){
                        b^=arr[k];
                        if(a==b) {
                            c++;
                        }
                    }
            }
        }
        return c;
    }
};