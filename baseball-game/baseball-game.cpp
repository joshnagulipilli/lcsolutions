class Solution {
public:
    int calPoints(vector<string>& v) {
         stack<int>s;
         int sum=0;
           for(int i=0;i<v.size();i++)
           {
               if(v[i]=="C"){
                   s.pop();
               }
               else if(v[i]=="D"){
                   int y=s.top() * 2;
                   s.push(y);
               }
               else if(v[i]=="+"){
                      int p=s.top();
                      sum=0;
                      sum=sum+s.top();
                      s.pop();
                      int y=s.top() ;
                      sum=sum+s.top();
                      s.pop();
                      s.push(y);
                      s.push(p);
                      s.push(sum);
               }
               else{
                   int p=stoi(v[i]);
                   s.push(p);
               }
               
           }
int sum1=0;
        while(s.size()){
            sum1+=s.top(); s.pop();
        }
           return sum1;
    }
};