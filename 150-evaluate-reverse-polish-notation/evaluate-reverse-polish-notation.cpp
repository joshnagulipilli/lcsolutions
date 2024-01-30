class Solution {
public:
      static bool Number(const string &a){
          try {
              return stoi(a)>=-200 && stoi(a)<=200;
          }
          catch(...)
          {
              return false;
          }
      }


    int evalRPN(vector<string>& tokens) {
        int n=tokens.size();
        stack<int>st;
        for(int i=0;i<n;i++){
             if(!Number(tokens[i]))
             {
                 int p=st.top();
                 st.pop();
                 int q=st.top();
                 st.pop();
             
            if(tokens[i]=="+")
            {
                st.push(p+q);
            }
            else if(tokens[i]=="-")
            {
                st.push(q-p);
            }
            else if(tokens[i]=="*"){
                st.push(p*q);
            }
            else if(tokens[i]=="/"){
                st.push(q/p);
            }
             }
        
        else{
            st.push(stoi(tokens[i]));
        }
        }
        return st.top();

    }
};