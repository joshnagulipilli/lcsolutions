class Solution {
public:
   
 double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
       vector<int>v;
        int n1=nums1.size(),n2=nums2.size(), i=0,j=0;
        while(i<n1  && j<n2){
            if(nums1[i]<nums2[j]) {
                v.push_back(nums1[i]);i++;
            }
            else {
                v.push_back(nums2[j]);
                j++;
            }
        }
        while(i<n1) {
            v.push_back(nums1[i]); i++;
        }
        while(j<n2) {
            v.push_back(nums2[j]); j++;
        }
        double ans;
        int n=v.size();
        if(n%2==0) {
            ans=(v[n/2] + v[(n/2)-1])/(2.0);
        }
        else {
            ans=v[n/2];
        }
        return ans;
    }
};