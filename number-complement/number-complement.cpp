class Solution {
public:
    int findComplement(int num) {
       int i=0;
       int sum=0;
       while(num!=0){
           if(num%2==0){
                sum+=(pow(2,i)*1);
                
           }
           else{
               sum+=(pow(2,i)*0);
           }
           num/=2;
           i++;
       }
    return sum;
    }
};