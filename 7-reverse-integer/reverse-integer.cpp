#define bound 2147483647

class Solution {
public:
    int reverse(int x) {
        long long temp=x,res=0;
        temp=abs(x);
        while(temp>0)
        {
            res=res*10+(temp%10);
            temp/=10;
        }
        if(res>bound || res<((-1)*(bound))-1) return 0;
        if(x<0) return (-1)*res;
        return res;
    }
};