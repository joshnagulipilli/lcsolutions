class Solution {
public:
    vector<int> majorityElement(vector<int>& arr) {
        int n=arr.size();
        vector<int>ans;
        int el1=INT_MIN,el2=INT_MIN,c1=0,c2=0;
        for(int i=0;i<n;i++)
        {
            if(c1==0 && el2!=arr[i])
            {
                el1=arr[i];
                c1=1;
            }
            else if(c2==0 && el1!=arr[i])
            {
                c2=1;
                el2=arr[i];
            }
            else if(el1==arr[i]) c1++;
            else if(el2==arr[i]) c2++;
            else
            {
                c1--;
                c2--;
            }
        }
        c1=0,c2=0;
        for(int i=0;i<n;i++)
        {
            if(el1==arr[i]) c1++;
            else if(el2==arr[i]) c2++;
        }
        if(c1 > (n/3)) ans.push_back(el1);
        if(c2> (n/3)) ans.push_back(el2);
        return ans;
    }
};