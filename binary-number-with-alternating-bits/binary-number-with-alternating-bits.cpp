class Solution {
public:
    bool hasAlternatingBits(int n) {
        int i=0;
        i=n%2;
        n/=2;
        while(n!=0){
            if(!(n%2==i)) {
                  i=n%2;
                  n/=2;
            }
            else return 0;
        }
        return 1;
        }
};