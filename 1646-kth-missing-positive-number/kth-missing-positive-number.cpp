class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        //0(n) easy logic
    //   for(int i=0;i<arr.size();i++)
    //   {
    //     if(arr[i]<=k) k++;
    //     else break;
    //   }
    //   return k;

    //using binary search
    int low=0,high=arr.size()-1;
    while(low<=high)
    {
        int mid=(low+high)/2;
        int missing=(arr[mid]-(mid+1));
        if(missing<k) low=mid+1;
        else high=mid-1;
    }

    // return arr[high]+(k-(arr[high]-(high+1)));
    return k+high+1;
        
    }
};